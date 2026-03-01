#include<iostream>
using namespace std;

main()
{
cout << " Enter imposters: " ;
int i;
cin >> i;
i >= 3;

cout << " Enter players: " ;
float p;
cin >> p;
p >= 10;

float chance;
chance = 100 * ( i / p );
cout << "Chance = "<<chance<<"%" ;
}