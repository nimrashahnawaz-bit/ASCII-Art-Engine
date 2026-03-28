#include<iostream>
using namespace std;

main()
{
    int bill, discount, discounted_bill;
 cout << "Enter your bill: ";
 cin >> bill;

 if(bill <= 5000){
    discount = (5/100 * bill);
 }
else{
    discount = (10/100 * bill);
}
discounted_bill = bill - discount;
cout << "Your discounted bill is:"<<discounted_bill;
}
