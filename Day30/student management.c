#include <stdio.h>
#include <string.h>
int main()
{int i,ch,n=0,r,f;
int roll[50];
char name[50][50];
float marks[50];
do{
printf("1.Add record\n2.Display record\n3.search record\n4.Exit\n");
printf("Enter your choice:");
scanf("%d",&ch);
switch(ch)
{  case 1:
      printf("Enter number of records to be added:");
      scanf("%d",&n);
      for(i=0;i<n;i++)
          {printf("Enter name:");
           scanf ("%s",name[i]);
           printf("Enter roll number:");
           scanf("%d",&roll[i]);
           printf("Enter marks:");
           scanf("%f",&marks[i]);
          }
      break;
    case 2:
        printf("Students record:\n");
        for(i=0;i<n;i++)
        { printf("Name=%s\t",name[i]);
          printf("Roll number=%d\t",roll[i]);
          printf("Marks=%f\t",marks[i]);
          printf("\n");
        }
        break;
    case 3:
        printf("Enter roll number of student to search: ");
        scanf("%d",&r);
        f=0;
        for(i=0;i<n;i++)
            {if(roll[i]==r)
               {printf("Name=%s\t",name[i]);
               printf("Roll number=%d\t",roll[i]);
               printf("Marks=%f\t",marks[i]);
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
