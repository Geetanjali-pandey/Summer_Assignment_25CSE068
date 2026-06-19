/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void prime(int n)
{int i,f=0;
for(i=1;i<=n;i++)
{ if(n%i==0)
  {f=f+1;}
}
if (f==2)
     printf("It is prime number");
else 
     printf("It is not prime number");}

int main()
{ int n;
printf("Enter a number:");
scanf("%d",&n);
prime(n);

    return 0;
}
