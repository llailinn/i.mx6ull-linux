#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unisted.h>
#include<stdio.h>

 int main( int argc ,char (*argv)( )  )
 {
     int fd1,fd2;
     char buf[1024];
     int read_size=0;
     fd1 = open(argv[1],O_RDONLY);
     fd2 = open(argv[2],O_RDONLY|O_CREAT,0666) //最后一个参数0666，设置成了文件可读可写

     if(fd1 <0 || fd2 <0 )
     {
       printf("open error,error code fd1:%d fd2：%d\n",fd1,fd2);
       return -1;
     }

     while(1)
     {
          read_size = read(fd1,buf,sizeof(buf));
          if(read_size == 0)
          {
            break;
          }
            write(fd2,buf,sizeof(buf));
         }
     close(fd1);
    close(fd2);
    return 0;
 }
