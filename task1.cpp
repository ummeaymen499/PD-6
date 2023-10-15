#include<iostream>
using namespace std;
string decideActivity(string temp, string humid);
main()
{string temp;
string humid;
cout<<"Enter temperature (warm or cold): ";
cin>>temp;
cout<<"Enter humidity (dry or humid): ";
cin>>humid;
string output=decideActivity(temp,humid);
cout<<"Recommended activity: "<<output;


}
string decideActivity(string temp, string humid)
{
    string result;
    if((temp=="warm")&&(humid=="dry"))
    result="Play tennis";
    if((temp=="warm")&&(humid=="humid"))
    result="Swim";
    if((temp=="cold")&&(humid=="dry"))
    result="Play basketball";
    if((temp=="cold")&&(humid=="humid"))
    result="Watch TV";
    return result;
    

}
