/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() 
{int x, y, m;

    printf("Enter two numbers:");
    scanf("%d %d", &x, &y);

    m= (x> y) ?x:y;

    while(1) {
        if(m%x == 0 && m %y== 0) {
            printf("LCM = %d", m);
            break;
        }
        m++;
    }

    return 0;
}