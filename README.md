解压后，进入文件夹，然后make

将make之后生成的mkyaffs2image文件拷贝到/usr/bin目录下

$ su
# cp mkyaffs2image /usr/bin/
# chmod 777 /usr/bin/mkyaffs2image

之后

$ mkyaffs2image 
mkyaffs2image: image building tool for YAFFS2 built Jan  6 2012
usage: mkyaffs2image dir image_file [convert]
           dir        the directory tree to be converted
           image_file the output file to hold the image
           'convert'  produce a big-endian image from a little-endian machine

表明安装成功，同时也可以看到该命令的用法

mkyaffs2image dir image_file

例如，针对Android源码中的system.img文件的生成，可以使用

$ mkyaffs2image out/target/product/smdkv210/system/ out/target/product/smdkv210/system.img
