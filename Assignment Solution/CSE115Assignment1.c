#include <stdio.h>  
int main()
{  
    
    int arr1[100];
    int arr2[100];
    int arr3[100];
    int i,n,j,b=1,c=0; 
      
    printf("Input number of elements to be stored in array:");
    scanf("%d",&n);  
   
    for(i=0;i<n;i++) {  
	    printf("element - %d: ",i);
        scanf("%d", &arr1[i]);  
    } 
    
    for(i=0;i<n; i++){
		arr2[i]=arr1[i];
		arr3[i]=0;
        }
     
    for(i=0;i<n;i++){
		for(j=0;j<n;j++){
				if(arr1[i]==arr2[j]){
				   arr3[j]=b;
				    b++;
				}
			}
	 	 b=1;
        }		   
    
    for(i=0;i<n;i++){
      if(arr3[i]==2){
          c++;
          }  
    }
   printf("Total number of duplicate elements found in the array is:%d\n",c);
	
    return 0;
}