#include<iostream>
using namespace std;

main()
{
    cout <<"Enter number: ";
    int num;
    cin>>num;
    cout <<"Enter digit: ";
    int dig;
    cin >>dig;
    int freq = 0;
    
    for(int i=num; i>0; i= i/10){
        num = i % 10;
        if (num == dig){
            freq = freq + 1;
        }
    }
    cout <<"Frequency of "<<dig<<" in this number is "<<freq;
    
}