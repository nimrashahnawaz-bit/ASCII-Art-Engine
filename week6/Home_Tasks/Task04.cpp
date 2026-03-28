# include<iostream>
using namespace std;
main()
{
    cout <<"Enter names of 5 students: "<<endl;
    string array[5];
    for(int i = 0; i<5; i++){
        cin >> array[i];
    }
    cout<<"Student names are: "<<endl;
    for(int j=0; j<5; j++){
        cout<<array[j]<<endl;
    }
}