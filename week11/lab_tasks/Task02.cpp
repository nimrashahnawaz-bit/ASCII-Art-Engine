#include <iostream>
using namespace std;

void printCars(int cars[][5], int rowSize);

main()
{
    const int rowSize = 5;
    const int colSize = 5;
    int cars[rowSize][colSize] = {{10, 7, 12, 10, 4},
                                  {18, 11, 15, 16, 2},
                                  {23, 19, 0, 2, 17},
                                  {7, 12, 17, 16, 8},
                                  {3, 5, 6, 2, 1}};
    printCars(cars, rowSize);
}

void printCars(int cars[][5], int rowSize)
{
    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << cars[i][j] << "\t";
        }
        cout << endl;
    }
}