#include<stdio.h>
#include<conio.h>
#include<string.h>
void breakfast();
void lunch();
void lunchlist();
void breakfastlist();



void main()
{
int c;
clrscr();
gotoxy(30,10);
printf("BREAKFAST......1");
gotoxy(30,11);
printf("LUNCH.......2");
gotoxy(30,12);
printf("EXIT........3");
gotoxy(30,13);
printf("Enter the choice");
scanf("%d",&c);
switch(c)
{
case 1:
{
breakfast();
}
break;
case 2:
{lunch();}
break;
default:
{exit (0);}
}
getch();
main();
}


void breakfast()
{
int r,q,a,ta=0,row=2,pd,k;
char itm[25],ch;
clrscr();
gotoxy(2,1);
printf("ITEM");
gotoxy(30,1);
printf("RATE");
gotoxy(45,1);
printf("QTY");
gotoxy(55,1);
printf("AMOUNT");
breakfastlist();

do
{
row=row+1;
gotoxy(2,row);
fflush(stdin);
gets(itm);
gotoxy(30,row);
if(strcmpi(itm,"dosha")==0)
{
r=60;
}
else if(strcmpi(itm,"tea")==0)
{r=10;
}
else if(strcmpi(itm,"samosa")==0)
{r=12;
}
else if(strcmpi(itm,"coke")==0)
{
r=25;
}
else if(strcmpi(itm,"coffee")==0)
{
r=20;
}
else if (strcmpi(itm,"sandwich")==0)
{
r=15;
}
else
{
r=0;
}
printf("%d",r);
gotoxy(45,row);
scanf("%d",&q);
a=r*q;
ta=ta+a;
gotoxy(55,row);
printf("%d",a);
gotoxy(55,20);
fflush(stdin);
printf("add more (y/n):");
scanf("%c",&ch);
}
while(ch=='y'||ch=='Y');
gotoxy(55,20);
clreol();
gotoxy(44,row+2) ;
printf("Total bill:%d",ta);
gotoxy(44,row+3);
printf("Total paid:");
scanf("%d",&pd);
k=pd-ta;
gotoxy(44,row+4);
printf("   balance:%d",k);
}

void lunch()
{
int r,q,a,ta=0,row=2,pd,k;
char itm[25],ch;
clrscr();
gotoxy(2,1);
printf("ITEM");
gotoxy(30,1);
printf("RATE");
gotoxy(45,1);
printf("QTY");
gotoxy(55,1);
printf("AMOUNT");
lunchlist();

do
{
row=row+1;
gotoxy(2,row);
fflush(stdin);
gets(itm);
gotoxy(30,row);
if(strcmpi(itm,"dal")==0)
{
r=120;
}
else if(strcmpi(itm,"rice")==0)
{r=60;
}
else if(strcmpi(itm,"roti")==0)
{r=25;
}
else if(strcmpi(itm,"paneer")==0)
{
r=120;
}
else
{
r=0;
}
printf("%d",r);
gotoxy(45,row);
scanf("%d",&q);
a=r*q;
ta=ta+a;
gotoxy(55,row);
printf("%d",a);
gotoxy(55,20);
fflush(stdin);
printf("add more (y/n):");
scanf("%c",&ch);
}
while(ch=='y'||ch=='Y');
gotoxy(55,20);
clreol();
gotoxy(44,row+2) ;
printf("Total bill:%d",ta);
gotoxy(44,row+3);
printf("Total paid:");
scanf("%d",&pd);
k=pd-ta;
gotoxy(44,row+4);
printf("   balance:%d",k);
}
void breakfastlist()
{
gotoxy(70,1);
printf(" breakfast ");
gotoxy(70,3);
printf("dosha    60");
gotoxy(70,4);
printf("coke     25");
gotoxy(70,5);
printf("samosa   12");
gotoxy(70,6);
printf("Tea      10");
gotoxy(70,7);
printf("coffee   20");
gotoxy(70,8);
printf("sandwich 15") ;
}

void lunchlist()
{
gotoxy(70,1);
printf("   lunch   ");
gotoxy(70,3);
printf("dal     120");
gotoxy(70,4);
printf("rice     60");
gotoxy(70,5);
printf("roti     25");
gotoxy(70,6);
printf("paneer  120") ;
}