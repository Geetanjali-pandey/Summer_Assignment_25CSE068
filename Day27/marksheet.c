#include <stdio.h>

struct student
{int roll;
char name[50];
float m1,m2,m3,total,per;
};

int main()
{struct student s;
printf("Enter Roll Number:");
scanf("%d",&s.roll);
printf("Enter Name:");
scanf("%s",s.name);
printf("Enter Marks of 3 Subjects:");
scanf("%f%f%f",&s.m1,&s.m2,&s.m3);
s.total=s.m1+s.m2+s.m3;
s.per=s.total/3;
printf("\n-----MARKSHEET-----");
printf("\nRoll:%d",s.roll);
printf("\nName:%s",s.name);
printf("\nSubject 1:%.2f",s.m1);
printf("\nSubject 2:%.2f",s.m2);
printf("\nSubject 3:%.2f",s.m3);
printf("\nTotal:%.2f",s.total);
printf("\nPercentage:%.2f",s.per);

if(s.per>=40)
    printf("\nResult:Pass");
else
    printf("\nResult:Fail");

    return 0;
}