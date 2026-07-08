#include <stdio.h>
#include <string.h>

char name[50][50];
char phone[50][15];
int n=0;

void add()
{int i;
printf("Enter number of contacts: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{ printf("\nContact %d\n",i+1);
  printf("Enter Name: ");
  scanf("%s",name[i]);
  printf("Enter Phone Number: ");
  scanf("%s",phone[i]);
    }
}
void display()
{int i;
printf("\nContact List\n");
for(i=0;i<n;i++)
    { printf("Name=%s\t",name[i]);
      printf("Phone=%s\n",phone[i]);
    }
}

void search()
{int i,f=0;
char s[50];
printf("Enter Name to search: ");
scanf("%s",s);
for(i=0;i<n;i++)
    {if(strcmp(name[i],s)==0)
        {printf("Name=%s\n",name[i]);
         printf("Phone=%s\n",phone[i]);
         f=1;
         break;
        }
    }
if(f==0)
    printf("Contact not found");
}

int main()
{int ch;
do{
    printf("\n1.Add Contact");
    printf("\n2.Display Contacts");
    printf("\n3.Search Contact");
    printf("\n4.Exit");
    printf("\nEnter Choice: ");
    scanf("%d",&ch);
switch(ch)
    {case 1:
        add();
        break;

    case 2:
        display();
        break;

    case 3:
        search();
        break;

    case 4:
        printf("Program Ended");
        break;

    default:
        printf("Invalid Choice");
    }
}while(ch!=4);

    return 0;
}