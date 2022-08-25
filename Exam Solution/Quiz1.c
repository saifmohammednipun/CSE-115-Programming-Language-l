#include <stdio.h>
int main()
{ 
    int a,b,c;
    printf("Enter 3 sides of a triangle:");
    scanf("%d%d%d",&a,&b,&c);
    
    

    if((a+b>c)&&(b+c>a)&&(a+c>b))
    {
      if (a==b && b==c)
      {
        printf("The triangle is a Equlilateral");
      }
      else if(a==b || b==c|| a==c)
      {
        printf("The triangle is a isoceles");
      }
       else
       {
          printf("It is an scalene");

       }
    }
      else 
      printf("triangle cannot be formed");





    return 0;
}