/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main()
{
char name[10][50],temp[50];
int n,i,j;

printf("Enter number of names: ");
scanf("%d",&n);
getchar();

printf("Enter names:\n");
for(i=0;i<n;i++)
    fgets(name[i],sizeof(name[i]),stdin);

for(i=0;i<n-1;i++)
{for(j=0;j<n-i-1;j++)
    {if(strcmp(name[j],name[j+1])>0)
        {strcpy(temp,name[j]);
         strcpy(name[j],name[j+1]);
         strcpy(name[j+1],temp);
        }
    }
}

printf("Names in alphabetical order:\n");
for(i=0;i<n;i++)
    printf("%s",name[i]);

return 0;
}