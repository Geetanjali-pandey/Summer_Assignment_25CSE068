/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
  int x, y, i, g;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    for(i = 1;i<= x && i<= y;i++) {
        if(x % i == 0 && y % i == 0)
           { g = i;}
    }

    printf("GCD = %d", g);

    return 0;
}