#include<iostream.h>
#include<fstream.h>
#include<process.h>
#include<string.h>
#include<stdio.h>
#include<dos.h>
#include<stdlib.h>
#include<ctype.h>
#include<conio.h>
#include<graphics.h>

void searchbar(int,int,int,int);
void searchpage();
void mainscreen();
void login();
void userdisplay(int);
void searchword(char []);
void score(char [],char [],char [],char [],char [],char []);
void notavailable();
int codesearch(char []);
void searchpage();


class book
{
int rno;
char name[35];
char author[20];
int price;
int ratings;
int reviews;
int status;


public:


void getdata()
{
cout<<"\nEnter record number=";
cin>>rno;
cout<<"\nEnter the name of the book=";
gets(name);
cout<<"\nEnter the name of the author of the book=";
gets(author);
cout<<"\nEnter the price=";
cin>>price;
cout<<"\nEnter the number of ratings the book has received=";
cin>>ratings;
cout<<"\nEnter the number of reviews the book has received=";
cin>>reviews;
cout<<"\nEnter the status of availability(enter 1 if available and 0 if unavailable)=";
cin>>status;
}


void showdata()
{
cout<<endl;
cout<<"BOOK CODE: "<<rno<<endl;
cout<<"BOOK NAME: "<<name<<endl;
cout<<"AUTHOR: "<<author<<endl;
cout<<"PRICE: "<<price<<endl;
cout<<"NUMBER OF RATINGS: "<<ratings<<endl;
cout<<"NUMBER OF REVIEWS: "<<reviews<<endl;
if(status==0)
cout<<"OUT OF STOCK!!!!\n";
else
cout<<"AVAILABLE!!!!\n";
}


void page()
{
closegraph();
int gdriver=DETECT, gmode,errorcode;
 initgraph(&gdriver,&gmode,"c:\\TurboC3\\BGI");
 setbkcolor(1);
 setcolor(RED);
 rectangle(25,72,630,450);
 setfillstyle(1,2);
 floodfill(46,85,RED);
 setcolor(15);
 settextstyle(2,HORIZ_DIR,11);
 outtextxy(155,5,"SKYCLOUD BOOKS");
 setcolor(RED);
 settextstyle(1,HORIZ_DIR,3);
 outtextxy(275,144,"by");
 setcolor(RED);
 settextstyle(4,HORIZ_DIR,4);
 outtextxy(310,136,author);
 settextstyle(2,HORIZ_DIR,6);
 setcolor(RED);
 char str[4];
 int y;
 y=rno;
 for(int cnt=3;cnt>=0;cnt--)
 {
 int j;
 j=y%10;
 switch(j)
 {
 case 0:str[cnt]='0';break;
 case 1:str[cnt]='1';break;
 case 2:str[cnt]='2';break;
 case 3:str[cnt]='3';break;
 case 4:str[cnt]='4';break;
 case 5:str[cnt]='5';break;
 case 6:str[cnt]='6';break;
 case 7:str[cnt]='7';break;
 case 8:str[cnt]='8';break;
 case 9:str[cnt]='9';break;
 }
 y/=10;
 }
 outtextxy(75,200,"Product Code:  #");
 outtextxy(231,200,str);
 settextstyle(2,HORIZ_DIR,7);
 outtextxy(75,240,"Ratings by the users: ");
 char str1[4];
 int s;
 s=ratings;
 for(int cnt1=3;cnt1>=0;cnt1--)
 {
 int j;
 j=s%10;
 switch(j)
 {
 case 0:str1[cnt1]='0';break;
 case 1:str1[cnt1]='1';break;
 case 2:str1[cnt1]='2';break;
 case 3:str1[cnt1]='3';break;
 case 4:str1[cnt1]='4';break;
 case 5:str1[cnt1]='5';break;
 case 6:str1[cnt1]='6';break;
 case 7:str1[cnt1]='7';break;
 case 8:str1[cnt1]='8';break;
 case 9:str1[cnt1]='9';break;
 }
 s/=10;
 }
 outtextxy(330,240,str1);
 outtextxy(75,280,"Reviews by the users: ");
 char str2[4];
 int d;
 d=reviews;
 for(int cnt2=3;cnt2>=0;cnt2--)
 {
 int j;
 j=d%10;
 switch(j)
 {
 case 0:str2[cnt2]='0';break;
 case 1:str2[cnt2]='1';break;
 case 2:str2[cnt2]='2';break;
 case 3:str2[cnt2]='3';break;
 case 4:str2[cnt2]='4';break;
 case 5:str2[cnt2]='5';break;
 case 6:str2[cnt2]='6';break;
 case 7:str2[cnt2]='7';break;
 case 8:str2[cnt2]='8';break;
 case 9:str2[cnt2]='9';break;
 }
 d/=10;
 }
 outtextxy(330,280,str2);
 int x;
 x=status;
 if(x!=1)
 {
 setcolor(RED);
 settextstyle(2,HORIZ_DIR,9);
 outtextxy(180,415,"Out of Stock!!!!");
 }
 else
 if(x==1)
 {
 settextstyle(2,HORIZ_DIR,9);
 outtextxy(180,415,"Available!!! Hurry....");
 }
 char str3[6];
 str3[0]='R';
 str3[1]='s';
 str3[2]='.';
 int e;
 e=price;
 for(int cnt3=5;cnt3>=3;cnt3--)
 {
 int j;
 j=e%10;
 switch(j)
 {
 case 0:str3[cnt3]='0';break;
 case 1:str3[cnt3]='1';break;
 case 2:str3[cnt3]='2';break;
 case 3:str3[cnt3]='3';break;
 case 4:str3[cnt3]='4';break;
 case 5:str3[cnt3]='5';break;
 case 6:str3[cnt3]='6';break;
 case 7:str3[cnt3]='7';break;
 case 8:str3[cnt3]='8';break;
 case 9:str3[cnt3]='9';break;
 }
 e/=10;
 }
 setcolor(RED);
 bar3d(420,230,580,280,5,1);
 settextstyle(2,HORIZ_DIR,11);
 outtextxy(435,230,str3);
 setcolor(15);
 settextstyle(2,HORIZ_DIR,3);
 outtextxy(45,470,"2 0 1 4 - 1 5  C O P Y R I G H T  S K Y C L O U D  B O O K S  P O R C U P I N E  C O R P O R A T I O N   A L L   R I G H T S   R E S E R V E D ");
 delay(20);
 for(int i=0,j=0;i<15&&j<2;i++)
 {
 setcolor(i);
 settextstyle(2,HORIZ_DIR,9);
 outtextxy(75,85,name);
 rectangle(45,83,615,135);
 delay(50);
 if(i==14&&j<2)
 {
 i=0;
 j++;
 }
 }
 setcolor(4);
 outtextxy(75,85,name);
 rectangle(45,83,615,135);
 char buy[5];
 if(status==1)
 {
 settextstyle(2,HORIZ_DIR,6);
 outtextxy(75,330,"Enter \'buy\' if you wish to buy the book: ");
 gotoxy(59,22);
 gets(buy);
 int length=0;
 length = strlen(buy);
for (int j=0; j<length; j++)
{
   buy[j] = toupper(buy[j]);
}
if(strcmp(buy,"BUY")==0)
control(name);
 }
 getch();
 closegraph();
}

//PRODUCT 1
void product1()
{
 setcolor(4);
 rectangle(200,120,600,200);
 setfillstyle(1,2);
 floodfill(201,121,4);
 rectangle(200,120,250,200);
 settextstyle(2,HORIZ_DIR,8);
 outtextxy(220,145,"A");
 settextstyle(2,HORIZ_DIR,6);
 outtextxy(270,130,name);
 settextstyle(2,HORIZ_DIR,4);
 outtextxy(480,155,author);
 outtextxy(270,155,"RATINGS:");
 char str1[5];
 int p;
 p=ratings;
 for(int cnt1=4;cnt1>=0;cnt1--)
 {
 int j;
 j=p%10;
 switch(j)
 {
 case 0:str1[cnt1]='0';break;
 case 1:str1[cnt1]='1';break;
 case 2:str1[cnt1]='2';break;
 case 3:str1[cnt1]='3';break;
 case 4:str1[cnt1]='4';break;
 case 5:str1[cnt1]='5';break;
 case 6:str1[cnt1]='6';break;
 case 7:str1[cnt1]='7';break;
 case 8:str1[cnt1]='8';break;
 case 9:str1[cnt1]='9';break;
 }
 p/=10;
 }
 outtextxy(320,155,str1);
 outtextxy(370,155,"REVIEWS:");
 char str2[4];
 int d;
 d=reviews;
 for(int cnt2=3;cnt2>=0;cnt2--)
 {
 int j;
 j=d%10;
 switch(j)
 {
 case 0:str2[cnt2]='0';break;
 case 1:str2[cnt2]='1';break;
 case 2:str2[cnt2]='2';break;
 case 3:str2[cnt2]='3';break;
 case 4:str2[cnt2]='4';break;
 case 5:str2[cnt2]='5';break;
 case 6:str2[cnt2]='6';break;
 case 7:str2[cnt2]='7';break;
 case 8:str2[cnt2]='8';break;
 case 9:str2[cnt2]='9';break;
 }
 d/=10;
 }
 outtextxy(420,155,str2);
 settextstyle(2,HORIZ_DIR,7);
 char str3[6];
 str3[0]='R';
 str3[1]='s';
 str3[2]='.';
 int e;
 e=price;
 for(int cnt3=5;cnt3>=3;cnt3--)
 {
 int j;
 j=e%10;
 switch(j)
 {
 case 0:str3[cnt3]='0';break;
 case 1:str3[cnt3]='1';break;
 case 2:str3[cnt3]='2';break;
 case 3:str3[cnt3]='3';break;
 case 4:str3[cnt3]='4';break;
 case 5:str3[cnt3]='5';break;
 case 6:str3[cnt3]='6';break;
 case 7:str3[cnt3]='7';break;
 case 8:str3[cnt3]='8';break;
 case 9:str3[cnt3]='9';break;
 }
 e/=10;
 }
 outtextxy(270,170,str3);
 settextstyle(2,HORIZ_DIR,4);
 outtextxy(470,185,"PRODUCT CODE: #");
 char st[4];
 int g;
 g=rno;
 for(int cnt4=3;cnt4>=0;cnt4--)
 {
 int j;
 j=g%10;
 switch(j)
 {
 case 0:st[cnt4]='0';break;
 case 1:st[cnt4]='1';break;
 case 2:st[cnt4]='2';break;
 case 3:st[cnt4]='3';break;
 case 4:st[cnt4]='4';break;
 case 5:st[cnt4]='5';break;
 case 6:st[cnt4]='6';break;
 case 7:st[cnt4]='7';break;
 case 8:st[cnt4]='8';break;
 case 9:st[cnt4]='9';break;
 }
 g/=10;
 }
 outtextxy(560,185,st);
}

//PRODUCT 2
void product2()
{
 rectangle(200,210,600,290);
 setfillstyle(1,2);
 floodfill(201,211,4);
 rectangle(200,210,250,290);
 settextstyle(2,HORIZ_DIR,8);
 outtextxy(220,235,"B");
 settextstyle(2,HORIZ_DIR,6);
 outtextxy(270,220,name);
 settextstyle(2,HORIZ_DIR,4);
 outtextxy(480,245,author);
 outtextxy(270,245,"RATINGS:");
 char str1[5];
 int y;
 y=ratings;
 for(int cnt=4;cnt>=0;cnt--)
 {
 int j;
 j=y%10;
 switch(j)
 {
 case 0:str1[cnt]='0';break;
 case 1:str1[cnt]='1';break;
 case 2:str1[cnt]='2';break;
 case 3:str1[cnt]='3';break;
 case 4:str1[cnt]='4';break;
 case 5:str1[cnt]='5';break;
 case 6:str1[cnt]='6';break;
 case 7:str1[cnt]='7';break;
 case 8:str1[cnt]='8';break;
 case 9:str1[cnt]='9';break;
 }
 y/=10;
 }
 outtextxy(320,245,str1);
 outtextxy(370,245,"REVIEWS:");
 char str2[4];
 int d;
 d=reviews;
 for(int cnt2=3;cnt2>=0;cnt2--)
 {
 int j;
 j=d%10;
 switch(j)
 {
 case 0:str2[cnt2]='0';break;
 case 1:str2[cnt2]='1';break;
 case 2:str2[cnt2]='2';break;
 case 3:str2[cnt2]='3';break;
 case 4:str2[cnt2]='4';break;
 case 5:str2[cnt2]='5';break;
 case 6:str2[cnt2]='6';break;
 case 7:str2[cnt2]='7';break;
 case 8:str2[cnt2]='8';break;
 case 9:str2[cnt2]='9';break;
 }
 d/=10;
 }
 outtextxy(420,245,str2);
 settextstyle(2,HORIZ_DIR,7);
 char str3[6];
 str3[0]='R';
 str3[1]='s';
 str3[2]='.';
 int e;
 e=price;
 for(int cnt3=5;cnt3>=3;cnt3--)
 {
 int j;
 j=e%10;
 switch(j)
 {
 case 0:str3[cnt3]='0';break;
 case 1:str3[cnt3]='1';break;
 case 2:str3[cnt3]='2';break;
 case 3:str3[cnt3]='3';break;
 case 4:str3[cnt3]='4';break;
 case 5:str3[cnt3]='5';break;
 case 6:str3[cnt3]='6';break;
 case 7:str3[cnt3]='7';break;
 case 8:str3[cnt3]='8';break;
 case 9:str3[cnt3]='9';break;
 }
 e/=10;
 }
 outtextxy(270,260,str3);
 settextstyle(2,HORIZ_DIR,4);
 outtextxy(470,275,"PRODUCT CODE: #");
 char st[4];
 int g;
 g=rno;
 for(int cnt4=3;cnt4>=0;cnt4--)
 {
 int j;
 j=g%10;
 switch(j)
 {
 case 0:st[cnt4]='0';break;
 case 1:st[cnt4]='1';break;
 case 2:st[cnt4]='2';break;
 case 3:st[cnt4]='3';break;
 case 4:st[cnt4]='4';break;
 case 5:st[cnt4]='5';break;
 case 6:st[cnt4]='6';break;
 case 7:st[cnt4]='7';break;
 case 8:st[cnt4]='8';break;
 case 9:st[cnt4]='9';break;
 }
 g/=10;
 }
 outtextxy(560,275,st);
 }

//PRODUCT 3
void product3()
{
 rectangle(200,300,600,380);
 setfillstyle(1,2);
 floodfill(201,311,4);
 rectangle(200,300,250,380);
 settextstyle(2,HORIZ_DIR,8);
 outtextxy(220,325,"C");
 settextstyle(2,HORIZ_DIR,6);
 outtextxy(270,310,name);
 settextstyle(2,HORIZ_DIR,4);
 outtextxy(480,335,author);
 outtextxy(270,335,"RATINGS:");
 char str1[5];
 int y;
 y=ratings;
 for(int cnt=4;cnt>=0;cnt--)
 {
 int j;
 j=y%10;
 switch(j)
 {
 case 0:str1[cnt]='0';break;
 case 1:str1[cnt]='1';break;
 case 2:str1[cnt]='2';break;
 case 3:str1[cnt]='3';break;
 case 4:str1[cnt]='4';break;
 case 5:str1[cnt]='5';break;
 case 6:str1[cnt]='6';break;
 case 7:str1[cnt]='7';break;
 case 8:str1[cnt]='8';break;
 case 9:str1[cnt]='9';break;
 }
 y/=10;
 }
 outtextxy(320,335,str1);
 outtextxy(370,335,"REVIEWS:");
 char str2[4];
 int d;
 d=reviews;
 for(int cnt2=3;cnt2>=0;cnt2--)
 {
 int j;
 j=d%10;
 switch(j)
 {
 case 0:str2[cnt2]='0';break;
 case 1:str2[cnt2]='1';break;
 case 2:str2[cnt2]='2';break;
 case 3:str2[cnt2]='3';break;
 case 4:str2[cnt2]='4';break;
 case 5:str2[cnt2]='5';break;
 case 6:str2[cnt2]='6';break;
 case 7:str2[cnt2]='7';break;
 case 8:str2[cnt2]='8';break;
 case 9:str2[cnt2]='9';break;
 }
 d/=10;
 }
 outtextxy(420,335,str2);
 settextstyle(2,HORIZ_DIR,7);
 char str3[6];
 str3[0]='R';
 str3[1]='s';
 str3[2]='.';
 int e;
 e=price;
 for(int cnt3=5;cnt3>=3;cnt3--)
 {
 int j;
 j=e%10;
 switch(j)
 {
 case 0:str3[cnt3]='0';break;
 case 1:str3[cnt3]='1';break;
 case 2:str3[cnt3]='2';break;
 case 3:str3[cnt3]='3';break;
 case 4:str3[cnt3]='4';break;
 case 5:str3[cnt3]='5';break;
 case 6:str3[cnt3]='6';break;
 case 7:str3[cnt3]='7';break;
 case 8:str3[cnt3]='8';break;
 case 9:str3[cnt3]='9';break;
 }
 e/=10;
 }
 outtextxy(270,350,str3);
 settextstyle(2,HORIZ_DIR,4);
 outtextxy(470,365,"PRODUCT CODE: #");
 char st[4];
 int g;
 g=rno;
 for(int cnt4=3;cnt4>=0;cnt4--)
 {
 int j;
 j=g%10;
 switch(j)
 {
 case 0:st[cnt4]='0';break;
 case 1:st[cnt4]='1';break;
 case 2:st[cnt4]='2';break;
 case 3:st[cnt4]='3';break;
 case 4:st[cnt4]='4';break;
 case 5:st[cnt4]='5';break;
 case 6:st[cnt4]='6';break;
 case 7:st[cnt4]='7';break;
 case 8:st[cnt4]='8';break;
 case 9:st[cnt4]='9';break;
 }
 g/=10;
 }
 outtextxy(560,365,st);
 }

