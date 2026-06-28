/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{ int i,j,r,c,a[50][50],f=1;
printf("Enter number rows and columns:");
scanf("%d%d",&r,&c);
printf("Enter matrix:");
for(i=0;i<r;i++)
{  for(j=0;j<c;j++)
     scanf("%d",&a[i][j]);
}
if(r!=c)
   printf("It should be square matrix");
else {
for(i=0;i<r;i++)
{  for(j=0;j<c;j++)
    { if(a[i][j]!=a[j][i])
        { f=0;
          break;
        }
    }
}
if(f==1)
    printf("It is a symmetric matrix");
else
    printf("It is not a symmetric matrix");
}
    return 0;
}