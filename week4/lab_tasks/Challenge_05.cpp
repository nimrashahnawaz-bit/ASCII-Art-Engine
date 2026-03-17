#include<iostream>
using namespace std;

main()
{
    cout << "Enter name of first brother: ";
    string name_1;
    cin >> name_1;
    cout << "Enter age of first brother: ";
    int age_1;
    cin >> age_1;

     cout << "Enter name of second brother: ";
    string name_2;
    cin >> name_2;
    cout << "Enter age of second brother: ";
    int age_2;
    cin >> age_2;

     cout << "Enter name of third brother: ";
    string name_3;
    cin >> name_3;
    cout << "Enter age of third brother: ";
    int age_3;
    cin >> age_3;

    if (age_1 < age_2 && age_2 < age_3){
        cout <<name_1<<" is youngest";
    }

    if (age_3 < age_2 && age_2 < age_1){
        cout <<name_3<<" is youngest";
    }

     if (age_3 > age_2 && age_2 < age_1){
        cout <<name_2<<" is youngest";
    }
}