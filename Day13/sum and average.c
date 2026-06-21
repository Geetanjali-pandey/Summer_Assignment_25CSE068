/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{int i,n,ar[100],sum=0;
float avg;
printf("Enter number of elements:");
scanf("%d",&n);
printf("Enter elements:");
for(i=0;i<n;i++)
{ scanf("%d",&ar[i]);
}
for(i=0;i<n;i++)
{ sum=sum+ar[i];
}
avg=sum/(float)n;
printf("sum=%d and average=%f",sum, avg);


    return 0;
}
