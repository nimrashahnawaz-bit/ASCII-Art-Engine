# include<iostream>
using namespace std;
main()
{
    cout <<"Enter the number of flights: ";
    int n;
    cin>>n;
     int flight[n];
    string destination[n];
    int seats[n];
    for (int i = 0; i < n; i++) {
        cout<<"Enter flight number for flight "<<i+1<<": ";
        cin>> flight[i];
         cout<<"Enter destination for flight "<<flight[i]<<": ";
        cin>> destination[i];
         cout<<"Enter seats available for flight "<<flight[i]<<": ";
        cin>> seats[i];
    }
    cout<<endl<<"Flight Information"<<endl;
    cout<<"__________________"<<endl<<endl;
    for(int i =0; i <n; i++){
        cout<<"Flight "<<flight[i]<<" to "<<destination[i]<<" has "<<seats[i]<<" seats available."<<endl;
    }
    cout<<endl<<"Flights with less tha 5 seats available:"<<endl;
    cout<<"________________________________________"<<endl<<endl;
      for(int i =0; i <n; i++){
        if(seats[i] < 5){
            cout<<"Flight "<<flight[i]<<" to "<<destination[i]<<" has only "<<seats[i]<<" seats left!"<<endl;
            break;
        }
        else{
            cout<<"No flight with less than 5 seats available.";
            break;
        }
    }        
}