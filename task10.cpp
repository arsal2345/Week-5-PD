#include<iostream>
#include<windows.h>
using namespace std;
void discount(string name,float price);

int main()
{
  string name;
  float price;
  cout<<"enter country's name:";
  cin>>name;
  cout<<"enter ticket price:";
  cin>>price;
  discount(name,price);
}
 
 void discount(string name,float price)
{
  int a;
  int b;
  int c;
  int d;
  int e;
       
      if (name == "pakistan"){
         a==price-(price*0.05);
           cout<<"price of ticket in dollars after discount:"<<a<<"$";
     }
      if (name == "ireland"){
        b==price-(price*0.1);
           cout<<"price of ticket in dollars after discount:"<<b<<"$";
     }
     if (name == "india"){
        c==price-(price*0.2);
           cout<<"price of ticket in dollars after discount:"<<c<<"$";
     }
     if (name == "england"){
        d==price-(price*0.3);
           cout<<"price of ticket in dollars after discount:"<<d<<"$";
     }
    if (name == "canada"){
        e==price-(price*0.45);
           cout<<"price of ticket in dollars after discount:"<<e<<"$";
     }


}










