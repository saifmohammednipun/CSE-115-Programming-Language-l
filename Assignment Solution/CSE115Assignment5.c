#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char str[150];

int uppercase=0,lowercase=0,digit=0,special_char=0;
int length;

void min_add()
{
    printf("Output:\n");

    int check=0;
    if(uppercase<1)
    {
        check=1;
        printf("Include atleast %d uppercase character\n",1-uppercase);
    }
    if(lowercase<2)
    {
        check=1;
        printf("Include atleast %d lowercase character\n",2-lowercase );
    }
    if(digit<1)
    {
        check=1;
        printf("Include atleast %d digit\n",1-digit);
    }
    if(special_char<1)
    {
        check=1;
        printf("Include atleast %d special character\n",1-special_char);
    }
    if(length<8)
    {
        printf("Add %d character to make your password length 8\n",8-length);
    }

    if(check==0)
    {
        printf("Strong password");
    }
    else
    {
        printf("Minimum character to add: %d\n",8-length);
    }
}

int main()
{
    printf("Input:\n");
    printf("Password Length:");
    scanf("%d",&length);
    fflush(stdin);

    printf("Password:");
    scanf("%s",str);
    fflush(stdin);

    length=strlen(str);
    fflush(stdin);

    for(int i=0,j=0;i<length;i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
          lowercase ++;
        }
         if(str[i]>='A' && str[i]<='Z')
        {
          uppercase++;
        }
        if( str[i]>='0' && str[i]<='9')
        {
          digit ++;
        }
        else
        {
          special_char++;
        }
    }
    min_add();

    return 0;
}