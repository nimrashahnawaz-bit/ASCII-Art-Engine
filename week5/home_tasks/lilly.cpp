#include <iostream>
using namespace std;

main() 
{
    int age, toyPrice;
    float washingMachinePrice;
    
    cout <<"Age of lilly: ";
    cin >> age;
    cout <<"Price of Washing Machine: ";
    cin >> washingMachinePrice;
    cout <<"Price of toys: ";
    cin >> toyPrice;

    int toysCount = 0;
    float savedMoney = 0;
    float currentBirthdayMoney = 10;

    for (int i = 1; i <= age; i++) {
        if (i % 2 == 0) {
            savedMoney = savedMoney + currentBirthdayMoney;
            savedMoney = savedMoney - 1; 
            currentBirthdayMoney = currentBirthdayMoney + 10;
        } else {
            toysCount++;
    }
}

    savedMoney = (toysCount * toyPrice) + savedMoney;

    if (savedMoney >= washingMachinePrice) {
        cout << "Yes!" << endl;
        cout << (savedMoney - washingMachinePrice) << endl;
    } else {
        cout << "No!" << endl;
        cout << (washingMachinePrice - savedMoney) << endl;
    }
}