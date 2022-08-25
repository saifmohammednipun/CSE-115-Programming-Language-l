#include<stdio.h>
#include<string.h>


struct Patient
{
    char Registration_Number[20];
    char Name[25];
    int age;
    char Gender[20];
    char Contact_Number[12];
    char Address[30];
    char Physician_name[18];
    int Corona_status;
};


void addPatient(struct Patient* data,int idx)
{
    printf("Insert Registration Number: ");
    scanf("%s",data[idx].Registration_Number);
    printf("Insert Patient's Name: ");
    scanf("%s",data[idx].Name);
    printf("Insert age: ");
    scanf("%d",&data[idx].age);
    printf("Insert Gender: ");
    scanf("%s",data[idx].Gender);
    printf("Insert Contact Number: ");
    scanf("%s",data[idx].Contact_Number);
    printf("Insrt Address: ");
    scanf("%s",data[idx].Address);
    printf("Insert Physician Name: ");
    scanf("%s",data[idx].Physician_name);
    printf("Had corona in the past(Yes/No): ");
   
    char status[5];
    scanf("%s",status);
    
    if(strcmp(status,"Yes")==0)
        data[idx].Corona_status = 1;
    else
        data[idx].Corona_status = 0;
    printf("\nPatient added successfully\n");

}


void displayPatients(struct Patient* data,int n)
{
    printf("\nList of Patient/s who had corona-");
    
    for(int i=0;i<n;i++)
    {
        if(data[i].Corona_status)
        {
            printf("\n\nRegistration Number: %s",data[i].Registration_Number);
            printf("\nPatient Name: %s",data[i].Name);
        }
    }
}


void deletePatient(struct Patient* data,int n)
{
    char Patient_name[15];
    
    printf("\nEnter Patient Name to be deleted: ");
    scanf("%s",Patient_name);
   
    int delIdx=-1;
    for(int i=0;i<n;i++)
    {
        if(strcmp(Patient_name,data[i].Name)==0)
        {
            delIdx = i;
            break;
        }
    }
    
    for(int i=delIdx;i<n-1;i++)
    {
        struct Patient temp = data[i];
        data[i] = data[i+1];
        data[i+1] = temp;
    }
    printf("\nPatient Deleted Successfully\n");
}


void modifyContactPhysicianName(struct Patient* data,int n)
{
    char registrationNumber[20];
    printf("\nEnter patient registration number to be modified: ");
    scanf("%s",registrationNumber);
    
    for(int i=0;i<n;i++)
    {
        if(strcmp(registrationNumber,data[i].Registration_Number)==0)
        {
            printf("Enter Contact Number: ");
            scanf("%s",data[i].Contact_Number);
            printf("Enter Physician Name: ");
            scanf("%s",data[i].Physician_name);
            printf("\nData modified successfully\n");
            return;
        }
    }
   
    printf("\nRegistration Number not found\n");
}


void printMenu()
{
    printf("\n\n--------------MENU----------------");
    printf("\n1. Display names and registration number of all patients (who had corona in the past).");
    printf("\n2. Add patient information.");
    printf("\n3. Delete patient information.");
    printf("\n4. Modify contact number and physician_name");
    printf("\n5. Exit\n");
}


int main()
{
    struct Patient data[50];
    int n;
    printf("Enter Number of patient: ");
    scanf("%d",&n);
    
    int nPatients=0;
    int option;
    printMenu();
    scanf("%d",&option);
    
    while(option!=5){
        switch (option)
        {
        case 1:
            displayPatients(data,nPatients);
            break;
        case 2:
            if(nPatients>=n){
                printf("Cannot add more patients\n");
            }else{
                addPatient(data,nPatients);
                nPatients++;
            }
            break;
        case 3:
            deletePatient(data,nPatients);
            nPatients--;
            break;
        case 4:
            modifyContactPhysicianName(data,nPatients);
            break;
        }
        
        printMenu();
        scanf("%d",&option);
    }
    return 0;
}