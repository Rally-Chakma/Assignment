
#include<iostream>
using namespace std;

#include <graphics.h>

#include <cmath>
#include<ctime>
#include <string>

const double pi = 3.14159265;


void Emoji(){
   initwindow(1000,1000,"q");
   floodfill(0,0,WHITE);

   setcolor(BLACK);
   setlinestyle(SOLID_LINE,0,30);

   circle(400,400,350);
   setfillstyle(SOLID_FILL,YELLOW);
   floodfill(400,400,BLACK);




   ellipse(270,300,190,10,100,110);

    ellipse(530,300,170,350,100,110);

    ellipse(400,600,10,170,200,110);

   getch();
   closegraph();
}

void Flag(){
     initwindow(1000,1000,"");

    setcolor(7);

    setfillstyle(SOLID_FILL,WHITE);
    rectangle(100,100,500,400);
    floodfill(101,101,7);

    setfillstyle(SOLID_FILL,RED);
    circle(300,250,100);
    floodfill(300,250,7);

    setlinestyle(SOLID_LINE,0,20);

    line(100,90,100,700);

   getch();
   closegraph();
}

void Emoji2(){
   initwindow(1000,1000,"q");
   floodfill(0,0,WHITE);

   setcolor(BLACK);
   setlinestyle(SOLID_LINE,0,25);

   circle(400,400,400);
   setfillstyle(SOLID_FILL,YELLOW);
   floodfill(400,400,BLACK);




   ellipse(260,300,0,180,100,150);

    ellipse(540,300,0,180,100,150);

    ellipse(400,400,180,360,180,200);

   getch();
   closegraph();
}

void Football(){
    initwindow(2000,2000,"");

	// Ground Outline
	rectangle(100, 50, 1200, 550);



	// Coloring Green
	setfillstyle(SOLID_FILL, GREEN);
	floodfill(150, 150, 15);

	// Ground Middle Line
	line(650, 50, 650, 550);
	line(656, 50, 656, 550);

	// Coloring White
	setfillstyle(SOLID_FILL, WHITE);
	floodfill(652, 150, 15);

	arc(100,50,270,360,50);
	arc(100,550,0,90,50);
	arc(1200,550,90,180,50);
	arc(1200,50,180,270,50);

	// Mid Circles
	circle(653, 300, 60);
	circle(653, 300, 65);
	circle(653, 300, 10);

	// Outer Rectangle Left
	rectangle(100, 200, 250, 400);
	rectangle(100, 205, 245, 395);

	// Inner Rectangle Left
	rectangle(100, 230, 200, 370);
	rectangle(100, 235, 195, 365);

	// Arc Left Side
	arc(250, 300, 270, 90, 40);
	arc(250, 300, 270, 90, 35);

	// Outer Rectangle Right
	rectangle(1200, 200, 1050, 400);
	rectangle(1200, 205, 1055, 395);

	// Inner Rectangle Right
	rectangle(1200, 230, 1100, 370);
	rectangle(1200, 235, 1105, 365);

	// Arc Right Side
	arc(1051, 300, 90, 270, 40);
	arc(1051, 300, 90, 270, 35);

	// Coloring All White
	floodfill(714, 300, 15);
	floodfill(592, 300, 15);
	floodfill(657, 300, 15);
	floodfill(645, 300, 15);
	floodfill(247, 300, 15);
	floodfill(197, 300, 15);
	floodfill(287, 300, 15);
	floodfill(1053, 300, 15);
	floodfill(1103, 300, 15);
	floodfill(1013, 300, 15);
	getch();
	closegraph();
}

void House(){
    initwindow(500,500,"");
    /* Draw Hut */
    setcolor(WHITE);
    rectangle(150,180,250,300);
    rectangle(250,180,420,300);
    rectangle(180,250,220,300);

    line(200,100,150,180);
    line(200,100,250,180);
    line(200,100,370,100);
    line(370,100,420,180);

    /* Fill colours */
    setfillstyle(SOLID_FILL, BROWN);
    floodfill(152, 182, WHITE);
    floodfill(252, 182, WHITE);
    setfillstyle(SLASH_FILL, BLUE);
    floodfill(182, 252, WHITE);
    setfillstyle(HATCH_FILL, GREEN);
    floodfill(200, 105, WHITE);
    floodfill(210, 105, WHITE);
    getch();
    closegraph();
}

int main(){
    int gd = DETECT, gm;
    cout<<"NAME : Rally Chakma"<<endl;
    cout<<"ID : CSE2101022052"<<endl;
    cout<<"-------------MENU---------"<<endl;
    cout<<" 1.Emoji"<<endl;
    cout<<" 2.Flag"<<endl;
    cout<<" 3.Footbal Fild"<<endl;
    cout<<" 4.Emoji 2"<<endl;
    cout<<" 5.House"<<endl;
    cout<<" Enter 0 to Exit"<<endl;
    int x;
    while(1){
    cout<<"Enter your choice"<<endl;
    cin>>x;
    switch(x){
        case 1:
            Emoji();
            break;
        case 2:
            Flag();
            break;
        case 3:
            Football();
            break;
        case 4:
            Emoji2();
            break;
        case 5:
            House();
            break;
        case 0:
            return 0;
        default :
            cout<<"choose from menu number"<<endl;
            break;
        }
    }
}
