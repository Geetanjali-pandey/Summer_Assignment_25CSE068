/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{ int i,j,k,r1,r2,c1,c2,a[50][50],b[50][50],c[50][50];
printf("Enter number rows and columns for first matrix:");
scanf("%d%d",&r1,&c1);
printf("Enter first matrix:");
for(i=0;i<r1;i++)
{  for(j=0;j<c1;j++)
     scanf("%d",&a[i][j]);
}
printf("Enter number rows and columns for second matrix:");
scanf("%d%d",&r2,&c2);
printf("Enter second matrix:");
for(i=0;i<r2;i++)
{  for(j=0;j<c2;j++)
     scanf("%d",&b[i][j]);
}
if(c1==r2)
{  for(i=0;i<r1;i++)
      {for(j=0;j<c2;j++)
          { c[i][j]=0;
        for(k=0;k<c1;k++)
            c[i][j]=c[i][j]+a[i][k]*b[k][j];
          }
      }
}
else
    printf("multiplication not possible");
            
printf("multiplication of matrices:");
for(i=0;i<r1;i++)
{  for(j=0;j<c2;j++)
     printf("%d ",c[i][j]);
   printf("\n");
}

    return 0;
}
