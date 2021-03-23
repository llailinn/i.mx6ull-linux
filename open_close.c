		#include<sys/types.h>
		#include<sys/stat.h>
		#include<fcntl.h>
		#include<unisted.h>
		#include<stdio.h>
		
		int main()
		{
		   int fd;
		   fd = open("./test.txt",O_RDONLY|O_CREAT,0666);//这个是
		   if(fd <0 )
		   {
		     printf("error! error code %d:\n",fd)
		    }
		   return 0;
		}
