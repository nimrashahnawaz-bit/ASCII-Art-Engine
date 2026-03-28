# include<iostream>
using namespace std;
main()
{
    string word;
    char letter;
    bool found = false;
    cout <<"Enter the Word: ";
    cin>>word;
    cout<<"Enter the Character you want to find: ";
    cin>>letter;
    for(int i=0; word[i] != '\0'; i++){
        if(word[i] == letter){
            cout <<letter<<" is found in "<<word;
            break;
        } 
    }
    for(int i=0; word[i] != '\0'; i++){
        if(word[i] != letter){
            found = true;
        } 
    }
if(found == true){
            cout<<"Not Found";
        }
}