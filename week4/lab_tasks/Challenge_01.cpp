#include<iostream>
using namespace std;

main()
{
float bill;
 cout << "Enter your bill: ";
 cin >> bill;

float discount;
 if (bill <= 5000){
    discount = (bill * 0.05);
 }
if (bill > 5000){
    discount = (bill * 0.1);
}

float discounted_bill;
discounted_bill = bill - discount;
cout << "Your discounted bill is:"<<discounted_bill;
}
