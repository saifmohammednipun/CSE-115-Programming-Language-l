#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct _CarModel
{
char Company[120];
char Model[120];
float price;
}Car;

void NewRecord(Car arr[],int number)
{
printf("Enter the Car Informations.\n");
printf("Company:");
fflush(stdin);
fgets(arr[number].Company,40,stdin);
printf("Model:");
fflush(stdin);

fgets(arr[number].Model,40,stdin);
printf("Price:");
scanf("%f",&arr[number].price);

}


void Display_DataBase(Car arr[],int number)
{
int i;
for(i=0;i<number;i++)
{

printf("Car Information:%d\n",i+1);
printf("Company:%s\nModel:%s \nPrice:%f\n",arr[i].Company,arr[i].Model,arr[i].price);
}
}

int Delete_DataBase(Car arr[],int number, char cmp[])
{

int i,pos=0,newcount;
for(i=0;i<number;i++)
{
if(!strcmp(arr[i].Company,cmp))
{

strcpy(arr[pos].Company,arr[i].Company);
strcpy(arr[pos].Model,arr[i].Model);
arr[pos].price=arr[i].price;
pos++;
newcount++;
}

}
return newcount;
}

void Update_Text(Car arr[],int number)
{
FILE *infile;
int i;

infile=fopen("CarDataBase.txt","w");
for(i=0;i<number;i++)
{

fprintf(infile,"%s%s%f\n",arr[i].Company,arr[i].Model,arr[i].price);
}
}

int main(void)
{
Car database[100];
int count=0,i,n,choice;
char name[40];



while(1)
{

printf("1.Car Booking.\n");
printf("2.Display Data Base\n");
printf("3.Remove Records\n");
printf("4.Update the Text file Record.\n");
printf("0.Exit\n");
printf("Enter your choice:");
scanf("%d",&choice);

switch (choice)
  
{
case 1: printf("Enter the number of bookings:");
scanf("%d",&n);
if(count==100) 
{
printf("Data base is full!!\n");
break;
}

for(i=0;i<n;i++)
{
NewRecord(database,count);
count++;
}
break;
  
case 2: Display_DataBase(database,count);
break;
  
case 3: printf("Enter the company name:");
fflush(stdin);
fgets(name,40,stdin);
count=Delete_DataBase(database,count,name);
break;
  
case 4: Update_Text(database,count);
break;

case 0: exit(0); 
  
default:printf("Enter a correct choice.\n");
break;
}
}
return 0;
}