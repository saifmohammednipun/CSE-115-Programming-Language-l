#include <stdio.h>
#include <stdlib.h>
#include<string.h>

char str[140];

int length;

void Replace( char arr[], char oldChar, char newChar )
{
    for(int i=0;i<length;i++)
    {
        if(arr[i]==oldChar)
        {
            arr[i]=newChar;
        }
    }
}

int main()
{
    char oldC,newC;
    printf("Enter a string: ");
    gets(str);
    length = strlen(str);
    printf("Enter a character to be replaced: ");
    fflush(stdin);
    scanf("%c",&oldC);

    printf("Enter a character that is going to replace the old character: ");
    fflush(stdin);
    scanf("%c",&newC);

    Replace(str,oldC,newC);


    printf("After replacing old character with new character the string is:\n");
    for( int i = 0 ; i<length; i++ )
    {
        printf("%c",str[i]);
    }

    return 0;
}