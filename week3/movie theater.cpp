#include<iostream>
using namespace std;

main()
{
cout << " Enter movie name: " ;
string name;
cin >> name;

cout << " Enter the adult ticket price: $" ;
int adultp;
cin >> adultp;

cout << " Enter the child ticket price: " ;
int childp;
cin >> childp;

cout << " Enter the number of adult tickets sold: " ;
float adultn;
cin >> adultn;

cout << " Enter the number of child tickets sold: " ;
float childn;
cin >> childn;

cout << " Enter the percentage of ammount to be donated to charity: " ;
float donate;
cin >> donate;

float total_amount;
total_amount = (adultp * adultn) + (childp * childn);

float charity;
charity = (donate/100) * total_amount;

float remaining;
remaining = total_amount - charity;


cout << "----------------------------------------------------------"<<endl;
cout << "Moive: "<<name<<endl;
cout << "Total amount generated from ticket sales: $"<<total_amount<<endl ;
cout << "Donation to charity ("<<donate<<"): $"<<charity<<endl;
cout << "Remaining amount after donation: $"<<remaining;
 }