/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{int age;
printf("Enter age:");
scanf("%d",&age);
if(age<0)
   printf("Invalid age");
else
 { if(age>=18)
       printf("Eligible for voting ");
   else
       printf("Not eligible for voting ");
 }
    return 0;
}
