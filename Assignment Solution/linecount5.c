#include<stdio.h>
#include<stdlib.h>

int main()
{
   FILE *fp;
   char ch;
   int length=0;
   
   fp=fopen("countline.txt","r");
   
   if(fp==NULL)
   {
       printf("\n File does not exist!");
       
       
       exit(0);
   }
  
  
   while((ch=fgetc(fp))!=EOF)
   {
       printf("%c",ch);
       if(ch=='\n')
         length++;
   }
   
   printf("\nThe lines in file are:%d",length+1);
   
   fclose(fp);
   
   return 0;
}