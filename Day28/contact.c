
#include <stdio.h>

struct contact 
{ int contactnumber;
char  name[50];
char  email[100];
};
int main()
{ struct contact c;
printf("Enter contact number: ");
scanf("%d",&c.contactnumber);
getchar();
printf("Enter name:");
fgets(c.name,sizeof(c.name),stdin);
printf("Enter email: ");
fgets(c.email,sizeof(c.email),stdin);
printf("Details:\n");
printf("Contact number=%d\n",c.contactnumber);
printf("name=%s",c.name);
printf("email=%s",c.email);



    return 0;
}
