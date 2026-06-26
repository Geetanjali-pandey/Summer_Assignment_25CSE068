/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{int i,ar[100],n,j,min,temp;
printf("Enter number of elements:");
scanf("%d",&n);
printf("Enter elements:");
for(i=0;i<n;i++)
    scanf("%d",&ar[i]);
for(i=0;i<n-1;i++)
{  min=i;
   for(j=i+1;j<n;j++)
   { if(ar[j]<ar[min])
        min=j;
   }
    temp=ar[i];
    ar[i]=ar[min];
    ar[min]=temp;
}
printf("sorted array:");
for(i=0;i<n;i++)
    printf("%d\n",ar[i]);
     
    return 0;
}
