#include<stdio.h>
#include<stdlib.h>

void main(int agrc, char *argv[])
{

  FILE *s;
  FILE *d;

  s=fopen(argv[1],"r");
  d=fopen(argv[2],"w");

  char ch;
  while(1)
  {

    ch=fgetc(s);
    if(ch==EOF)
    break;
    fputc(ch,d);
  }
  
  fclose(s);
  fclose(d);

}
