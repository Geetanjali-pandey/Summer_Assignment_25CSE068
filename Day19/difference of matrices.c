/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{ int i,j,r,c,a[50][50],b[50][50],d[50][50];
printf("Enter number rows and columns:");
scanf("%d%d",&r,&c);
printf("Enter first matrix:");
for(i=0;i<r;i++)
{  for(j=0;j<c;j++)
     scanf("%d",&a[i][j]);
}
printf("Enter second matrix:");
for(i=0;i<r;i++)
{  for(j=0;j<c;j++)
     scanf("%d",&b[i][j]);
}
for(i=0;i<r;i++)
{  for(j=0;j<c;j++)
     d[i][j]=a[i][j]-b[i][j];
}
printf("difference of matrices:");
for(i=0;i<r;i++)
{  for(j=0;j<c;j++)
     printf("%d ",d[i][j]);
   printf("\n");
}

    return 0;
}