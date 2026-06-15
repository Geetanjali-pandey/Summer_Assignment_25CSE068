/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{int n,r,bin=0,p=1;
printf("Enter decimal number: ");
scanf("%d", &n);
while (n > 0)
{r = n % 2;
bin=bin+r*p;
p=p*10;
n=n / 2;
}
printf("Binary = %d", bin);

return 0;
}