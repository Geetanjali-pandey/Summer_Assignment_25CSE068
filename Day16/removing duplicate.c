/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{int ar[100], n, i, j, k;
printf("Enter number of elements: ");
scanf("%d", &n);
printf("Enter elements: ");
for(i = 0; i<n; i++)
    scanf("%d", &ar[i]);
for(i = 0;i < n; i++)
    {for(j= i+1;j<n; )
        {if(ar[i] == ar[j])
        {for(k = j; k < n - 1; k++)
            ar[k] = ar[k + 1];
            n--;
        }
            
        else
                j++;
        }
    }
printf("Array after removing duplicates:\n");
for(i=0;i<n;i++)
printf("%d ", ar[i]);

    return 0;
}