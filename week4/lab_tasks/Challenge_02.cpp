#include<iostream>
using namespace std;

main()
{
   int salary = 10000;
   int laptop_price = 50000;
   int months = 6;
   int advance;
   int advanced_months;
   advance = (salary * 50/100) * 6;
   if (advance == laptop_price){
    cout << "You can buy laptop with this advanced salary";
   }
   advanced_months = laptop_price / (salary * 50/100);
   cout << "Months required to buy laptop: "<<advanced_months; 

}