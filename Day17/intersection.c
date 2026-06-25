/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{int ar1[100], ar2[100],n1,n2,i,j;
printf("Enter number of elements of first array: ");
scanf("%d",&n1);
printf("Enter elements: ");
for(i=0;i<n1;i++)
    scanf("%d",&ar1[i]);
printf("Enter number of elements of second array: ");
scanf("%d",&n2);
printf("Enter elements: ");
for(i=0;i<n2;i++)
    scanf("%d",&ar2[i]);
printf("Intersection elements: ");
for(i=0;i<n1;i++)
  {for(j=0;j<n2;j++)
     {if(ar1[i]==ar2[j])
        {printf("%d ",ar1[i]);
         break;
        }
      }
  }

    return 0;
}