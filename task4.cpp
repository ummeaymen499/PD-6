#include<iostream>
using namespace std;
float cellularcompany(char code,char period,int min);
char dayornight(char code);
string servicetype(char code);
main()
{
    int min;
    char period,code;
    cout<<"Enter the service code (R/r for regular, P/p for premium): ";
    cin>>code;
    period=dayornight(code);
    cout<<"Enter the number of minutes used: ";
    cin>>min;
    string ser_type=servicetype(code);
    cout<<ser_type<<endl;

    float result=cellularcompany(code,period,min);
    cout<<"Total Minutes Used: "<<min<<" minutes"<<endl;
    cout<<"Amount Due: $"<<result;

}
float cellularcompany(char code,char period,int min)
{  
    int extramin=min-50;
    
    float price;
  if(min<=50 && (code=='r'||code=='R')) 
   price=10;
  if(min>50 && (code=='r'||code=='R'))
   price=10+(extramin*0.2);
   
   

int extra_min=min-100;
    int Extramin=min-75;
   
    if(min<=100 &&(period=='N'||period=='n')&&(code=='p'||code=='P')) 
   price=25;
  if(min>100 &&(period=='N'||period=='n')&&(code=='p'||code=='P')) 
   price=25+(extra_min*0.05);
    if(min<=75&&(period=='d'||period=='D')&&(code=='p'||code=='P')) 
   price=25;
  if(min>75 &&(period=='d'||period=='D')&&(code=='p'||code=='P')) 
   price=25+(Extramin*0.10);
  
   return price;
}
char dayornight(char code)
{char per;
    if(code=='p'|| code=='P')
   {
    cout<<"Enter time of the call (D/d for day, N/n for night): ";
    cin>>per;
    }
    return per;

}
string servicetype(char code)
{
    if(code=='p'|| code=='P')
    {
       return "Service Type: Premium";
    }
    else{
       return "Service Type: Regular";
    }
    
}