 //PRODUCT 4
 void product4()
 {
 rectangle(25,390,600,460);
 setfillstyle(1,2);
 floodfill(29,401,4);
 rectangle(25,390,105,460);
 settextstyle(2,HORIZ_DIR,8);
 outtextxy(57,407,"D");
 settextstyle(2,HORIZ_DIR,6);
 outtextxy(125,390,name);
 settextstyle(2,HORIZ_DIR,4);
 outtextxy(125,414,"RATINGS:");
 char str1[5];
 int y;
 y=ratings;
 for(int cnt=4;cnt>=0;cnt--)
 {
 int j;
 j=y%10;
 switch(j)
 {
 case 0:str1[cnt]='0';break;
 case 1:str1[cnt]='1';break;
 case 2:str1[cnt]='2';break;
 case 3:str1[cnt]='3';break;
 case 4:str1[cnt]='4';break;
 case 5:str1[cnt]='5';break;
 case 6:str1[cnt]='6';break;
 case 7:str1[cnt]='7';break;
 case 8:str1[cnt]='8';break;
 case 9:str1[cnt]='9';break;
 }
 y/=10;
 }
 outtextxy(175,414,str1);
 outtextxy(245,414,"REVIEWS:");
 char str2[4];
 int d;
 d=reviews;
 for(int cnt2=3;cnt2>=0;cnt2--)
 {
 int j;
 j=d%10;
 switch(j)
 {
 case 0:str2[cnt2]='0';break;
 case 1:str2[cnt2]='1';break;
 case 2:str2[cnt2]='2';break;
 case 3:str2[cnt2]='3';break;
 case 4:str2[cnt2]='4';break;
 case 5:str2[cnt2]='5';break;
 case 6:str2[cnt2]='6';break;
 case 7:str2[cnt2]='7';break;
 case 8:str2[cnt2]='8';break;
 case 9:str2[cnt2]='9';break;
 }
 d/=10;
 }
 outtextxy(295,414,str2);
 outtextxy(395,414,author);
 settextstyle(2,HORIZ_DIR,7);
 char str3[6];
 str3[0]='R';
 str3[1]='s';
 str3[2]='.';
 int e;
 e=price;
 for(int cnt3=5;cnt3>=3;cnt3--)
 {
 int j;
 j=e%10;
 switch(j)
 {
 case 0:str3[cnt3]='0';break;
 case 1:str3[cnt3]='1';break;
 case 2:str3[cnt3]='2';break;
 case 3:str3[cnt3]='3';break;
 case 4:str3[cnt3]='4';break;
 case 5:str3[cnt3]='5';break;
 case 6:str3[cnt3]='6';break;
 case 7:str3[cnt3]='7';break;
 case 8:str3[cnt3]='8';break;
 case 9:str3[cnt3]='9';break;
 }
 e/=10;
 }
 outtextxy(125,430,str3);
 settextstyle(2,HORIZ_DIR,4);
 outtextxy(415,445,"PRODUCT CODE: #");
 char st[4];
 int g;
 g=rno;
 for(int cnt4=3;cnt4>=0;cnt4--)
 {
 int j;
 j=g%10;
 switch(j)
 {
 case 0:st[cnt4]='0';break;
 case 1:st[cnt4]='1';break;
 case 2:st[cnt4]='2';break;
 case 3:st[cnt4]='3';break;
 case 4:st[cnt4]='4';break;
 case 5:st[cnt4]='5';break;
 case 6:st[cnt4]='6';break;
 case 7:st[cnt4]='7';break;
 case 8:st[cnt4]='8';break;
 case 9:st[cnt4]='9';break;
 }
 g/=10;
 }
 outtextxy(505,445,st);
 }

