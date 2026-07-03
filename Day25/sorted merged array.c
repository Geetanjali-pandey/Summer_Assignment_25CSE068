/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{int i,ar1[50],ar2[50],ar3[50];
int j,k,n1,n2;
printf("Enter size of array 1:");
scanf("%d",&n1);
printf("Enter first sorted array:");
for(i=0;i<n1;i++)
   scanf("%d",&ar1[i]);

printf("Enter size of array 2:");
scanf("%d",&n2);
printf("Enter second sorted array:");
for(i=0;i<n2;i++)
   scanf("%d",&ar2[i]);

i=j=k=0;
while(i<n1&&j<n2)
    {if(ar1[i]<=ar2[j])
            ar3[k++]=ar1[i++];
        else
            ar3[k++] = ar2[j++];
    }
while(i<n1)
    ar3[k++] = ar1[i++];
while(j < n2)
        ar3[k++] = ar2[j++];
printf("Merged array:\n");
for(i=0;i<k;i++)
    printf("%d ",ar3[i]);
        

    return 0;
}
