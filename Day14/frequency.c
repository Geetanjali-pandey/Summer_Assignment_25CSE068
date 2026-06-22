/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{int i,n,a,ar[100],c=0;
printf("Enter number of elements:");
scanf("%d",&n);
printf("Enter array elements:");
for(i=0;i<n;i++)
{ scanf("%d",&ar[i]);
}
printf("Enter element for its frequency count:");
scanf("%d",&a);
for(i=0;i<n;i++)
{ if(ar[i]==a)
      c++;
}
printf("Frequency of %d in array=%d",a,c);

    return 0;
}
