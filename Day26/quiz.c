/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{int c=0,a1,a2,a3;
printf("Question 1: Which city of India is called pink City?\n");
printf("1.Mumbai\n2.Udaipur\n3.Jaipur\n4.Surat\n");
scanf("%d",&a1);
if(a1==3)
   { printf("Correct answer\n");
     c++;
   }
else 
     printf("Wrong answer\nCorrect answer=%d\n",3);
printf("Question 2: calcucate 2*5+16-10: ");
scanf("%d",&a2);
if(a2==2*5+16-10)
        { printf("Correct answer\n");
     c++;
   }
else 
     printf("Wrong answer\nCorrect answer=%d\n",2*5+16-10);
printf("Question 3: How many continents are there world?");
scanf("%d",&a3);
if(a3==7)
   { printf("Correct answer\n");
     c++;
   }
else 
     printf("Wrong answer\nCorrect answer=%d\n",7);
printf("Score=%d/3",c);
    

    return 0;
}
