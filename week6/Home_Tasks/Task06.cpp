#include <iostream>
using namespace std;

 main()
  {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    string names[n];
    cout << "Enter names of " << n << " students:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> names[i];
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            
            if (names[j] > names[j + 1]) {
                string other = names[j];
                names[j] = names[j + 1];
                names[j + 1] = other;
            }
        }
    }

   
    cout << "Students in alphabetical order:" << endl;
    for (int i = 0; i < n; i++) {
        cout << names[i] << endl;
    }
}