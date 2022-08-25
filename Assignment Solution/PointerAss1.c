
#include <stdio.h>
int max(int *p, int size)
{
int i;
int max_element = *(p);
 
for (i = 1; i < size; i++)
{
  if (*(p+i)>max_element)
  max_element = *(p+i);
  
}

return max_element;
}
int main()
{
   int arr[7]={10,2,7,4,5,6,2};
   int l=max(arr,7);
   printf("Largest Element is:%d",l);
}
