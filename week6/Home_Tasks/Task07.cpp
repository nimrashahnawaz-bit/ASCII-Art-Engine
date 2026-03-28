# include <iostream>
using namespace std;

 main()
  {
    int n;
    cout << "Enter number of products: ";
    cin >> n;

    string name[100];
    int price[n];
    int quanity[n];
    float value[n];
    for (int i = 0; i < n; i++) {
        cout<<"Enter product name "<<i+1<<": ";
        cin>> name[i];
         cout<<"Enter price of "<<name[i]<<": $";
        cin>> price[i];
         cout<<"Enter quanity of "<<name[i]<<": ";
        cin>> quanity[i];
        value[i]= price[i]*quanity[i];
    }
    cout<<"Product Inventory Report"<<endl;
    cout<<"________________________"<<endl;
    for(int i=0; i<n; i++){
        cout<< name[i]<<":  $"<<price[i]<<",  "<<quanity[i]<<"  in stock,  Total value: "<<value[i]<<endl;

    }

}