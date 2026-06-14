/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{int bin,dec=0,r,p=1;
printf("Enter binary number: ");
scanf("%d", &bin);
while (bin > 0)
{r= bin % 10;
dec=dec + r * p;
p= p * 2;
bin = bin / 10;
}
printf("Decimal = %d", dec);

return 0;
}