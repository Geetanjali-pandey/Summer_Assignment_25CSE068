/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{int a,b,ch;
printf("Choose one option(1,2,3,4):\n");
printf("1. Addition\n2. Subtraction\n3.Multiplication\n4. Division\n");
scanf("%d",&ch);
printf("Enter two numbers:");
scanf("%d%d",&a,&b);
switch(ch)
{ case 1:
    printf("Sum=%d",a+b);
    break;
  case 2:
    printf("Difference=%d",a-b);
    break;
  case 3:
    printf("Product=%d",a*b);
    break;
  case 4:
    printf("Division=%d",a/b);
    break;
  default:
    printf("Invalid choice ");
  
    
}

    return 0;
}
