#include<iostream>
#include<string>
using namespace std;
string calculateHotelPrices(string month, float numberOfStays);
string calculateapart(string month, float numberOfStays);
main()
{
    string month;
    int numberOfStays;
    cout<<"Enter the month (May, June, July, August, September, October): ";
    cin>>month;
    cout<<"Enter the number of stays: ";
    cin>>numberOfStays;
    string resultstu=calculateHotelPrices(month,numberOfStays);
    string resultapart=calculateapart(month,numberOfStays);
    cout<<"Apartment: "<<resultapart<<"$."<<endl;
    cout<<"Studio: "<<resultstu<<"$.";
    
}
string calculateHotelPrices(string month, float numberOfStays)
{
    float chargesofstudio;
    string result;
   if(month=="May"||month=="October")
   {float amount=50;
     if(numberOfStays>7 && numberOfStays<=14)
     {  
        chargesofstudio=numberOfStays*(amount-(amount*0.05));}
     else
     {
        chargesofstudio=amount*numberOfStays;
     }
     if(numberOfStays>14)
     {   amount=50;
        chargesofstudio=numberOfStays*(amount-(amount*0.3));}
     else
     {
        chargesofstudio=amount*numberOfStays;
     }

     
   }
    if(month=="June"||month=="September")
   { float amount=75.20;
     if(numberOfStays>14)
     {chargesofstudio=numberOfStays*(amount-(amount*0.2));}
     else
     {
        chargesofstudio=numberOfStays*amount;
     }
   }
    
   if(month=="July"||month=="August")
   {float amount=76;
     
        chargesofstudio=numberOfStays*amount;
     
     
   }
  result=to_string(chargesofstudio);
  return result;
   

}
string calculateapart(string month, float numberOfStays)
{float chargesofapartment;
 string result;
if((month=="May")||(month=="October"))
{float amount=65;
if(numberOfStays>14)
{ 
     chargesofapartment=numberOfStays*(amount-(amount*0.1));}
           
          else
     {
     chargesofapartment=numberOfStays*amount;}
}
    
     if((month=="June")||(month=="September"))
{float amount=68.70;
if(numberOfStays>14)
{
    chargesofapartment=numberOfStays*(amount-(amount*0.1));}
          else
     {
     chargesofapartment=numberOfStays*amount;}
}
    
     if((month=="July")||(month=="August"))
{float amount=77;
if(numberOfStays>14)
    { chargesofapartment=numberOfStays*(amount-(amount*0.1));}
           
          else
     {
     chargesofapartment=numberOfStays*amount;}
}
     result = to_string(chargesofapartment);
    return result;

}