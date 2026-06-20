/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void fibonacci(int n)
{int i,c,a=0,b=1;
printf("%d,%d,",a,b);
for(i=3;i<=n;i++)
{c=a+b;
printf("%d,",c);
a=b;
b=c;}
}

int main()
{int n;
printf("Enter number of terms:");
scanf("%d", &n);
fibonacci(n);
    return 0;
}