 void pro1()
{
//PRODUCT 1
 rectangle(25,120,600,200);
 setfillstyle(1,2);
 floodfill(201,121,4);
 rectangle(25,120,105,200);
 settextstyle(2,HORIZ_DIR,8);
 outtextxy(57,145,"E");
 settextstyle(2,HORIZ_DIR,6);
 outtextxy(125,130,name);
 settextstyle(2,HORIZ_DIR,4);
 outtextxy(395,155,author);
 outtextxy(125,155,"RATINGS:");
 char str1[5];
 int s;
 s=ratings;
 for(int cnt1=3;cnt1>=0;cnt1--)
 {
 int j;
 j=s%10;
 switch(j)
 {
 case 0:str1[cnt1]='0';break;
 case 1:str1[cnt1]='1';break;
 case 2:str1[cnt1]='2';break;
 case 3:str1[cnt1]='3';break;
 case 4:str1[cnt1]='4';break;
 case 5:str1[cnt1]='5';break;
 case 6:str1[cnt1]='6';break;
 case 7:str1[cnt1]='7';break;
 case 8:str1[cnt1]='8';break;
 case 9:str1[cnt1]='9';break;
 }
 s/=10;
 }
 str1[4]='\0';
 outtextxy(175,155,str1);
 outtextxy(245,155,"REVIEWS:");
 char str2[4];
 int d;
 d=reviews;
 for(int cnt2=3;cnt2>=0;cnt2--)
 {
 int j;
 j=d%10;
 switch(j)
 {
 case 0:str2[cnt2]='0';break;
 case 1:str2[cnt2]='1';break;
 case 2:str2[cnt2]='2';break;
 case 3:str2[cnt2]='3';break;
 case 4:str2[cnt2]='4';break;
 case 5:str2[cnt2]='5';break;
 case 6:str2[cnt2]='6';break;
 case 7:str2[cnt2]='7';break;
 case 8:str2[cnt2]='8';break;
 case 9:str2[cnt2]='9';break;
 }
 d/=10;
 }
 outtextxy(295,155,str2);
 settextstyle(2,HORIZ_DIR,7);
 char str3[6];
 str3[0]='R';
 str3[1]='s';
 str3[2]='.';
 int e;
 e=price;
 for(int cnt3=5;cnt3>=3;cnt3--)
 {
 int j;
 j=e%10;
 switch(j)
 {
 case 0:str3[cnt3]='0';break;
 case 1:str3[cnt3]='1';break;
 case 2:str3[cnt3]='2';break;
 case 3:str3[cnt3]='3';break;
 case 4:str3[cnt3]='4';break;
 case 5:str3[cnt3]='5';break;
 case 6:str3[cnt3]='6';break;
 case 7:str3[cnt3]='7';break;
 case 8:str3[cnt3]='8';break;
 case 9:str3[cnt3]='9';break;
 }
 e/=10;
 }
 outtextxy(125,170,str3);
 settextstyle(2,HORIZ_DIR,4);
 outtextxy(470,185,"PRODUCT CODE: #");
 char st[4];
 int g;
 g=rno;
 for(int cnt4=3;cnt4>=0;cnt4--)
 {
 int j;
 j=g%10;
 switch(j)
 {
 case 0:st[cnt4]='0';break;
 case 1:st[cnt4]='1';break;
 case 2:st[cnt4]='2';break;
 case 3:st[cnt4]='3';break;
 case 4:st[cnt4]='4';break;
 case 5:st[cnt4]='5';break;
 case 6:st[cnt4]='6';break;
 case 7:st[cnt4]='7';break;
 case 8:st[cnt4]='8';break;
 case 9:st[cnt4]='9';break;
 }
 g/=10;
 }
 outtextxy(560,185,st);
 }


void pro2()
{
//PRODUCT 2
 rectangle(25,210,600,290);
 setfillstyle(1,2);
 floodfill(201,211,4);
 rectangle(25,210,105,290);
 settextstyle(2,HORIZ_DIR,8);
 outtextxy(57,235,"F");
 settextstyle(2,HORIZ_DIR,6);
 outtextxy(125,220,name);
 settextstyle(2,HORIZ_DIR,4);
 outtextxy(395,245,author);
 outtextxy(125,245,"RATINGS:");
 char str1[5];
 int s;
 s=ratings;
 for(int cnt1=3;cnt1>=0;cnt1--)
 {
 int j;
 j=s%10;
 switch(j)
 {
 case 0:str1[cnt1]='0';break;
 case 1:str1[cnt1]='1';break;
 case 2:str1[cnt1]='2';break;
 case 3:str1[cnt1]='3';break;
 case 4:str1[cnt1]='4';break;
 case 5:str1[cnt1]='5';break;
 case 6:str1[cnt1]='6';break;
 case 7:str1[cnt1]='7';break;
 case 8:str1[cnt1]='8';break;
 case 9:str1[cnt1]='9';break;
 }
 s/=10;
 }
 str1[4]='\0';
 outtextxy(175,245,str1);
 outtextxy(245,245,"REVIEWS:");
 char str2[4];
 int d;
 d=reviews;
 for(int cnt2=3;cnt2>=0;cnt2--)
 {
 int j;
 j=d%10;
 switch(j)
 {
 case 0:str2[cnt2]='0';break;
 case 1:str2[cnt2]='1';break;
 case 2:str2[cnt2]='2';break;
 case 3:str2[cnt2]='3';break;
 case 4:str2[cnt2]='4';break;
 case 5:str2[cnt2]='5';break;
 case 6:str2[cnt2]='6';break;
 case 7:str2[cnt2]='7';break;
 case 8:str2[cnt2]='8';break;
 case 9:str2[cnt2]='9';break;
 }
 d/=10;
 }
 outtextxy(295,245,str2);
 settextstyle(2,HORIZ_DIR,7);
 char str3[6];
 str3[0]='R';
 str3[1]='s';
 str3[2]='.';
 int e;
 e=price;
 for(int cnt3=5;cnt3>=3;cnt3--)
 {
 int j;
 j=e%10;
 switch(j)
 {
 case 0:str3[cnt3]='0';break;
 case 1:str3[cnt3]='1';break;
 case 2:str3[cnt3]='2';break;
 case 3:str3[cnt3]='3';break;
 case 4:str3[cnt3]='4';break;
 case 5:str3[cnt3]='5';break;
 case 6:str3[cnt3]='6';break;
 case 7:str3[cnt3]='7';break;
 case 8:str3[cnt3]='8';break;
 case 9:str3[cnt3]='9';break;
 }
 e/=10;
 }
 outtextxy(125,260,str3);
 settextstyle(2,HORIZ_DIR,4);
 outtextxy(470,275,"PRODUCT CODE: #");
 char st[4];
 int g;
 g=rno;
 for(int cnt4=3;cnt4>=0;cnt4--)
 {
 int j;
 j=g%10;
 switch(j)
 {
 case 0:st[cnt4]='0';break;
 case 1:st[cnt4]='1';break;
 case 2:st[cnt4]='2';break;
 case 3:st[cnt4]='3';break;
 case 4:st[cnt4]='4';break;
 case 5:st[cnt4]='5';break;
 case 6:st[cnt4]='6';break;
 case 7:st[cnt4]='7';break;
 case 8:st[cnt4]='8';break;
 case 9:st[cnt4]='9';break;
 }
 g/=10;
 }
  outtextxy(560,275,st);
}

void pro3()
{
//PRODUCT 3
 rectangle(25,300,600,380);
 setfillstyle(1,2);
 floodfill(201,311,4);
 rectangle(25,300,105,380);
 settextstyle(2,HORIZ_DIR,8);
 outtextxy(57,325,"G");
 settextstyle(2,HORIZ_DIR,6);
 outtextxy(125,310,name);
 settextstyle(2,HORIZ_DIR,4);
 outtextxy(395,335,author);
 outtextxy(125,335,"RATINGS:");
 char str1[5];
 int s;
 s=ratings;
 for(int cnt1=3;cnt1>=0;cnt1--)
 {
 int j;
 j=s%10;
 switch(j)
 {
 case 0:str1[cnt1]='0';break;
 case 1:str1[cnt1]='1';break;
 case 2:str1[cnt1]='2';break;
 case 3:str1[cnt1]='3';break;
 case 4:str1[cnt1]='4';break;
 case 5:str1[cnt1]='5';break;
 case 6:str1[cnt1]='6';break;
 case 7:str1[cnt1]='7';break;
 case 8:str1[cnt1]='8';break;
 case 9:str1[cnt1]='9';break;
 }
 s/=10;
 }
 str1[4]='\0';
 outtextxy(175,335,str1);
 outtextxy(245,335,"REVIEWS:");
 char str2[4];
 int d;
 d=reviews;
 for(int cnt2=3;cnt2>=0;cnt2--)
 {
 int j;
 j=d%10;
 switch(j)
 {
 case 0:str2[cnt2]='0';break;
 case 1:str2[cnt2]='1';break;
 case 2:str2[cnt2]='2';break;
 case 3:str2[cnt2]='3';break;
 case 4:str2[cnt2]='4';break;
 case 5:str2[cnt2]='5';break;
 case 6:str2[cnt2]='6';break;
 case 7:str2[cnt2]='7';break;
 case 8:str2[cnt2]='8';break;
 case 9:str2[cnt2]='9';break;
 }
 d/=10;
 }
 outtextxy(295,335,str2);
 settextstyle(2,HORIZ_DIR,7);
 char str3[6];
 str3[0]='R';
 str3[1]='s';
 str3[2]='.';
 int e;
 e=price;
 for(int cnt3=5;cnt3>=3;cnt3--)
 {
 int j;
 j=e%10;
 switch(j)
 {
 case 0:str3[cnt3]='0';break;
 case 1:str3[cnt3]='1';break;
 case 2:str3[cnt3]='2';break;
 case 3:str3[cnt3]='3';break;
 case 4:str3[cnt3]='4';break;
 case 5:str3[cnt3]='5';break;
 case 6:str3[cnt3]='6';break;
 case 7:str3[cnt3]='7';break;
 case 8:str3[cnt3]='8';break;
 case 9:str3[cnt3]='9';break;
 }
 e/=10;
 }
 outtextxy(125,350,str3);
 settextstyle(2,HORIZ_DIR,4);
 outtextxy(470,365,"PRODUCT CODE: #");
 char st[4];
 int g;
 g=rno;
 for(int cnt4=3;cnt4>=0;cnt4--)
 {
 int j;
 j=g%10;
 switch(j)
 {
 case 0:st[cnt4]='0';break;
 case 1:st[cnt4]='1';break;
 case 2:st[cnt4]='2';break;
 case 3:st[cnt4]='3';break;
 case 4:st[cnt4]='4';break;
 case 5:st[cnt4]='5';break;
 case 6:st[cnt4]='6';break;
 case 7:st[cnt4]='7';break;
 case 8:st[cnt4]='8';break;
 case 9:st[cnt4]='9';break;
 }
 g/=10;
 }
  outtextxy(560,365,st);
}

void pro4()
{
//PRODUCT 4
 rectangle(25,388,600,468);
 setfillstyle(1,2);
 floodfill(205,401,4);
 rectangle(25,388,105,468);
 settextstyle(2,HORIZ_DIR,8);
 outtextxy(57,407,"H");
 settextstyle(2,HORIZ_DIR,6);
 outtextxy(125,398,name);
 settextstyle(2,HORIZ_DIR,4);
 outtextxy(125,424,"RATINGS:");
 char str1[5];
 int s;
 s=ratings;
 for(int cnt1=3;cnt1>=0;cnt1--)
 {
 int j;
 j=s%10;
 switch(j)
 {
 case 0:str1[cnt1]='0';break;
 case 1:str1[cnt1]='1';break;
 case 2:str1[cnt1]='2';break;
 case 3:str1[cnt1]='3';break;
 case 4:str1[cnt1]='4';break;
 case 5:str1[cnt1]='5';break;
 case 6:str1[cnt1]='6';break;
 case 7:str1[cnt1]='7';break;
 case 8:str1[cnt1]='8';break;
 case 9:str1[cnt1]='9';break;
 }
 s/=10;
 }
 str1[4]='\0';
 outtextxy(175,425,str1);
 outtextxy(245,424,"REVIEWS:");
 char str2[4];
 int d;
 d=reviews;
 for(int cnt2=3;cnt2>=0;cnt2--)
 {
 int j;
 j=d%10;
 switch(j)
 {
 case 0:str2[cnt2]='0';break;
 case 1:str2[cnt2]='1';break;
 case 2:str2[cnt2]='2';break;
 case 3:str2[cnt2]='3';break;
 case 4:str2[cnt2]='4';break;
 case 5:str2[cnt2]='5';break;
 case 6:str2[cnt2]='6';break;
 case 7:str2[cnt2]='7';break;
 case 8:str2[cnt2]='8';break;
 case 9:str2[cnt2]='9';break;
 }
 d/=10;
 }
  outtextxy(295,424,str2);
 outtextxy(395,424,author);
 settextstyle(2,HORIZ_DIR,7);
 char str3[6];
 str3[0]='R';
 str3[1]='s';
 str3[2]='.';
 int e;
 e=price;
 for(int cnt3=5;cnt3>=3;cnt3--)
 {
 int j;
 j=e%10;
 switch(j)
 {
 case 0:str3[cnt3]='0';break;
 case 1:str3[cnt3]='1';break;
 case 2:str3[cnt3]='2';break;
 case 3:str3[cnt3]='3';break;
 case 4:str3[cnt3]='4';break;
 case 5:str3[cnt3]='5';break;
 case 6:str3[cnt3]='6';break;
 case 7:str3[cnt3]='7';break;
 case 8:str3[cnt3]='8';break;
 case 9:str3[cnt3]='9';break;
 }
 e/=10;
 }
 outtextxy(125,440,str3);
 settextstyle(2,HORIZ_DIR,4);
 outtextxy(470,453,"PRODUCT CODE: #");
 char st[4];
 int g;
 g=rno;
 for(int cnt4=3;cnt4>=0;cnt4--)
 {
 int j;
 j=g%10;
 switch(j)
 {
 case 0:st[cnt4]='0';break;
 case 1:st[cnt4]='1';break;
 case 2:st[cnt4]='2';break;
 case 3:st[cnt4]='3';break;
 case 4:st[cnt4]='4';break;
 case 5:st[cnt4]='5';break;
 case 6:st[cnt4]='6';break;
 case 7:st[cnt4]='7';break;
 case 8:st[cnt4]='8';break;
 case 9:st[cnt4]='9';break;
 }
 g/=10;
 }
  outtextxy(560,453,st);
}


friend void del();
friend void searchword(char []);
friend void score(char [],char [],char [],char [],char [],char []);
friend int codesearch(char []);
friend void searchbar(int,int,int,int);
friend void main();
friend void modify();
friend void display();
};


