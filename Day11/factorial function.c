/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int factorial(int n)
{int i,f=1;
for (i=1;i<=n;i++)
{
    f=f*i;
}
return f;}
int main()
{int n,fac;
printf("Enter a number:");
scanf("%d",&n);
fac=factorial(n);
printf("Factorial=%d",fac);
    return 0;
}
