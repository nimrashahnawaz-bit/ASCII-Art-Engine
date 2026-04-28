#include<iostream>
using namespace std;

int multiply (int a);
main()
{
  cout <<"Enter a number: ";
  int num;
  cin >> num;
  cout <<"Result: "<<multiply (num);
}
int multiply (int a)
{
    int b = a*5;
    return b;
}