class user
{
int order;
char name[20];
char house[7];
char add[30];
char city[15];
char mobile[12];
char book[35];
public:
void showdata()
{
cout<<"\nCONGRATULATIONS!!! YOUR ORDER HAS BEEN PLACED SUCCESSFULLY!!!!";
cout<<"\n###########SKYCLOUD BOOKS ORDER INFORMATION###################";
cout<<"\nBOOK ORDERED: "<<book;
cout<<"\nORDER NUMBER: "<<order;
cout<<"\nNAME: "<<name;
cout<<"\nADDRESS LINE 1: "<<house;
cout<<"\nADDRESS LINE 2: "<<add;
cout<<"\nCITY: "<<city;
cout<<"\nMOBILE: "<<mobile;
getch();
}

void getdata()
{
cout<<"\nPlease enter your name=";
gets(name);
cout<<"\nPlease enter your house number=";
gets(house);
cout<<"\nPlease enter your address=";
gets(add);
cout<<"\nPlease enter your city=";
gets(city);
cout<<"\nPlease enter your mobile number=";
cin>>mobile;
}
friend int assign();
friend void usercreate(char []);
friend void userdisplay(int);
};

//ASSIGNING ORDER NUMBER
int assign()
{
  user x;
  fstream fp;
  fp.open("user.dat",ios::binary|ios::in);
  fp.read((char*)&x,sizeof(user));
  while(!fp.eof())
  fp.read((char*)&x,sizeof(user));
  fp.close();
  int n;
  n=++x.order;
  return n;
}
//USER CREATE
void usercreate(char str[35])
{
user bobj;
fstream fp;
fp.open("user.dat",ios::binary|ios::out|ios::app);
fstream fp1;
fp1.open("user.dat",ios::in);
int o,p,flag=1;
fp1.seekg(0,ios::beg);
o=fp1.tellg();
fp1.seekg(0,ios::end);
p=fp1.tellg();
if(o==p)
flag=0;
if(flag==0)
bobj.order=5000;
else
if(flag==1)
{
  bobj.order=assign();
}
bobj.getdata();
int l;
l=strlen(str);
for(int i=0;i<l;i++)
{
bobj.book[i]=str[i];
}
bobj.book[i]='\0';
fp.write((char*)&bobj,sizeof(user));
fp.close();
fp1.close();
userdisplay(bobj.order);
}

