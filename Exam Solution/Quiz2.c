#include <stdio.h>
int main()
{
  int a;
  printf("Enter an integer between 1-5:");
  scanf("%d",&a);
   
   switch(a)
   {
       case 1:
         printf("the Roman numeral is :I ");
         break;
        case 2:
         printf("the Roman numeral is :II ");
         break;
        case 3:
         printf("the Roman numeral is :III ");
         break;
          case 4:
         printf("the Roman numeral is :IV" );
         break;
         case 5:
         printf("the Roman numeral is :V ");
         break;
   }






    return 0;
}