
#include<stdio.h>
#include<string.h>

void Replace (char str[], char ch);


int main()
{
    
    
    char str[10];
    char ch;
    printf("Enter a string : ");
    gets(str);
    printf("Enter letter to change  : ");
    scanf(" %c", &ch);

    Replace (str,ch);

    return 0;
}

void
Replace (char str[], char ch)
{
    int n=0,i=0;
    char digit='0';
    
    for( i=0;str[i]!='\0';i++)
    {
        if(str[i]==ch)
            {
                str[i]=digit ;
                digit++;
            }

    }
    puts(str);
}