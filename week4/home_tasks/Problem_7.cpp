#include<iostream>
using namespace std;

main()
{
    cout <<"Enter type of the Figure: ";
    string fig;
    cin>>fig;
    float output;

    if (fig == "square"){
    cout << "Length: ";
    float l;
    cin >> l;
    output = 4 * l;
    }
    else if (fig == "rectangle"){
    cout << "Length: ";
    float l;
    cin >> l;
    cout << "Width: ";
    float w;
    cin >> w;
    output = w * l;
    }
    else if (fig == "circle"){
    cout << "Radius: ";
    float r;
    cin >> r;
    output = 3.14 * r * r;
    }
    else if (fig == "triangle"){
    cout << "Length: ";
    float l;
    cin >> l;
    cout << "Height: ";
    float h;
    cin >> h;
    output = 0.5 *h * l;
    }

    cout <<"Area of "<<fig<<": "<<output;
}