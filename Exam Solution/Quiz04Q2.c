#include<stdio.h>
#include<stdlib.h>

float round_money(float var){
     float value = (int)(var * 100 + .5);

     return (float)value / 100;

}

void charges(float *avg,float *cost,float hours){

*cost = 7.99;
float temp = hours-10;

     if(temp>0)

      { 

         *cost += temp*1.99;

      }

*avg = *cost/hours;

*avg = round_money(*avg);

*cost = round_money(*cost);

}

int main(){
FILE *f1,*f2;
char filename[100];

f1 = fopen("usage.txt","r");

if(f1==NULL)

{

 printf("Error to Opening File!!");

}

f2=fopen("charges.txt","w");

int month,year;

fscanf(f1,"%d%d",&month,&year);
fprintf(f2,"Charges for %d/%d\n",month,year);
fprintf(f2,"Charge");
fprintf(f2,"Customer Hours Used Per Hour Average Cost\n");

while(!feof(f1)){

int cus_id;

float hours,avg,cost;

fscanf(f1,"%d%f",&cus_id,&hours);

charges(&avg,&cost,hours);

fprintf(f2,"%d %.1f %.2f %.2f\n",cus_id,hours,cost,avg);
}

printf("charges.txt generated Successfully!!\n");
fclose(f2);

}