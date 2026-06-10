/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{int i,n,r, p=1;
printf("Enter a number ");
scanf("%d",&n);
while(n>0)
{ r=n%10;
p=p*r;
n=n/10;
}
printf("Product of digits=%d",p);

    return 0;
}
