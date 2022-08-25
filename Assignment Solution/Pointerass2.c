#include <stdio.h>

int length(char *s)
{
     int i=0,length=0;
        
        while(*s !='\0')
        {       
           length++;
            s++;    
        }
       
        return length;
}


int main()
{
        int num,i;
        char str[100];
        printf("Insert String: ");
        gets(str);
        fflush(stdin);
        
        
        printf("String Length: %d",length(str));
        
        return 0;
}
