#include<stdio.h>
int main()
{

    int n, square, rem, sum=0;

    printf(" Enter number:");
    scanf("%d",&n) ;

    square = n*n ;

    while(square!=0)
    {
        rem = square%10;
        sum += rem ;
        square /= 10;
    }

    if(sum==n){
        printf("%d is a neon number",n);
    }
    else
    {
        printf("%d is not a neon number",n);
    }

    return 0;
}