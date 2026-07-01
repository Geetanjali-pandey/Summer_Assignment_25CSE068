/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main()
{char str[50],max;
int i,j,c,cmax=0;
printf("Enter string: ");
fgets(str,sizeof(str),stdin);
for(i=0;str[i]!='\n';i++)
{     c=0;
      for(j=0;str[j]!='\n';j++)
            if(str[i]==str[j])
                c++;
      if(c>cmax)
        { cmax=c;
          max=str[i];
        }
    }

printf("character=%c with maximum frequency=%d",max,cmax);

    return 0;
}