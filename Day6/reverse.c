/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int r=0;
int reverse(int n)
{if (n == 0)
    return r;
    r= r*10+n%10;
    return reverse(n/10);
}
int main()
{int n;
printf("Enter a number:");
scanf("%d", &n);
printf("Reverse = %d", reverse(n));

return 0;
}
