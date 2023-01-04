#include<iostream>
#include<windows.h>
using namespace std;
void challan(int speed);
 
int main()
{
  int speed;
while(true)
{
  cout<<"Enter car speed:";
  cin>>speed;
  challan(speed);
}

}

void challan(int speed)
{
  
    if (speed <= 100){
      cout<<"Perfect! you're going good:"<<endl;
   }
   if (speed > 100){
      cout<<"Halt!..... You will be challenged:";
   }

}