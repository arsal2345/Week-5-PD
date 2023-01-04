#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
float numofRedRoses , numofWhiteRoses , numofTulips;
cout<<"Enter number of Red Roses:";
cin>>numofRedRoses;
cout<<"Enter number of White Roses:";
cin>>numofWhiteRoses;
cout<<"Enter number of Tulips:";
cin>>numofTulips;
float priceofRedRoses , priceofWhiteRoses , priceofTulips;
priceofRedRoses=numofRedRoses*2.00;
priceofWhiteRoses=numofWhiteRoses*4.10;
priceofTulips=numofTulips*2.50;
float totalprice=priceofRedRoses + priceofWhiteRoses + priceofTulips; 
cout<<"the total price of flowers:"<<totalprice<<endl;
if (totalprice > 200){
float discount;
discount=(totalprice*20)/100;
float originalprice;
originalprice=totalprice-discount;
cout<<"total payable amount after discount on flowers is:"<<originalprice<<endl;
}
}  