#include<iostream>
using namespace std;
float calculateAverage(float marksEnglish, float marksMaths, float
marksChemistry, float marksSocialScience, float marksBiology);
string calculateGrade(float average);
main()
{
    string name;
    float eng,math,chem,soc_science,bio;
    cout<<"Enter student name: ";
    cin>>name;
    cout<<"Enter marks for English: ";
    cin>>eng;
    cout<<"Enter marks for Maths: ";
    cin>>math;
    cout<<"Enter marks for Chemistry: ";
    cin>>chem;
    cout<<"Enter marks for Social Science: ";
    cin>>soc_science;
    cout<<"Enter marks for Biology: ";
    cin>>bio;
    float output=calculateAverage(eng,math,chem,soc_science,bio);
    float percent=output*100;
    string final=calculateGrade(output);
    cout<<"Student Name: "<<name<<endl;
    cout<<"Percentage: "<<percent<<"%"<<endl;
    cout<<"Grade: "<<final;
    
}
float calculateAverage(float marksEnglish, float marksMaths, float
marksChemistry, float marksSocialScience, float marksBiology)
{
    float total;
    total=marksEnglish+marksMaths+marksChemistry+marksSocialScience+marksBiology;
    float average=total/500;
    return average;
    
}
string calculateGrade(float average)
{
string grade;  
float percent;
percent=average*100;
if(percent>=90 && percent<=100)
  grade="A+";
if(percent>=80 && percent<=90)
  grade="A";
if(percent>=70 && percent<=80)
  grade="B+";
if(percent>=60 && percent<=70)
  grade="B";
if(percent>=50 && percent<=60)
  grade="C";
if(percent>=40 && percent<=50)
  grade="D";
if(percent<40)
  grade="F";
  return grade;

            
}


