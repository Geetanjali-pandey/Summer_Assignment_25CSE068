#include <stdio.h>
#include <string.h>
struct book
{ char name[100];
  int bookid;
  char authorname[100];
};
int main()
{int i,ch,n,id,f=0;
struct book b[50];
do{
printf("1.Add book record\n2.Display book record\n3.search book record\n4.Exit\n");
printf("Enter your choice:");
scanf("%d",&ch);
switch(ch)
{  case 1:
      printf("Enter number of records to be added:");
      scanf("%d",&n);
      for(i=0;i<n;i++)
          {printf("Enter name:");
           scanf ("%s",b[i].name);
           printf("Enter bookid:");
           scanf("%d",&b[i].bookid);
           printf("Enter author name:");
           scanf("%s",b[i].authorname);
          }
      break;
    case 2:
        printf("Students record:\n");
        for(i=0;i<n;i++)
        { printf("Book name=%s\t",b[i].name);
          printf("Book id=%d\t",b[i].bookid);
          printf("Author name=%s\t",b[i].authorname);
          printf("\n");
        }
        break;
    case 3:
        printf("Enter book id of book to search: ");
        scanf("%d",&id);
        for(i=0;i<n;i++)
            {if(b[i].bookid==id)
               {printf("Book name=%s\t",b[i].name);
               printf("book id=%d\t",b[i].bookid);
               printf("Author name=%s\t",b[i].authorname);
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