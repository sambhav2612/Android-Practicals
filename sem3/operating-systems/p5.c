#include<stdio.h>

void main(int argc, char *argv[])
{

  int pid,i;
  pid=fork();
  
  if(pid>0)
  {  
    wait();
    printf("\nThis is parent \n");
    for(i=0;i<20;i++)
    {
      printf("%d\n",(i+1));
    }
    
  }
  if(pid==0)
  {
    execv("./p2");
  }
}

