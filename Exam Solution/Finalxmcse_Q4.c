#include<stdio.h>

float ProductOf_Series(int n){

    //Base condition
    if(n == 1)
        return 1;
    //General case
    else
    {
        
        return (1.0/n)*ProductOf_Series(n-1);
    }


}

int main(){

    int n;

    printf("Enter the value of n (n must be positive integer) : ");
    
    scanf("%d",&n);

    
    float answer = ProductOf_Series(n);
    printf("Ans : %.2f",answer);

}