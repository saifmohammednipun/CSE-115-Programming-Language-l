#include<stdio.h>


int isPrime(int n)
{
    if(n<=1)
    {
        return 0;
    }
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }

    return 1;
}
int main()
{
    int arr1[10];
    int arr2[10];
    int x=0;
    printf(" Insert 10 numbers(Please do not enter values less than 2 and no repetition number:\n");
    
    
    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr1[i]);
        
        
        if(isPrime(arr1[i])==1)
        {
            arr2[x]=arr1[i];
            x++;
        }
    }

    printf("The prime numbers are:\n");
    for(int i=0;i<x;i++)
    {
        printf("%d\n",arr2[i]);
    }

    int maximum=arr2[0];
    
    
    for(int i=0;i<x;i++)
    {
        if(maximum<arr2[i])
        {
            maximum=arr2[i];
        }
    
    
    }

    printf("Maximum prime number is: %d",maximum);
    
    
    
    return 0;


}