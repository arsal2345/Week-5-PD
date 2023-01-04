#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int ,int);
void print();
void gotoxy(int x,int y)
{
 COORD coordinates;
 coordinates.X = x;
 coordinates.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
main()
{
cout<<" #######  "<<endl;
cout<<"##     ## "<<endl;
cout<<"##     ## "<<endl;
cout<<"######### "<<endl;
cout<<"##     ## "<<endl;
cout<<"##     ## "<<endl;

cout<<" ###      ##       ##          "<<endl;
cout<<"  ##     ## ##     ##          "<<endl;
cout<<"  ##    ##   ##    ##          "<<endl;
cout<<"  ##   ##     ##   ##          "<<endl;
cout<<"  ##  ##       ##  ##          "<<endl;
cout<<"  ####          ####           "<<endl;

cout<<" #######    "<<endl;
cout<<"##     ##   "<<endl;
cout<<"##     ##   "<<endl;
cout<<"#########   "<<endl;
cout<<"##     ##   "<<endl;
cout<<"##     ##   "<<endl;

cout<<"########    "<<endl;
cout<<" ######     "<<endl;
cout<<"   ##       "<<endl;
cout<<"   ##       "<<endl;
cout<<"   ##       "<<endl;
cout<<"   ##       "<<endl;
cout<<" ######     "<<endl;
cout<<" ######     "<<endl;

cout<<" ########    "<<endl;
cout<<"##         "<<endl;
cout<<"##          "<<endl;
cout<<"#########    "<<endl;
cout<<"       ##   "<<endl;
cout<<"       ##  "<<endl;
cout<<"#########     "<<endl;
}



