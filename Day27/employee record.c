#include <stdio.h>

struct employee 
{int empid;
char name[50];
float salary;
};

int main()
{ struct employee e[50];
int i,n;
printf("Enter number of employees: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{ printf("Enter employee id:");
  scanf("%d",&e[i].empid);
  printf("Enter name:");
  scanf("%s",e[i].name);
  printf("Enter salary:");
  scanf("%f",&e[i].salary);
}
printf("\nemployee record:\n");
for(i=0;i<n;i++)
{  printf("employee id=%d\n",e[i].empid);
   printf("name=%s\n",e[i].name);
   printf("salary=%f\n",e[i].salary);

}
    return 0;
}