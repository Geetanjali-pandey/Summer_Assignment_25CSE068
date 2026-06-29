/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{ int i,c=0,v=0;
char str[50];
printf("Enter string:");
fgets(str,sizeof(str),stdin);
i=0;
while(str[i]!='\n')
{   if(str[i]>='A'&&str[i]<='Z')
           str[i]=str[i]+32;
    if(str[i]>='a'&&str[i]<='z')
        {  if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
               v++;
            else
               c++;
        }
    i++;
}
printf("vowels count=%d\nconsonants count=%d",v,c);
    return 0;
}
