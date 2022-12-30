#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct Person
{
    int age;
    float salary;
};
int main()
{
    //system("clear");
    struct Person person[4];
    int i;

    for(i=1;i<5;i++)
    {
        printf("\nEnter Person[%d] information\n",i);
        printf("Enter age: ");
        scanf("%d",&person[i].age);
        printf("Enter Salary: ");
        scanf("%f",&person[i].salary);

    }
       for(i=1;i<5;i++)
    {
        printf("\n\nPerson[%d] information\n",i);
        printf("Age:%d",person[i].age);
        printf("\nSalary:%.2f",person[i].salary);
        

    }

    

   

   
}