//USER SELECTED DISPLAY
void userdisplay(int n)
{
fstream fp1;
user b;
fp1.open("user.dat",ios::in|ios::binary);
fp1.read((char*)&b,sizeof(user));
while(!fp1.eof())
{
if(n==b.order)
b.showdata();
fp1.read((char*)&b,sizeof(user));
}
fp1.close();
}


//USER DISPLAY ALL
void userread()
{
user bobj;
fstream fp;
fp.open("user.dat",ios::in|ios::binary);
fp.read((char*)&bobj,sizeof(user));
while(!fp.eof())
{
bobj.showdata();
cout<<"\n\n##############################################################";
fp.read((char*)&bobj,sizeof(user));
}
fp.close();
}

//USER CONTROLS
void control(char str[35])
{
clrscr();
closegraph();
usercreate(str);
main();
}

//RANDOM NUMBER GENERATOR
int rand1()
{
randomize();
int r,l,m;
a:
r=random(5000);
l=r%100;
if(l>0&&l<=35)
return l;
else
goto a;
if(l==0)
{
l++;
return l;
}
}


//MAIN
void main()
{
 book b;
 fstream fp;
 fp.open("sky.dat",ios::in|ios::binary);
 fp.read((char*)&b,sizeof(book));
 int rnd,rnd1,rnd2,rnd3;
 //PRODUCT 1
 rnd=rand1();
 while(!fp.eof())
 {
 if(rnd==b.rno)
 goto a;
 fp.read((char*)&b,sizeof(book));
 }
 a:
 mainscreen();
 b.product1();
 //PRODUCT 2
 c:
 rnd1=rand1();
 if(rnd1==rnd)
 goto c;
 else
 {
 fp.seekg(ios::beg);
 fp.read((char*)&b,sizeof(book));
 while(!fp.eof())
 {
 if(rnd1==b.rno)
 goto b;
 fp.read((char*)&b,sizeof(book));
 }
 b:
 b.product2();
 }
 //PRODUCT 3
 d:
 rnd2=rand1();
 if(rnd2!=rnd&&rnd2!=rnd1)
 {
 fp.seekg(ios::beg);
 fp.read((char*)&b,sizeof(book));
 while(!fp.eof())
 {
 if(rnd2==b.rno)
 goto f;
 fp.read((char*)&b,sizeof(book));
 }
 f:
 b.product3();
 }
 else
 goto d;
 //PRODUCT 4
 g:
 rnd3=rand1();
 if(rnd3!=rnd&&rnd3!=rnd2&&rnd3!=rnd1)
 {
 fp.seekg(ios::beg);
 fp.read((char*)&b,sizeof(book));
 while(!fp.eof())
 {
 if(rnd3==b.rno)
 goto h;
 fp.read((char*)&b,sizeof(book));
 }
 h:
 b.product4();
 }
 else
 goto g;
 fp.close();
 searchbar(rnd,rnd1,rnd2,rnd3);
 }


 //SEARCH BAR
