#include <stdio.h>
#include <string.h>

int main()
{int bookid, roll;
char bookname[50],studentname[50],authorname[50];
char issuedate[50], returndate[50];
printf("Enter your roll number and name:");
scanf("%d",&roll);
getchar();
fgets(studentname, sizeof(studentname), stdin);
printf("Enter book id and book name:");
scanf("%d",&bookid);
getchar();
fgets(bookname, sizeof(bookname), stdin);
printf("Enter authorname:");
fgets(authorname, sizeof(authorname), stdin);
printf("Enter issuedate:");
fgets(issuedate, sizeof(issuedate), stdin);
printf("Enter returndate:");
fgets(returndate, sizeof(returndate), stdin);
printf("Book details:\n");
printf("Book id=%d and book name=%s\n",bookid,bookname);
printf("Author name=%s\n", authorname);
printf("issue date=%s and return date=%s",issuedate,returndate);

    return 0;
}
