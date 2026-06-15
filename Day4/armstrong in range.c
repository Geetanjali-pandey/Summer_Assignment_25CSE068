/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<math.h>
int main()
{int i,j,t,u,l,r,y,p,s;
printf("Enter start value:");
scanf("%d",&l);
printf("Enter end value:");
scanf("%d",&u);
for(i=l;i<=u;i++)
 { p=0;
   s=0;
   t=i;
   while(t>0)
  { p++;
   t=t/10;}
   y=i;
   t=i;
   while(t>0)
   { r=t%10;
     t=t/10;
     s=s+pow(r,p); }
   if(y==s)
    printf("%d,",y);
}

    return 0;
}
