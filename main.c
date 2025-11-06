#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  char input[100];
  FILE* fp;
  char c;
   
   
  // c = fgetc(fp); 
    
  //fopen
  fp = fopen("sample.txt", "r");
  if(fp == NULL)
  {
        printf("failed to open file!\n");
        system("PAUSE");
        return -1;
        }
 //fprintf
 #if 0
  while( (c = fgetc(fp)) != EOF )
  {
      putchar(c);   
         
  }
 #else 
  while( fgets(input, 100, fp) >  0)
  {
         printf("%s", input);
         
  }
  #endif
  
  
  //fclose
   fclose(fp);
  
  system("PAUSE");	
  return 0;
}



