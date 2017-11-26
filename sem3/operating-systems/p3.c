#include<stdio.h>
#include<sys/stat.h>
void main(int argc, char* argv[])
{


   printf("\nFile name is :%s",argv[1]);
   printf("\n");
   struct stat filestat;
   stat(argv[1],&filestat);
   int a= filestat.st_mode;
   if(a&0400)
   {
     printf("\nowner has read permission\n");
   }
   else printf("\nno read permission\n");
   if(a&0200)
   {
      printf("\nowner has write permission\n");
   }
   else printf("\nno write permission\n");
   if(a&0100)
   {
     printf("\nowner has execute permission\n");
   }
   else printf("\nno execute permission\n");
}