void searchbar(int rnd,int rnd1,int rnd2,int rnd3)
{
int flag=0;
fstream fp;
book b;
fp.open("sky.dat",ios::in|ios::binary);
 start:
 char sr[50];
 gotoxy(21,5);
 gets(sr);
 int length;
 length = strlen(sr);
for (int i=0; i<length; i++)
{
   sr[i] = toupper(sr[i]);
}
if(strcmp(sr,"LOGIN")==0)
{
flag=1;
closegraph();
login();
}
if(strcmp(sr,"EXIT")==0)
exit(0);
if(strcmp(sr,"MAIN")==0)
main();
char s;
s=sr[0];
if(sr[1]=='\0')
{
 switch(s)
 {
 case 'A':{
	    flag=1;
	    fp.seekg(ios::beg);
	    fp.read((char*)&b,sizeof(book));
	    while(!fp.eof())
	    {
	    if(rnd==b.rno)
	    {
	    b.page();
	    main();
	    }
	    fp.read((char*)&b,sizeof(book));
	    }
	   }
 case 'B':{ flag=1;
	    fp.seekg(ios::beg);
	    fp.read((char*)&b,sizeof(book));
	    while(!fp.eof())
	    {
	    if(rnd1==b.rno)
	    {
	    b.page();
	    main();
	    }
	    fp.read((char*)&b,sizeof(book));
	    }
	   }
 case 'C':{ flag=1;
	    fp.seekg(ios::beg);
	    fp.read((char*)&b,sizeof(book));
	    while(!fp.eof())
	    {
	    if(rnd2==b.rno)
	    {
	    b.page();
	    main();
	    }
	    fp.read((char*)&b,sizeof(book));
	    }
	   }
 case 'D':{ flag=1;
	    fp.seekg(ios::beg);
	    fp.read((char*)&b,sizeof(book));
	    while(!fp.eof())
	    {
	    if(rnd3==b.rno)
	    {
	    b.page();
	    main();
	    }
	    fp.read((char*)&b,sizeof(book));
	    }
	   }
  case '1':{
	      flag=2;
	      searchpage();
	    int rc;
	    rc=4;
	    fp.seekg(ios::beg);
	    fp.read((char*)&b,sizeof(book));
	    while(!fp.eof())
	    {
	    if(b.rno==rc)
	    {
	    b.pro1();
	    goto d;
	    }
	    fp.read((char*)&b,sizeof(book));
	    }
	    d:
	    fp.read((char*)&b,sizeof(book));
	    b.pro2();
	    fp.read((char*)&b,sizeof(book));
	    b.pro3();
	    fp.read((char*)&b,sizeof(book));
	    b.pro4();
	    }   break;
 case '2': {
	      flag=3;
	      searchpage();
	    int rc;
	    rc=11;
	    fp.seekg(ios::beg);
	    fp.read((char*)&b,sizeof(book));
	    while(!fp.eof())
	    {
	    if(b.rno==rc)
	    {
	    b.pro1();
	    goto e;
	    }
	    fp.read((char*)&b,sizeof(book));
	    }
	    e:
	    fp.read((char*)&b,sizeof(book));
	    b.pro2();
	    fp.read((char*)&b,sizeof(book));
	    b.pro3();
	    fp.read((char*)&b,sizeof(book));
	    b.pro4();
	    }   break;
 case '3': {
	      flag=4;
	      searchpage();
	    int rc;
	    rc=16;
	    fp.seekg(ios::beg);
	    fp.read((char*)&b,sizeof(book));
	    while(!fp.eof())
	    {
	    if(b.rno==rc)
	    {
	    b.pro1();
	    goto f;
	    }
	    fp.read((char*)&b,sizeof(book));
	    }
	    f:
	    fp.read((char*)&b,sizeof(book));
	    b.pro2();
	    fp.read((char*)&b,sizeof(book));
	    b.pro3();
	    fp.read((char*)&b,sizeof(book));
	    b.pro4();
	    }   break;
 case '4': {
	      flag=5;
	      searchpage();
	    int rc;
	    rc=21;
	    fp.seekg(ios::beg);
	    fp.read((char*)&b,sizeof(book));
	    while(!fp.eof())
	    {
	    if(b.rno==rc)
	    {
	    b.pro1();
	    goto g;
	    }
	    fp.read((char*)&b,sizeof(book));
	    }
	    g:
	    fp.read((char*)&b,sizeof(book));
	    b.pro2();
	    fp.read((char*)&b,sizeof(book));
	    b.pro3();
	    fp.read((char*)&b,sizeof(book));
	    b.pro4();
	    }   break;
 case '5': {
	      flag=6;
	      searchpage();
	    int rc;
	    rc=26;
	    fp.seekg(ios::beg);
	    fp.read((char*)&b,sizeof(book));
	    while(!fp.eof())
	    {
	    if(b.rno==rc)
	    {
	    b.pro1();
	    goto h;
	    }
	    fp.read((char*)&b,sizeof(book));
	    }
	    h:
	    fp.read((char*)&b,sizeof(book));
	    b.pro2();
	    fp.read((char*)&b,sizeof(book));
	    b.pro3();
	    fp.read((char*)&b,sizeof(book));
	    b.pro4();
	    }   break;
 case '6': {
	      flag=7;
	      searchpage();
	    int rc;
	    rc=31;
	    fp.seekg(ios::beg);
	    fp.read((char*)&b,sizeof(book));
	    while(!fp.eof())
	    {
	    if(b.rno==rc)
	    {
	    b.pro1();
	    goto i;
	    }
	    fp.read((char*)&b,sizeof(book));
	    }
	    i:
	    fp.read((char*)&b,sizeof(book));
	    b.pro2();
	    fp.read((char*)&b,sizeof(book));
	    b.pro3();
	    fp.read((char*)&b,sizeof(book));
	    b.pro4();
	    }   break;
 case 'E':  if(flag==2)
	      {
	    fp.seekg(ios::beg);
	    fp.read((char*)&b,sizeof(book));
	    while(!fp.eof())
	    {
	    if(4==b.rno)
	    {
	    b.page();
	    main();
	    }
	    fp.read((char*)&b,sizeof(book));
	   }
	   }
	   else
	   if(flag==3)
	    {
	    fp.seekg(ios::beg);
	    fp.read((char*)&b,sizeof(book));
	    while(!fp.eof())
	    {
	    if(11==b.rno)
	    {
	    b.page();
	    main();
	    }
	    fp.read((char*)&b,sizeof(book));
	   }
	   }
	   else
	   if(flag==4)
	    {
	    fp.seekg(ios::beg);
	    fp.read((char*)&b,sizeof(book));
	    while(!fp.eof())
	    {
	    if(16==b.rno)
	    {
	    b.page();
	    main();
	    }
	    fp.read((char*)&b,sizeof(book));
	   }
	   }
	   else
	   if(flag==5)
	    {
	    fp.seekg(ios::beg);
	    fp.read((char*)&b,sizeof(book));
	    while(!fp.eof())
	    {
	    if(21==b.rno)
	    {
	    b.page();
	    main();
	    }
	    fp.read((char*)&b,sizeof(book));
	   }
	   }
	   else
	   if(flag==6)
	    {
	    fp.seekg(ios::beg);
	    fp.read((char*)&b,sizeof(book));
	    while(!fp.eof())
	    {
	    if(26==b.rno)
	    {
	    b.page();
	    main();
	    }
	    fp.read((char*)&b,sizeof(book));
	   }
	   }
	   else
	   if(flag==7)
	    {
	    fp.seekg(ios::beg);
	    fp.read((char*)&b,sizeof(book));
	    while(!fp.eof())
	    {
	    if(31==b.rno)
	    {
	    b.page();
	    main();
	    }
	    fp.read((char*)&b,sizeof(book));
	   }
	   }
	   break;
 case 'F':if(flag==2)
	      {
	    fp.seekg(ios::beg);
	    fp.read((char*)&b,sizeof(book));
	    while(!fp.eof())
	    {
	    if(5==b.rno)
	    {
	    b.page();
	    main();
	    }
	    fp.read((char*)&b,sizeof(book));
	   }
	   }
	   else
	   if(flag==3)
	    {
	    fp.seekg(ios::beg);
	    fp.read((char*)&b,sizeof(book));
	    while(!fp.eof())
	    {
	    if(12==b.rno)
	    {
	    b.page();
	    main();
	    }
	    fp.read((char*)&b,sizeof(book));
	   }
	   }
	   else
	   if(flag==4)
	    {
	    fp.seekg(ios::beg);
	    fp.read((char*)&b,sizeof(book));
	    while(!fp.eof())
	    {
	    if(17==b.rno)
	    {
	    b.page();
	    main();
	    }
	    fp.read((char*)&b,sizeof(book));
	   }
	   }
	   else
	   if(flag==5)
	    {
	    fp.seekg(ios::beg);
	    fp.read((char*)&b,sizeof(book));
	    while(!fp.eof())
	    {
	    if(22==b.rno)
	    {
	    b.page();
	    main();
	    }
	    fp.read((char*)&b,sizeof(book));
	   }
	   }
	   else
	   if(flag==6)
	    {
	    fp.seekg(ios::beg);
	    fp.read((char*)&b,sizeof(book));
	    while(!fp.eof())
	    {
	    if(27==b.rno)
	    {
	    b.page();
	    main();
	    }
	    fp.read((char*)&b,sizeof(book));
	   }
	   }
	   else
	   if(flag==7)
	    {
	    fp.seekg(ios::beg);
	    fp.read((char*)&b,sizeof(book));
	    while(!fp.eof())
	    {
	    if(32==b.rno)
	    {
	    b.page();
	    main();
	    }
	    fp.read((char*)&b,sizeof(book));
	   }
	   }
	   break;
 case 'G':if(flag==2)
	      {
	    fp.seekg(ios::beg);
	    fp.read((char*)&b,sizeof(book));
	    while(!fp.eof())
	    {
	    if(6==b.rno)
	    {
	    b.page();
	    main();
	    }
	    fp.read((char*)&b,sizeof(book));
	   }
	   }
	   else
	   if(flag==3)
	    {
	    fp.seekg(ios::beg);
	    fp.read((char*)&b,sizeof(book));
	    while(!fp.eof())
	    {
	    if(13==b.rno)
	    {
	    b.page();
	    main();
	    }
	    fp.read((char*)&b,sizeof(book));
	   }
	   }
	   else
	   if(flag==4)
	    {
	    fp.seekg(ios::beg);
	    fp.read((char*)&b,sizeof(book));
	    while(!fp.eof())
	    {
	    if(18==b.rno)
	    {
	    b.page();
	    main();
	    }
	    fp.read((char*)&b,sizeof(book));
	   }
	   }
	   else
	   if(flag==5)
	    {
	    fp.seekg(ios::beg);
	    fp.read((char*)&b,sizeof(book));
	    while(!fp.eof())
	    {
	    if(23==b.rno)
	    {
	    b.page();
	    main();
	    }
	    fp.read((char*)&b,sizeof(book));
	   }
	   }
	   else
	   if(flag==6)
	    {
	    fp.seekg(ios::beg);
	    fp.read((char*)&b,sizeof(book));
	    while(!fp.eof())
	    {
	    if(27==b.rno)
	    {
	    b.page();
	    main();
	    }
	    fp.read((char*)&b,sizeof(book));
	   }
	   }
	   else
	   if(flag==7)
	    {
	    fp.seekg(ios::beg);
	    fp.read((char*)&b,sizeof(book));
	    while(!fp.eof())
	    {
	    if(33==b.rno)
	    {
	    b.page();
	    main();
	    }
	    fp.read((char*)&b,sizeof(book));
	   }
	   }
	   break;
 case 'H':if(flag==2)
	      {
	    fp.seekg(ios::beg);
	    fp.read((char*)&b,sizeof(book));
	    while(!fp.eof())
	    {
	    if(7==b.rno)
	    {
	    b.page();
	    main();
	    }
	    fp.read((char*)&b,sizeof(book));
	   }
	   }
	   else
	   if(flag==3)
	    {
	    fp.seekg(ios::beg);
	    fp.read((char*)&b,sizeof(book));
	    while(!fp.eof())
	    {
	    if(14==b.rno)
	    {
	    b.page();
	    main();
	    }
	    fp.read((char*)&b,sizeof(book));
	   }
	   }
	   else
	   if(flag==4)
	    {
	    fp.seekg(ios::beg);
	    fp.read((char*)&b,sizeof(book));
	    while(!fp.eof())
	    {
	    if(19==b.rno)
	    {
	    b.page();
	    main();
	    }
	    fp.read((char*)&b,sizeof(book));
	   }
	   }
	   else
	   if(flag==5)
	    {
	    fp.seekg(ios::beg);
	    fp.read((char*)&b,sizeof(book));
	    while(!fp.eof())
	    {
	    if(24==b.rno)
	    {
	    b.page();
	    main();
	    }
	    fp.read((char*)&b,sizeof(book));
	   }
	   }
	   else
	   if(flag==6)
	    {
	    fp.seekg(ios::beg);
	    fp.read((char*)&b,sizeof(book));
	    while(!fp.eof())
	    {
	    if(29==b.rno)
	    {
	    b.page();
	    main();
	    }
	    fp.read((char*)&b,sizeof(book));
	   }
	   }
	   else
	   if(flag==7)
	    {
	    fp.seekg(ios::beg);
	    fp.read((char*)&b,sizeof(book));
	    while(!fp.eof())
	    {
	    if(34==b.rno)
	    {
	    b.page();
	    main();
	    }
	    fp.read((char*)&b,sizeof(book));
	   }
	   }
	   break;

}
}
if(flag>=2)
{
goto start;
}
int l,n,m,o;
 l=strlen(sr);
 if(l==4)
 {
 switch(sr[3])
 {
 case '1':n=1;break;
 case '0':n=0;break;
 case '2':n=2;break;
 case '3':n=3;break;
 case '4':n=4;break;
 case '5':n=5;break;
 case '6':n=6;break;
 case '7':n=7;break;
 case '8':n=8;break;
 case '9':n=9;break;
 }
 switch(sr[2])
 {
 case '1':m=1;break;
 case '0':m=0;break;
 case '2':m=2;break;
 case '3':m=3;break;
 case '4':m=4;break;
 case '5':m=5;break;
 case '6':m=6;break;
 case '7':m=7;break;
 case '8':m=8;break;
 case '9':m=9;break;
 }
 o=(m*10)+n;
  {         flag=1;
	    fp.seekg(ios::beg);
	    fp.read((char*)&b,sizeof(book));
	    while(!fp.eof())
	    {
	    if(o==b.rno)
	    {
	    b.page();
	    main();
	    }
	    fp.read((char*)&b,sizeof(book));
	    }
  }
 }
 if(flag==0)
 {
 searchpage();
 getch();
 exit(0);
 }
 fp.close();
 closegraph();
}


