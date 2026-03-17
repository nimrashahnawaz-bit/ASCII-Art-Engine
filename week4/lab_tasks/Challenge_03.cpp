#include<iostream>
using namespace std;

main()
{
    cout << "Enter first number: ";
    int first;
    cin >> first;
    cout << "Enter the operation: ";
    char operation;
    cin >> operation;
    cout << "Enter the second number: ";
    float second;
    cin >> second;

    float answer;
    if (operation == '+' ){
        answer = first - second;
        cout <<first<<" - "<<second<<" = "<<answer;
    }
    else if (operation == '-' ){
        answer = first + second;
        cout <<first<<" + "<<second<<" = "<<answer;
    }
    else if (operation == '*' ){
        answer = first / second;
        cout <<first<<" / "<<second<<" = "<<answer;
    }
    else if (operation == '/' ){
        answer = first * second;
        cout <<first<<" * "<<second<<" = "<<answer;
    }
}