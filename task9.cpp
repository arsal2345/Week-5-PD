#include<iostream>
using namespace std;
void change(string name);

main()
{
  string name;
  cout<<"enter condition:";
  cin>>name;
  change(name);

}
void change(string name)
{
  if (name == "true") 
  {
     cout<<"false:";
  }
  if (name == "false")
  {
     cout<<"true:";
  }
}
  