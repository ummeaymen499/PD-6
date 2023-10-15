#include<iostream>
using namespace std;
string findZodiacSign(int day, string month);
main()
{
    int date;
    string month;
    cout<<"Enter the day of birth: ";
    cin>>date;
    cout<<"Enter the month of birth (e.g., January, February): "; 
    cin>>month;
    string result=findZodiacSign(date,month);
    cout<<"Zodiac Sign: "<<result;
}
string findZodiacSign(int day, string month)
{
    string Zodiac;
    if((day>=21 && month=="March")||(day<=19 && month=="April"))
    Zodiac="Aries";
    if((day>=20 && month=="April")||(day<=20 && month=="May"))
    Zodiac="Taurus";
    if((day>=21 && month=="May")||(day<=20 && month=="June"))
    Zodiac="Gemini";
    if((day>=21 && month=="June")||(day<=22 && month=="July"))
    Zodiac="Cancer";
    if((day>=23 && month=="July")||(day<=22 && month=="August"))
    Zodiac="Leo";
    if((day>=23 && month=="August")||(day<=22 && month=="September"))
    Zodiac="Virgo";
    if((day>=23 && month=="September")||(day<=22 && month=="October"))
    Zodiac="Libra";
    if((day>=23 && month=="October")||(day<=21 && month=="November"))
    Zodiac="Scorpio";
    if((day>=22 && month=="November")||(day<=21 && month=="December"))
    Zodiac="Sagittarius";
    if((day>=22 && month=="December")||(day<=19 && month=="January"))
    Zodiac="Capricorn";
    if((day>=20 && month=="January")||(day<=18 && month=="February"))
    Zodiac="Aquarius";

    return Zodiac; 
    
}
