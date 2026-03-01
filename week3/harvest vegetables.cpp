#include<iostream>
using namespace std;

main()
{
cout << " Enter the vegetable price per kg (in coins) : " ;
float veg_price;
cin >> veg_price;

cout << " Enter the fruit price per kg (in coins): " ;
float fruit_price;
cin >> fruit_price;

cout << " Enter total kilograms of vegetables: " ;
int total_veg;
cin >> total_veg;

cout << " Enter total kilograms of fruits: " ;
int total_fruit;
cin >> total_fruit;

float earning;
earning = (total_veg * veg_price) + (total_fruit * fruit_price);

float rps;
rps = earning / 1.94;

cout << "Total earnings in Rupees (Rps): "<<rps;
} 


