# include<iostream>
using namespace std;
main()
{
    int num;
    int sum=0;
    cout <<"Enter the number of Customers: ";
    cin >> num;
    cout <<"Enter "<<num<<" Customers: "<<endl;
    string array[num];
    for(int i = 0; i<num; i++){
        cin >> array[i];
    }
    cout <<"Enter a letter to check: ";
    char letter;
    cin >> letter;
    for(int j=0; j<num; j++){
        if((array)[j][0]==letter){
            sum = sum +1;
        }
    }
    cout <<"Total names starting with '"<<letter<<"' :"<<sum;
}