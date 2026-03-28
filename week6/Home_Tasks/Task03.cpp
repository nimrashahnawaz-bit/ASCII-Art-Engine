# include<iostream>
using namespace std;
main()
{
    int num;
    int largest = 0;
    cout <<"Enter the number of Elements: ";
    cin >> num;
    cout <<"Enter "<<num<<" numbers: ";
    int array[num];
    for(int i = 0; i<num; i++){
        cin >> array[i];
    }
    for(int j=0; j<num; j++){
        if(array[j]>largest){
            largest = array[j];
        }
    }
    int smallest = array[0];
     for(int n=0; n<num; n++){
        if(array[n]<smallest){
            smallest = array[n];
        }
    }
    cout<<"Largest number: "<<largest<<endl;
    cout<<"Smallest number: "<<smallest;
}