/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{ int i,len=0;
char str[50];
printf("Enter string:");
fgets(str,sizeof(str),stdin);
i=0;
while(str[i]!='\n')
{  len=len+1;
   i++;
}
printf("Length of string:%d",len);

    return 0;
}

