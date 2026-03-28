# include<iostream>
using namespace std;
main()
{
    string word;
    cout<<"Enter a word: ";
    cin >> word;
     for(int i = word.length() - 1; i>=0; i--){
        cout << word[i];
     }
}