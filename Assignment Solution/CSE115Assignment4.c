#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i,j;
    printf("Input the string:");
    gets(str);

    for(i=0; str[i]!='\0'; ++i)
    {
        while(!((str[i]>='a'&&str[i]<='z') || (str[i]>='A'&&str[i]<='Z' || str[i]=='\0')))
        {
            for(j=i;str[j]!='\0';++j)
            {
              str[j]=str[j+1];
            }
         str[j]='\0';
        }
    }
    printf("After removing the Output String:%s",str);


    return 0;
}
