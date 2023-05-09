/*Q1 create a structure train which consist of structure train name,train no,arrival and departure station , departure time and arrival time
wap to input details of 10 train 1.print the details of all the train which are departing from a particular station
									2.print the details of all the train which are arriving to particular staion.
									3,print details of all the train which are running b/w two input stations
									DATE AND TIME*/
#include<stdio.h>
#include<string.h>
struct train
{
char trainname[100];
int trainno;
char arrivalst[100];
char departst[100];
struct time
{
int hours;
int mins;
}d1,a1;
struct date
{
int date;
int month;
int year;
}d2,a2;
};
void main()
{
struct train t[100];
for(int i=0;i<2;i++)
{
printf("enter train name");
gets(t[i].trainname);
printf("enter train no");
scanf("%d",&t[i].trainno);
getchar();
printf("enter the name of arrival station");
gets(t[i].arrivalst);
printf("enter the name of departure station");
gets(t[i].departst);
printf("enter the arrival time");
scanf("%d %d",&t[i].a1.hours,&t[i].a1.mins);
getchar();
printf("enter departure time");
scanf("%d %d",&t[i].d1.hours,&t[i].d1.mins);
getchar();
printf("enter arrival date");
scanf("%d %d %d",&t[i].a2.date,&t[i].a2.month,&t[i].a2.year);
getchar();
printf("enter departure date");
scanf("%d %d %d",&t[i].d2.date,&t[i].d2.month,&t[i].d2.year);
getchar();
}
char c[100];
printf("enter a particular departing station name");
gets(c);
for(int i=0;i<2;i++)
{
if(!strcmp(t[i].departst,c))
{
	puts(t[i].trainname);
	printf("%d",t[i].trainno);
	puts(t[i].arrivalst);
	puts(t[i].departst);
	printf("%d %d\n",t[i].a1.hours,t[i].a1.mins);
	printf("%d %d\n",t[i].d1.hours,t[i].d1.mins);
	printf("%d %d %d\n",t[i].a2.date,t[i].a2.month,t[i].a2.year);
	printf("%d %d %d\n",t[i].d2.date,t[i].d2.month,t[i].d2.year);
}
}
}














