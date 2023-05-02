/*1.develop a program to define,asssign,read and display
	1.book detail
	2.student information
	
2.wap to compare two dateas entered by the user make a structurenaewm date to store the elements day,month,year. if the dates are equal then display the messahge"dates are equal otherwise dates are not equal

3.develop a program to find total and average of sales of all employees using array of structure 

4.develop a program to read a set of name,roll no,date of birth of a student from the keyborad where the dob and dor consists of three members such as day,month and year as a separate structure.*/

#include <stdio.h>
struct book
{
	char authorname[100];
	char bookname[100];
	int price;
};
struct student
{
	char name[100];
	int rollno;
	char sec[100];
}; 
void main()
{
int i;
struct book b[2];
for (i=0;i<2;i++)
{
puts("enter author name");
gets(b[i].authorname);
puts("enter book name");
gets(b[i].bookname);
puts("enter price");
scanf("%d",&b[i].price);
getchar();
}
struct student s[2];
for(i=0;i<2;i++)
{
puts("enter name");
gets(s[i].name);
puts("enter roll no");
scanf("%d",&s[i].rollno);
getchar();
puts("enter section");
scanf("%c",&s[i].sec);
getchar();
}
printf("the data is :");
for(i=0;i<2;i++)
{
puts(b[i].authorname);
puts(b[i].bookname);
printf("%d",b[i].price);
}
for(i=0;i<2;i++)
{
puts(s[i].name);
printf("%d",s[i].rollno);
printf("%c",s[i].sec);
}
}














