#include <stdio.h>

struct student 
{int roll_no;
char name[50];
float marks;
};

int main()
{ struct student s[50];
int i,n;
printf("Enter number of students: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{ printf("Enter roll no.:");
  scanf("%d",&s[i].roll_no);
  printf("Enter name:");
  scanf("%s",s[i].name);
  printf("Enter marks:");
  scanf("%f",&s[i].marks);
}
printf("Students record:\n");
for(i=0;i<n;i++)
{  printf("roll no.=%d\n",s[i].roll_no);
   printf("name=%s\n",s[i].name);
   printf("marks=%f\n",s[i].marks);

}
    return 0;
}
