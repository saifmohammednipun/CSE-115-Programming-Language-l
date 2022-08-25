#include<stdio.h>
int main(){

int arr[5],i;

printf("Insert 5 elements of the array:\n");

for (int i=0; i<5; i++)
 {
    printf("Element %d:", i+1);
    
    scanf("%d", &arr[i]);

 }

    int maximum=arr[0];

 for (i=1; i<5; i++)
{
    if (arr[i]>maximum)
    {
        maximum=arr[i];

    }
}


printf ("The maximum element of numbers is:%d\n", maximum );


if (maximum%arr[i]==0)
{
    printf ("Good maximum");

}

else
{
 
 printf("Bad Maximum");

} 




    return 0;
}