/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{int i,n,j,ar[100];
printf("Enter number of elements:");
scanf("%d",&n);
printf("Enter array elements:");
for(i=0;i<n;i++)
{ scanf("%d",&ar[i]);
}
printf("Duplicate element:");
for(i=0;i<n;i++)
{ for(j=i+1;j<n;j++)
   { if(ar[i]==ar[j])
        printf("%d",ar[i]);
   }
}
    return 0;
}
