#include<iostream>
using namespace std;

main()
{
    cout << "Enter the length of the rectangle:";
    int length;
    cin >> length;

    cout << "Enter the width of the rectangle:";
    int width;
    cin >> width;
   
    
    int area;
    area = length * width;
    cout << "The area of the rectangle is "<<area;
}