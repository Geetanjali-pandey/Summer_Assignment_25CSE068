/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{int i,n,ar[100],max,min;
printf("Enter number of elements:");
scanf("%d",&n);
printf("Enter elements:");
for(i=0;i<n;i++)
{ scanf("%d",&ar[i]);
}
max=ar[0];
min=ar[0];
for(i=0;i<n;i++)
{ if(ar[i]>=max)
       max=ar[i];
  if(ar[i]<=min)
       min=ar[i];
}
printf("maximum=%d and minimum=%d",max,min);

    return 0;
}
