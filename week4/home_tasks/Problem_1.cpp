#include<iostream>
using namespace std;

main()
{
    cout <<"Enter Country: ";
    string country;
    cin >> country;
    cout <<"Enter Ticket price: ";
    int ticket;
    cin >> ticket;
    float discount;
    if (country == "ireland"){
        discount = ticket * 10/100;
    }
    else{
        discount = ticket * 5/100;
    }
    float discounted_price;
    discounted_price = ticket - discount;
    cout << "Discounted Price: "<<discounted_price;
}