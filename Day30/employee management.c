#include <stdio.h>
#include <string.h>
struct employee 
{ char name[100];
  int  empid;
  float salary;
};
int main()
{int i,ch,n=0,id,f;
struct employee e[50];
do{
printf("1.Add employee record\n2.Display employee record\n3.search employee record\n4.Exit\n");
printf("Enter your choice:");
scanf("%d",&ch);
switch(ch)
{  case 1:
      printf("Enter number of records to be added:");
      scanf("%d",&n);
      for(i=0;i<n;i++)
          {printf("Enter name:");
           scanf ("%s",e[i].name);
           printf("Enter employee id:");
           scanf("%d",&e[i].empid);
           printf("Enter salary:");
           scanf("%f",&e[i].salary);
          }
      break;
    case 2:
        printf("Employee record:\n");
        for(i=0;i<n;i++)
        { printf("Employee name=%s\t",e[i].name);
          printf("Employee id=%d\t",e[i].empid);
          printf(" salary=%f\t",e[i].salary);
          printf("\n");
        }
        break;
    case 3:
        printf("Enter employee id of employee to search: ");
        scanf("%d",&id);
        f=0;
        for(i=0;i<n;i++)
            {if(e[i].empid==id)
                { printf("Employee name=%s\t",e[i].name);
                  printf("Employee id=%d\t",e[i].empid);
                  printf(" salary=%f\t",e[i].salary);
                  printf("\n");
                  f=1;
                  break;}
            }
        if(f==0)
            printf("Record not found");
            break;
    case 4: 
        printf("Program ended");
        break;
    default:
        printf("Invalid choice ");
  }
}while(ch!=4);

    return 0;
}