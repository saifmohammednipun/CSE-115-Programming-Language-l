#include <stdio.h>
#include <string.h>

typedef struct{
char name[50];
int id;
char dept[20];
double cgpa;
}student;


void saveByDept(char *fileName, char *deptName , student allStudents[], int size)
{
FILE *fp;
int i;
fp = fopen(fileName, "w");

for(i = 0; i < size; i++)
   {
    if(strcmp(deptName, allStudents[i].dept) == 0)
       {
           fprintf(fp, "%s %d %s %lf\n", allStudents[i].name, allStudents[i].id, allStudents[i].dept, allStudents[i].cgpa);
       }

    }
  
   fclose(fp);
}


void deleteByCGPA(char *fileName){
FILE *fp, *ft;
student s;

fp = fopen(fileName, "r");
ft = fopen("Temp.txt", "w");
  
  while(!feof(fp)){

    fscanf(fp, "%s %d %s %lf", s.name, &s.id, s.dept, &s.cgpa);
  

     if(s.cgpa < 3)
    {  

      fprintf(ft, "%s %d %s %lf\n", s.name, s.id, s.dept, s.cgpa);
     
    }
}
  

fclose(fp);
  

fclose(ft);
  

remove(fileName);

rename("Temp.txt", fileName);
}


int main()
{

student allStudents[] = {{"Abir", 1, "CSE", 4.00},
{"Kabir", 2, "ME", 3.00},
{"Azmal", 3, "CSE", 1.00},
{"Kalam", 4, "ECE", 4.00},
{"Abrar", 5, "ME", 3.50},
{"Fara", 6, "CSE", 2.50},
{"Nokul", 7, "CSE", 4.00},
{"Marium",8,"CSE",3.50}};
  
   
saveByDept("cse.txt", "CSE", allStudents, 8);
  

deleteByCGPA("cse.txt");

return 0;
}