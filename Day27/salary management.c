#include <stdio.h>

struct employee
{int id;
char name[50];
float basic,da,hra,gross;
};

int main()
{struct employee e;
printf("Enter Employee ID:");
scanf("%d",&e.id);
printf("Enter Name:");
scanf("%s",e.name);
printf("Enter Basic Salary:");
scanf("%f",&e.basic);
e.da=0.10*e.basic;
e.hra=0.20*e.basic;
e.gross=e.basic+e.da+e.hra;
printf("\nEmployee ID:%d",e.id);
printf("\nName:%s",e.name);
printf("\nBasic Salary:%.2f",e.basic);
printf("\nDA:%.2f",e.da);
printf("\nHRA:%.2f",e.hra);
printf("\nGross Salary:%.2f",e.gross);

    return 0;
}