//MAIN SCREEN
void mainscreen()
{
clrscr();
int gdriver=DETECT, gmode,errorcode;
 initgraph(&gdriver,&gmode,"c:\\TurboC3\\BGI");
 setbkcolor(1);
 setcolor(15);
 settextstyle(2,HORIZ_DIR,11);
 outtextxy(155,2,"SKYCLOUD BOOKS");
 setcolor(15);
 rectangle(25,50,600,80);
 bar3d(25,50,150,80,5,1);
 setcolor(4);
 settextstyle(2,HORIZ_DIR,8);
 outtextxy(45,50,"SEARCH");
 setcolor(15);
 bar3d(25,89,600,110,5,1);
 setcolor(4);
 settextstyle(2,HORIZ_DIR,4);
 outtextxy(30,88,"Enter the number/character in search bar to view category/book. Enter book code to see book.");
 outtextxy(30,98,"If you want to make changes in the database please type LOGIN. Type EXIT to exit from the program.");
 setcolor(15);
 rectangle(25,120,150,375);
 bar3d(25,120,150,160,6,1);
 bar3d(25,163,150,203,6,0);
 bar3d(25,206,150,246,6,0);
 bar3d(25,249,150,289,6,0);
 bar3d(25,292,150,332,6,0);
 bar3d(25,335,150,375,6,0);
 setcolor(4);
 settextstyle(2,HORIZ_DIR,6);
 outtextxy(30,130,"1. FICTION");
 outtextxy(30,173,"2.NON-FICTION");
 outtextxy(30,216,"3. COMPUTERS");
 outtextxy(30,259,"4. CHILDREN");
 outtextxy(30,302,"5. ");
 outtextxy(55,290,"ENTRANCE");
 outtextxy(55,310,"EXAMS");
 outtextxy(30,345,"6. COLLEGE");
 setcolor(15);
 settextstyle(2,HORIZ_DIR,3);
 outtextxy(30,470,"2 0 1 4 - 1 5  C O P Y R I G H T  S K Y C L O U D  B O O K S  P O R C U P I N E  C O R P O R A T I O N   A L L   R I G H T S   R E S E R V E D ");
}


