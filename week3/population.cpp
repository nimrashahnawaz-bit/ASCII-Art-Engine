#include<iostream>
using namespace std;

main()
{
cout << "Enter the current world population:" ;
int current;
cin >> current;

cout << "Enter the monthly birth rate:" ;
int monthly;
cin >> monthly;

int population;
population = monthly * 12 * 30 + current;
cout << " Population in three decades will be: "<< population;
}