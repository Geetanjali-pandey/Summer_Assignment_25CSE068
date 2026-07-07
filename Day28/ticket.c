#include <stdio.h>
#include <string.h>

int main()
{int ticketid,seatnumber,age;
char passengername[50];
printf("Enter your name:");
fgets(passengername,sizeof(passengername),stdin);
printf("Enter your age:");
scanf("%d",&age);
printf("Enter ticket id and seat number:");
scanf("%d%d",&ticketid,&seatnumber );
printf("Details:\n");
printf("Ticket id=%d\n",ticketid);
printf("Passenger name=%s", passengername);
printf("age=%d\n",age);
printf("seat number=%d",seatnumber);

    return 0;
}