//CREATING NEW RECORDS
void create()
{
book bobj;
fstream fp;
char y='y';
fp.open("sky.dat",ios::binary|ios::out|ios::app);
while(y=='y'||y=='Y')
{
bobj.getdata();
fp.write((char*)&bobj,sizeof(book));
cout<<"\nDo you want to add more? Type y or n=";
cin>>y;
}
fp.close();
}


//DISPLAY ALL
void read()
{
book bobj;
fstream fp;
fp.open("sky.dat",ios::in|ios::binary);
fp.read((char*)&bobj,sizeof(book));
while(!fp.eof())
{
bobj.showdata();
cout<<"##############################################################";
fp.read((char*)&bobj,sizeof(book));
if(fp.eof())
cout<<"\nFinish";
getch();
}
fp.close();
}


//MODIFY RECORDS
void modify()
{
book bobj;
fstream fp;
int bno;
fp.open("sky.dat",ios::binary|ios::in|ios::out);
cout<<"\nEnter the book record number you want to modify=";
cin>>bno;
fp.read((char*)&bobj,sizeof(book));
while(!fp.eof())
{
if(bobj.rno==bno)
{
int y=fp.tellg();
fp.seekp(y-sizeof(book),ios::beg);
bobj.getdata();
fp.write((char*)&bobj,sizeof(book));
break;
}
fp.read((char*)&bobj,sizeof(book));
}
fp.close();
}


//DISPLAY A PARTICULAR RECORD
void display()
{
  book b;
  fstream fp;
  fp.open("sky.dat",ios::in|ios::binary);
  cout<<"\nHow do you want to search for the record you want to see?";
  cout<<"\n1. By book number";
  cout<<"\n2. By name of book";
  int n;
  char bno[4];
  cout<<"\nPlease enter your choice=";
  cin>>n;
  char str[20];
  int flag=0,flag1=0;
  switch(n)
  {
  case 1:if(flag==0)
	{
	cout<<"\n\nPlease enter the book record you want to search=";
	cin>>bno;
	flag=1;
	}
	int l,n,m,o;
 l=strlen(bno);
 if(l==4)
 {
 switch(bno[3])
 {
 case '1':n=1;break;
 case '0':n=0;break;
 case '2':n=2;break;
 case '3':n=3;break;
 case '4':n=4;break;
 case '5':n=5;break;
 case '6':n=6;break;
 case '7':n=7;break;
 case '8':n=8;break;
 case '9':n=9;break;
 }
 switch(bno[2])
 {
 case '1':m=1;break;
 case '0':m=0;break;
 case '2':m=2;break;
 case '3':m=3;break;
 case '4':m=4;break;
 case '5':m=5;break;
 case '6':m=6;break;
 case '7':m=7;break;
 case '8':m=8;break;
 case '9':m=9;break;
 }
 }
 else
 cout<<"\nWrong book code!!!";
 o=(m*10)+n;
  {
	    fp.seekg(ios::beg);
	    fp.read((char*)&b,sizeof(book));
	    while(!fp.eof())
	    {
	    if(o==b.rno)
	    {
	    b.page();
	    flag1=1;
	    main();
	    }
	    fp.read((char*)&b,sizeof(book));
	    }
  }
	break;
  case 2:if(flag==0)
	{
	cout<<"\n\nPlease enter the name of the book=";
	gets(str);
	flag=1;
	}
	int len;
	len=strlen(str);
	int p=0;
	for(int k=0;k<len;k++)
	{
	str[k]=toupper(str[k]);
	}
	fp.seekg(ios::beg);
	fp.read((char*)&b,sizeof(book));
	while(!fp.eof())
	{
	int l1;
	l1=strlen(b.name);
	char str1[35];
	for(int i=0;i<l1;i++)
	str1[i]=b.name[i];
	str1[i]='\0';
	p=0;
	for(int j=0;j<l1;j++)
	{
	str1[j]=toupper(str1[j]);
	}
	if(strcmp(str,str1)==0)
	{
	b.page();
	flag1=1;
	goto a;
	}
	fp.read((char*)&b,sizeof(book));
	}
	break;
  default:cout<<"\nWrong choice!!!!";

  }
  if(flag1==0)
  cout<<"\nBOOK NOT FOUND!!!!";
  a:
  fp.close();
}


//DELETE A RECORD
void del()
{
book b;
fstream fp1,fp2;
int n,flag=0;
cout<<"\nEnter the record number you want to delete=";
cin>>n;
fp1.open("sky.dat",ios::in|ios::binary);
fp2.open("temp.dat",ios::out|ios::binary);
fp1.read((char*)&b,sizeof(book));
while(!fp1.eof())
{
if(n!=b.rno)
fp2.write((char*)&b,sizeof(book));
else
if(n==b.rno)
flag=1;
fp1.read((char*)&b,sizeof(book));
}
fp1.close();
fp2.close();
remove("sky.dat");
rename("temp.dat","sky.dat");
if(flag==1)
cout<<"\n\nRECORD HAS BEEN DELETED SUCCESSFULLY!!!!!";
else
cout<<"\nRECORD NOT FOUND!!!!!";
}



void login()
{
clrscr();
char y,ans[20];
int ch;
cout<<"\nEnter Password=";
char p[5];
char pass[5]="TUHIN";
p[0]=getch();
cout<<"*";
p[1]=getch();
cout<<"*";
p[2]=getch();
cout<<"*";
p[3]=getch();
cout<<"*";
p[4]=getch();
cout<<"*";
int length=5;
for (int i=0; i<length; i++)
{
   p[i] = toupper(p[i]);
}
if(p[0]==pass[0]&&p[1]==pass[1]&&p[2]==pass[2]&&p[3]==pass[3]&&p[4]==pass[4])
goto a;
else
{
cout<<"\nWrong password!!!";
getch();
exit(0);
}
cout<<"\n\nWelcome to Skycloud Books!!";
a:
cout<<"\n1. Create record";
cout<<"\n2. Display all records";
cout<<"\n3. Display a record";
cout<<"\n4. Modify a record";
cout<<"\n5. Delete a record";
cout<<"\n6. Main Page";
cout<<"\n7. Orders Placed";
cout<<"\n8. Exit";
cout<<"\nPlease enter your choice=";
cin>>ch;
switch(ch)
{
case 1:create();break;
case 2:read();break;
case 3:display();break;
case 4:modify();break;
case 5:del();break;
case 6:main();break;
case 7:userread();break;
case 8:exit(0);break;
}
cout<<"\nDo you want to continue?(y/n)=";
cin>>y;
if(y=='y'||y=='Y')
goto a;
else
exit(0);
getch();
}


//SEARCH PAGE
void searchpage()
{
int gdriver=DETECT, gmode,errorcode;
 initgraph(&gdriver,&gmode,"c:\\TurboC3\\BGI");
 setbkcolor(1);
 setcolor(15);
 settextstyle(2,HORIZ_DIR,11);
 outtextxy(155,2,"SKYCLOUD BOOKS");
 setcolor(15);
 rectangle(25,50,600,80);
 bar3d(25,50,150,80,5,1);
 setcolor(4);
 settextstyle(2,HORIZ_DIR,8);
 outtextxy(45,50,"SEARCH");
 setcolor(15);
 bar3d(25,89,600,110,5,1);
 setcolor(4);
 settextstyle(2,HORIZ_DIR,4);
 outtextxy(30,88,"Enter number/character in search bar to view category/book. Type MAIN to go back to main menu.");
 outtextxy(30,98,"If you want to make changes in the database please type LOGIN. Type EXIT to exit from the program.");
 setcolor(15);
 settextstyle(2,HORIZ_DIR,3);
 outtextxy(30,470,"2 0 1 4 - 1 5  C O P Y R I G H T  S K Y C L O U D  B O O K S  P O R C U P I N E  C O R P O R A T I O N   A L L   R I G H T S   R E S E R V E D ");
 setcolor(4);
}
