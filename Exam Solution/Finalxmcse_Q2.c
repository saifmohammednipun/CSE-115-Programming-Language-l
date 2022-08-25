#include <stdio.h>
#include <string.h>
 

int isModifyPalindrome(char str[])
{
   int i, len = 0,j;  
    
      
     
    len = sizeof(str)/sizeof(str[0]);  

    for(i = 0; i < len; i++){  
        if(str[i] == ' '){  
            for(j=i;j<len;j++)  
        {  
            str[j]=str[j+1];  
        }  
        len--;  
        }  
    }  
    
    int l = 0,x=0;
    int h = strlen(str) - 1;
 
   
    while (h > l)
    {
        if (str[l++] != str[h--])
        {
            
            return x;
        }
    }
   
    return x+1;
}

int isPalindrome(char str[])
{
   
    int l=0,x=0;
    int h=strlen(str)-1;
 
  
    while (h > l)
    {
        if (str[l++] != str[h--])
        {
            
            return x;
        }
    }
   
    return x+1;
}
 

int main()
{
    char str[50]; 
    printf("Enter string: ");
    scanf("%[^\n]s",str);
    int x = isPalindrome(str);
    if(x==0){
        printf("Not Palindrome \n");
    }
    else
    {
        printf ("Palindrome \n");
    }
    
    int y = isModifyPalindrome(str);
    if(y==0){
        printf("Not Palindrome ");
    }
    else{
        printf ("Palindrome ");
    }
    
    return 0;
}