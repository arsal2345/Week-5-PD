#include<iostream>
using namespace std;
void isequal(int num1,int num2);

int main(){
int num1,num2;
cout<<"enter first number:";
cin>>num1;
cout<<"enter second number:";
cin>>num2;
isequal(num1,num2);
 
}

void isequal(int num1,int num2)
{
 if (num1 == num2)
    {
     cout<<"true";
    }
 if (num1 != num2)
    { 
     cout<<"false";
    }  
}