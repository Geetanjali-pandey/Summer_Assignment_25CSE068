/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{int n,r,count= 0;
printf("Enter a number: ");
scanf("%d", &n);
while (n > 0)
{r = n % 2;
if (r == 1)
    count++;
n = n / 2;
}
printf("Set bits = %d", count);
return 0;
}