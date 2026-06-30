/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main()
{ int i,len=0,f=0;
char str[50],s[50],c;
printf("Enter string:");
fgets(str,sizeof(str),stdin);
printf("enter a character:");
scanf("%c",&c);
i=0;
while(str[i]!='\n')
{  if(str[i]==c)
        f++;
    i++;
}
printf("frequency=%d",f);


    return 0;
}