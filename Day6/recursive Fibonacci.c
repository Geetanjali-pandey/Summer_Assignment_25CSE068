/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int Fibonacci (int n)
{ if (n==1)
    return 0;
 else if (n==2)
    return 1;
 else 
    return Fibonacci(n-1)+Fibonacci(n-2);
}

int main()
{int i,n;
printf("Enter number of terms:");
scanf("%d",&n);
for(i=1;i<=n;i++)
 { printf("%d,", Fibonacci (i));
 }

    return 0;
}
