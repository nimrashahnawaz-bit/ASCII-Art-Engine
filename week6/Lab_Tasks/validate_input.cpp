# include<iostream>
using namespace std;
main()
{
    int num;
    cout <<"Enter the number of elements: ";
    cin >> num;
    
    int array[num];
   int count =0;
    cout <<"Enter "<<num<<" numbers: "<<endl;
    for (int i = 0; i<num; i++){
        int x;
        cin >>x;
        bool isfound = false;
        for(int j = 0; j<num; j++){
            if(array[j] == x){
                isfound = true;
                break;
            }
        }
        if (isfound){
            cout <<"Already Entered: "<<x;
        }
        else{
            array[count] = x;
            count++;
        }
    }
    cout<<"Unique numbers entered: ";
     for (int i = 0; i<num; i++){
        cout<<array[i]<<", ";
     }
}