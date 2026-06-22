/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{int i,n,a,ar[100],f=0;
printf("Enter number of elements:");
scanf("%d",&n);
printf("Enter array elements:");
for(i=0;i<n;i++)
{ scanf("%d",&ar[i]);
}
printf("Enter element to be searched:");
scanf("%d",&a);
for(i=0;i<n;i++)
{ if(ar[i]==a)
      {printf("%d found at index %d",a,i);
      f=1;
      break;}
}
if(f==0)
   printf("Element not found");

    return 0;
}
