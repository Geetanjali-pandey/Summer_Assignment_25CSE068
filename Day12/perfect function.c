/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void perfect(int n)
{int i,s=0;
for(i=1;i<n;i++)
{ if(n%i==0)
    s=s+i;
}
if(n==s)
  printf("It is a perfect number ");
else
  printf("It is not a perfect number ");
}

int main()
{int n;
printf("Enter a number:");
scanf("%d",&n);
perfect(n);
return 0;
}
