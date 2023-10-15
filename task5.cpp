#include<iostream>
using namespace std;
float calculateFruitPrice(string fruit, string dayOfWeek, double
quantity);
main()
{
  string fruit,dayOfWeek; double quantity;
  cout<<"Fruit: ";
  cin>>fruit;
  cout<<"DayOfWeek: ";
  cin>>dayOfWeek;
  cout<<"Quantity: ";
  cin>>quantity;
  float result=calculateFruitPrice(fruit,dayOfWeek,quantity);
  if(result==-1)
  cout<<"error"<<endl;
  else
    cout<<result;
  
}
float calculateFruitPrice(string fruit, string dayOfWeek, double
quantity)
{
    float price;
    if ((dayOfWeek == "Monday" || dayOfWeek == "Tuesday" || dayOfWeek == "Wednesday" || dayOfWeek == "Thursday" || dayOfWeek == "Friday" || dayOfWeek == "Saturday" || dayOfWeek == "Sunday") &&
        (fruit == "banana" || fruit == "apple" || fruit == "orange" || fruit == "grapefruit" || fruit == "kiwi" || fruit == "pineapple" || fruit == "grapes")) 
        {
    if(dayOfWeek=="Monday"||dayOfWeek=="Tuesday"||dayOfWeek=="Wednesday"||dayOfWeek=="Thursday"||dayOfWeek=="Friday")
    {
    { if(fruit=="banana")
        price=quantity*2.50;
    }
    { if(fruit=="apple")
        price=quantity*1.20;
    }
    { if(fruit=="orange")
        price=quantity*0.85;
    }
    { if(fruit=="grapefruit")
        price=quantity*1.45;
    }
    { if(fruit=="kiwi")
        price=quantity*2.70;
    }
    { if(fruit=="pineapple")
        price=quantity*5.50;
    }
    { if(fruit=="grapes")
        price=quantity*3.85;
    }
    
}
if(dayOfWeek=="Sunday"||dayOfWeek=="Saturday")
{
    { if(fruit=="banana")
        price=quantity*2.70;
    }
    { if(fruit=="apple")
        price=quantity*1.25;
    }
    { if(fruit=="orange")
        price=quantity*0.90;
    }
    { if(fruit=="grapefruit")
        price=quantity*1.60;
    }
    { if(fruit=="kiwi")
        price=quantity*3.00;
    }
    { if(fruit=="pineapple")
        price=quantity*5.60;
    }
    { if(fruit=="grapes")
        price=quantity*4.20;
    }
    
}


        }
        else{
            return -1;
        }
        return price;
 
}
