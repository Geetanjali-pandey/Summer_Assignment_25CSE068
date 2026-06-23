/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{int i,n,ar[100],last;
printf("Enter number of elements:");
scanf("%d",&n);
printf("Enter array elements:");
for(i=0;i<n;i++)
{scanf("%d",&ar[i]);
}
last=ar[n-1];
for(i=n-1;i>0;i--)
{ar[i]=ar[i-1];
}
ar[0]=last;
printf("Array:");
for(i=0;i<n;i++)
{printf("%d ",ar[i]);
}

    return 0;
}