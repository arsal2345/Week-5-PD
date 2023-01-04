#include<iostream>
#include<windows.h>
using namespace std;

main(){
int holidays;
cout<<"Enter number of Holidays:";
cin>>holidays;
int Workingdays;
Workingdays=365-holidays;
int timeforgames;
timeforgames=(Workingdays*63+holidays*127);
int difference;
difference=30000-timeforgames;
int hours=difference/60;
int minutes=difference%60;
cout<<"time for sleep is:"<<hours<<endl;
cout<<"time for play is:"<<minutes;
}