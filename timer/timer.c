#include<stdio.h>
#include<sys/time.h>
#include<unistd.h>

int main()
{
  	struct timeval time_now = {0};
	long time_sec = 0;
 	long time_start = 0;//1毫秒 = 1秒/1000 
	long time_end = 0;//1毫秒 = 1秒/1000 

 	gettimeofday(&time_now,NULL);
	time_sec = time_now.tv_sec;
  	time_start = time_sec * 1000 + time_now.tv_usec/1000;

	usleep(1000*15);
	sleep(2);
	
	gettimeofday(&time_now,NULL);
	time_end = time_now.tv_sec * 1000 + time_now.tv_usec/1000;

  	printf("Total test time = %ld second %ld mil second\n",((time_end-time_start)/1000),((time_end-time_start)%1000));
  

  return 0;
}