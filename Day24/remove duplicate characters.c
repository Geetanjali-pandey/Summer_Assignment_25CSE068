/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{char str[50];
int i,j,f;
printf("Enter string:");
fgets(str,sizeof(str),stdin);

i=0;
while(str[i]!='\n'&&str[i]!='\0')
     {f=0;
      j=0;
      while(j<i)
         {if(str[i]==str[j])
             {f=1;
              break;
             }
         j++;
        }
    if(f==0)
    printf("%c",str[i]);
    i++;
    }

return 0;
}