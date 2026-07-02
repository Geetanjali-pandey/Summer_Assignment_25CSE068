/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
char str[50];
int i,count;
printf("Enter string: ");
fgets(str,sizeof(str),stdin);
i=0;
while(str[i]!='\n'&&str[i]!='\0')
{  count=1;
   while(str[i]==str[i+1])
    {  count++;
       i++;
    }
    printf("%c%d",str[i],count);
    i++;
}
   return 0;
}