/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
int main()
{ int i,j,f;
char str[50];
printf("Enter string:");
fgets(str,sizeof(str),stdin);
for(i=0;str[i]!='\n';i++)
{   f=0;
    for(j=0;str[j]!='\n';j++)
      {if(i!=j&&str[i]==str[j])
           { f=1;
             break;
           }
      }
    if(f==0)
        {printf("%c",str[i]);
         break;
        }
}

    return 0;
}
