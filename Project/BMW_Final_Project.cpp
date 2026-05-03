#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

// ========== GLOBAL VARIABLES ==========
const int total = 100;
int carCount = 10;
int saleCount = 4;
int testDriveCount = 3;
int feedbackCount = 4;

// Arrays
string nameArray[total] = {"BMW i3", "BMW X2", "BMW XZ", "BMW X3", "BMW X5", "BMW X7", "BMW M3", "BMW M4", "BMW iX", "BMW i7"};
int priceArray[total] = {42000, 54000, 93000, 46000, 65000, 77000, 72000, 74000, 53000, 87000};
int stockArray[total] = {4, 5, 4, 6, 7, 2, 5, 6, 3, 1};
string customers[total] = {"Rija Ijaz", "Tashifa   ", "Hamza Ali", "Hira Malik"};
string soldCars[total] = {"BMW M3", "BMW i7", "BMW X5", "BMW M4"};
int soldAmount[total] = {72000, 87000, 65000, 74000};
string testDriveCustomers[total] = {"Nimra Shahnawaz", "Wali Muhammad", "Donald Trump"};
string testDriveCar[total] = {"BMW 7 Series", "BMW X7", "BMW 3 Series"};
string testDriveDate[total] = {"07/08/2026", "04/09/2026", "24/04/2026"};
string testDrivePhone[total] = {"+92 333 4445678", "+92 321 0989087", "+92 332 654123"};
string feedbackCustomer[total] = {"Rija Ijaz", "Tashifa   ", "Hamza Ali", "Hira Malik"};
string feedbackCar[total] = {"BMW M3", "BMW i7", "BMW i4", "BMW M4"};
int feedbackRating[total] = {5, 5, 4, 4};
string feedbackComment[total] = {
    "Amazing car! Very smooth drive!",
    "Incredible performance! Best car ever!",
    "Great electric car. Charging could be faster.",
    "Amazing car! Very smooth drive!"};

// ========== FUNCTION DECLARATIONS ==========
void mainHeader();
void addCar();
void viewAllCars();
void updatePrice();
void updateStock();
void deleteCar();
void lowStockAlert();
void salesReport();
void viewTestDrives();
void profitCalculator();
void viewFeedback();
void budgetSearch();
void nameSearch();
void bookCar();
void compareCars();
void priceAnalysis();
void bookTestDrive();
void giveFeedback();
void customerMenu();
void salesTeamMenu();

// ========== MAIN FUNCTION ==========
int main()
{
    while (true)
    {
        system("cls");
        mainHeader();
        cout << endl;
        cout << "User Options: " << endl;
        cout << "1. Sales Team" << endl;
        cout << "2. Customer" << endl;
        cout << "3. EXIT" << endl;
        cout << "Choice one of the above options: ";

        int option;
        cin >> option;

        if (option == 1)
        {
            salesTeamMenu();
        }
        else if (option == 2)
        {
            customerMenu();
        }
        else if (option == 3)
        {
            break;
        }
        else
        {
            cout << "You entered wrong option" << endl;
        }
    }

    cout << endl;
    cout << " THANK YOU FOR USING OUR SYSTEM!" << endl;
    cout << "BMW: The Ultimate Driving Machine " << endl;

    return 0;
}

// ========== SALES TEAM MENU FUNCTION ==========
void salesTeamMenu()
{
    for (int i = 0; i < 3; i++)
    {
        system("cls");
        cout << "Sales Team Menu : Login Attempt " << i + 1 << endl;
        cout << "Enter password : ";
        string password;
        cin >> password;

        if (password == "8367")
        {
            cout << "Login Successfully" << endl;
            cout << endl;

            while (true)
            {
                cout << "================================" << endl;
                cout << "   Welcome to Sales Team Menu   " << endl;
                cout << "================================" << endl;
                cout << "1. Add new Car" << endl;
                cout << "2. View all Cars" << endl;
                cout << "3. Update Price" << endl;
                cout << "4. Update Stock" << endl;
                cout << "5. Delete Car" << endl;
                cout << "6. Low stock Alert" << endl;
                cout << "7. Sales Report" << endl;
                cout << "8. View Test Drive Bookings" << endl;
                cout << "9. Profit Calculator" << endl;
                cout << "10. View FeedBack" << endl;
                cout << "11. Exit to Main" << endl;
                cout << "Select the option: ";

                int adminOption;
                cin >> adminOption;

                if (adminOption == 1)
                    addCar();
                else if (adminOption == 2)
                    viewAllCars();
                else if (adminOption == 3)
                    updatePrice();
                else if (adminOption == 4)
                    updateStock();
                else if (adminOption == 5)
                    deleteCar();
                else if (adminOption == 6)
                    lowStockAlert();
                else if (adminOption == 7)
                    salesReport();
                else if (adminOption == 8)
                    viewTestDrives();
                else if (adminOption == 9)
                    profitCalculator();
                else if (adminOption == 10)
                    viewFeedback();
                else if (adminOption == 11)
                    break;
                else
                    cout << "Wrong Option entered" << endl;

                cout << "Press any key to continue..." << endl;
                getch();
            }
            break;
        }
        else
        {
            cout << "INVALID Password" << endl;
            cout << "Press any key to continue... ";
            getch();
        }
    }
}

// ========== CUSTOMER MENU FUNCTION ==========
void customerMenu()
{
    system("cls");
    while (true)
    {
        cout << "==============================" << endl;
        cout << "   Welcome to Customers Menu   " << endl;
        cout << "==============================" << endl;
        cout << "1. View all Cars" << endl;
        cout << "2. Budget Search" << endl;
        cout << "3. Name Search" << endl;
        cout << "4. Book your Dream Car" << endl;
        cout << "5. Compare two Cars" << endl;
        cout << "6. Price Analysis" << endl;
        cout << "7. Test Drive Booking" << endl;
        cout << "8. Give Your FeedBack" << endl;
        cout << "9. Exit to Main" << endl;
        cout << "Select the option: ";

        int userOption;
        cin >> userOption;

        if (userOption == 1)
            viewAllCars();
        else if (userOption == 2)
            budgetSearch();
        else if (userOption == 3)
            nameSearch();
        else if (userOption == 4)
            bookCar();
        else if (userOption == 5)
            compareCars();
        else if (userOption == 6)
            priceAnalysis();
        else if (userOption == 7)
            bookTestDrive();
        else if (userOption == 8)
            giveFeedback();
        else if (userOption == 9)
            break;
        else
            cout << "Wrong Option Entered" << endl;

        cout << "Press any key to continue..." << endl;
        getch();
        system("cls");
    }
}

// ========== FEATURE FUNCTIONS ==========
void mainHeader()
{
    cout << "====================================================================" << endl;
    cout << "                        BMW SHOWROOM SCREEN                         " << endl;
    cout << "                    The Ultimate Driving Machine                    " << endl;
    cout << "====================================================================" << endl;
}

void addCar()
{
    cout << "Enter new Model Car name: " << endl;
    string newName;
    cin.ignore();
    getline(cin, newName);
    cout << "Enter the Price of Car: $" << endl;
    int newPrice;
    cin >> newPrice;
    cout << "Enter the Stock Number of this Car: " << endl;
    int newStock;
    cin >> newStock;

    nameArray[carCount] = newName;
    priceArray[carCount] = newPrice;
    stockArray[carCount] = newStock;
    carCount++;

    cout << "New data has been saved" << endl;
}

void viewAllCars()
{
    for (int i = 0; i < carCount; i++)
    {
        cout << i + 1 << "." << endl;
        cout << "Car Model Name:\t  " << nameArray[i] << endl;
        cout << "Car Price:\t  $" << priceArray[i] << endl;
        cout << "Stock Available:\t  " << stockArray[i] << endl;
        cout << endl;
    }
}

void updatePrice()
{
    cout << "Enter the car name you want to update price of: " << endl;
    string name;
    cin.ignore();
    getline(cin, name);
    bool found = false;
    int foundindex = -1;

    for (int i = 0; i < carCount; i++)
    {
        if (nameArray[i] == name)
        {
            foundindex = i;
            found = true;
        }
    }

    if (found == true)
    {
        cout << "OLD RECORD" << endl;
        cout << "Car Model Name: " << nameArray[foundindex] << endl;
        cout << "Car Price: $" << priceArray[foundindex] << endl;
        cout << "Enter the Updated Price of Car: $" << endl;
        int newPrice;
        cin >> newPrice;
        priceArray[foundindex] = newPrice;
        cout << "Price updated successfully!" << endl;
    }
    else
    {
        cout << "Record not Found" << endl;
    }
}

void updateStock()
{
    cout << "Enter the car name you want to update stock of: " << endl;
    string name;
    cin.ignore();
    getline(cin, name);
    bool found = false;
    int foundindex = -1;

    for (int i = 0; i < carCount; i++)
    {
        if (nameArray[i] == name)
        {
            foundindex = i;
            found = true;
        }
    }

    if (found == true)
    {
        cout << "OLD RECORD" << endl;
        cout << "Car Model Name: " << nameArray[foundindex] << endl;
        cout << "Stock Available: " << stockArray[foundindex] << endl;
        cout << "Enter the Updated Stock Number: " << endl;
        int newStock;
        cin >> newStock;
        stockArray[foundindex] = newStock;
        cout << "Stock updated successfully!" << endl;
    }
    else
    {
        cout << "Record not Found" << endl;
    }
}

void deleteCar()
{
    for (int i = 0; i < carCount; i++)
    {
        cout << (i + 1) << ". " << nameArray[i] << endl;
    }

    int del;
    cout << "Select car number to delete: ";
    cin >> del;
    del--;

    if (del >= 0 && del < carCount)
    {
        for (int i = del; i < carCount - 1; i++)
        {
            priceArray[i] = priceArray[i + 1];
            stockArray[i] = stockArray[i + 1];
            nameArray[i] = nameArray[i + 1];
        }
        carCount--;
        cout << "Car deleted successfully!" << endl;
    }
    else
    {
        cout << "Invalid selection!" << endl;
    }
}

void lowStockAlert()
{
    cout << "STOCK ALERT" << endl;
    for (int i = 0; i < carCount; i++)
    {
        if (stockArray[i] < 4 && stockArray[i] > 0)
        {
            cout << "Car: " << nameArray[i] << endl;
            cout << "Only " << stockArray[i] << " units left! Order more soon!" << endl;
        }
        if (stockArray[i] == 0)
        {
            cout << "Car: " << nameArray[i] << endl;
            cout << "OUT OF STOCK! Need urgent restock!" << endl;
        }
    }
}

void salesReport()
{
    int totalRevenue = 0;
    cout << "SALES REPORT" << endl;
    cout << "Sr.no.\tCustomer Name\tCar Purchased\tAmount" << endl;

    for (int i = 0; i < saleCount; i++)
    {
        cout << i + 1 << ".\t" << customers[i] << "\t\t" << soldCars[i] << "\t\t$" << soldAmount[i] << endl;
        totalRevenue = totalRevenue + soldAmount[i];
    }

    cout << "SUMMARY:" << endl;
    cout << "Total Cars Sold: " << saleCount << endl;
    cout << "Total Revenue: $" << totalRevenue << endl;
    cout << "Average Sale: $" << (float)totalRevenue / saleCount << endl;
}

void viewTestDrives()
{
    cout << "TEST DRIVE BOOKINGS" << endl;
    cout << "Total Bookings: " << testDriveCount << endl;

    for (int i = 0; i < testDriveCount; i++)
    {
        cout << "Booking #" << i + 1 << endl;
        cout << "Customer: " << testDriveCustomers[i] << endl;
        cout << "Phone: " << testDrivePhone[i] << endl;
        cout << "Car: " << testDriveCar[i] << endl;
        cout << "Date: " << testDriveDate[i] << endl;
    }
}

void profitCalculator()
{
    int totalRevenue = 0, totalCost = 0, totalProfit = 0;
    int costAmount[total], profitPerCar[total];

    for (int i = 0; i < saleCount; i++)
    {
        costAmount[i] = (soldAmount[i] * 10 / 100) + soldAmount[i];
        totalCost = totalCost + costAmount[i];
        profitPerCar[i] = costAmount[i] - soldAmount[i];
        totalProfit = totalProfit + profitPerCar[i];
        totalRevenue = totalRevenue + soldAmount[i];
    }

    float profitMargin = (float)totalProfit / totalRevenue * 100;

    cout << "PROFIT CALCULATOR" << endl;
    for (int i = 0; i < saleCount; i++)
    {
        cout << i + 1 << ".\t" << soldCars[i] << "\t$" << costAmount[i] << "\t$" << soldAmount[i] << "\t$" << profitPerCar[i] << endl;
    }
    cout << "Total Revenue: $" << totalRevenue << endl;
    cout << "Total Cost: $" << totalCost << endl;
    cout << "Total Profit: $" << totalProfit << endl;
    cout << "Profit Margin: " << profitMargin << "%" << endl;
}

void viewFeedback()
{
    float totalRating = 0;
    cout << "CUSTOMER FEEDBACK" << endl;
    cout << "Total Reviews: " << feedbackCount << endl;

    for (int i = 0; i < feedbackCount; i++)
    {
        cout << "REVIEW #" << i + 1 << endl;
        cout << "Customer: " << feedbackCustomer[i] << endl;
        cout << "Car: " << feedbackCar[i] << endl;
        cout << "Rating: " << feedbackRating[i] << "/5" << endl;
        cout << "Comment: " << feedbackComment[i] << endl;
        totalRating = totalRating + feedbackRating[i];
    }

    float averageRating = totalRating / feedbackCount;
    cout << "Average Rating: " << averageRating << "/5" << endl;

    if (averageRating >= 4.5)
        cout << "EXCELLENT! Customers love BMW!" << endl;
    else if (averageRating >= 3.5)
        cout << "GOOD! Customers are satisfied!" << endl;
    else if (averageRating >= 2.5)
        cout << "AVERAGE! Need some improvements." << endl;
    else
        cout << "POOR! Immediate action needed!" << endl;
}

void budgetSearch()
{
    cout << "What is your Budget: $";
    int budget;
    cin >> budget;
    int found = 0;

    for (int i = 0; i < carCount; i++)
    {
        if (budget >= priceArray[i])
        {
            cout << "Car: " << nameArray[i] << " - $" << priceArray[i] << " (Stock: " << stockArray[i] << ")" << endl;
            found++;
        }
    }
    if (found == 0)
        cout << "SORRY! No car under this budget!" << endl;
}

void nameSearch()
{
    cout << "Enter Car Model Name: ";
    string name;
    cin.ignore();
    getline(cin, name);

    for (int i = 0; i < carCount; i++)
    {
        if (name == nameArray[i])
        {
            cout << "Car: " << nameArray[i] << " - $" << priceArray[i] << " (Stock: " << stockArray[i] << ")" << endl;
        }
    }
}

void bookCar()
{
    cout << "BOOK YOUR BMW" << endl;

    for (int i = 0; i < carCount; i++)
    {
        if (stockArray[i] > 0)
        {
            cout << (i + 1) << ". " << nameArray[i] << " - $" << priceArray[i] << endl;
        }
    }

    int carChoice;
    cout << "Select car number: ";
    cin >> carChoice;
    carChoice--;

    if (carChoice >= 0 && carChoice < carCount && stockArray[carChoice] > 0)
    {
        string customerName, customerPhone;
        cout << "Enter your name: ";
        cin.ignore();
        getline(cin, customerName);
        cout << "Enter your phone: ";
        getline(cin, customerPhone);

        double carPrice = priceArray[carChoice];
        double tax = carPrice * 0.05;
        double total = carPrice + tax;

        cout << "Booking Summary" << endl;
        cout << "Customer: " << customerName << endl;
        cout << "Car: " << nameArray[carChoice] << endl;
        cout << "Total: $" << total << endl;

        char confirm;
        cout << "Confirm booking? (y/n): ";
        cin >> confirm;

        if (confirm == 'y' || confirm == 'Y')
        {
            stockArray[carChoice]--;
            customers[saleCount] = customerName;
            soldCars[saleCount] = nameArray[carChoice];
            soldAmount[saleCount] = total;
            saleCount++;
            cout << "BOOKING CONFIRMED!" << endl;
        }
    }
}

void compareCars()
{
    cout << "COMPARE TWO BMWs" << endl;

    for (int i = 0; i < carCount; i++)
    {
        cout << (i + 1) << ". " << nameArray[i] << " - $" << priceArray[i] << endl;
    }

    int car1, car2;
    cout << "Select first car: ";
    cin >> car1;
    cout << "Select second car: ";
    cin >> car2;
    car1--;
    car2--;

    if (car1 >= 0 && car1 < carCount && car2 >= 0 && car2 < carCount && car1 != car2)
    {
        cout << "Car 1: " << nameArray[car1] << " - $" << priceArray[car1] << endl;
        cout << "Car 2: " << nameArray[car2] << " - $" << priceArray[car2] << endl;

        if (priceArray[car1] < priceArray[car2])
            cout << nameArray[car1] << " is cheaper!" << endl;
        else if (priceArray[car2] < priceArray[car1])
            cout << nameArray[car2] << " is cheaper!" << endl;
        else
            cout << "Both cars have same price!" << endl;
    }
}

void priceAnalysis()
{
    cout << "SORT BMWs BY PRICE" << endl;
    cout << "1. Cheapest First" << endl;
    cout << "2. Expensive First" << endl;

    int sortType;
    cin >> sortType;

    if (sortType == 1 || sortType == 2)
    {
        string tempModels[total];
        double tempPrices[total];

        for (int i = 0; i < carCount; i++)
        {
            tempModels[i] = nameArray[i];
            tempPrices[i] = priceArray[i];
        }

        for (int i = 0; i < carCount - 1; i++)
        {
            for (int j = 0; j < carCount - i - 1; j++)
            {
                bool needSwap = false;
                if (sortType == 1 && tempPrices[j] > tempPrices[j + 1])
                    needSwap = true;
                if (sortType == 2 && tempPrices[j] < tempPrices[j + 1])
                    needSwap = true;

                if (needSwap)
                {
                    double tempPrice = tempPrices[j];
                    tempPrices[j] = tempPrices[j + 1];
                    tempPrices[j + 1] = tempPrice;

                    string tempModel = tempModels[j];
                    tempModels[j] = tempModels[j + 1];
                    tempModels[j + 1] = tempModel;
                }
            }
        }

        for (int i = 0; i < carCount; i++)
        {
            cout << (i + 1) << ". " << tempModels[i] << " - $" << tempPrices[i] << endl;
        }
    }
}

void bookTestDrive()
{
    cout << "BOOK A TEST DRIVE" << endl;

    for (int i = 0; i < carCount; i++)
    {
        if (stockArray[i] != 0)
        {
            cout << (i + 1) << ". " << nameArray[i] << endl;
        }
    }

    cout << "Enter your name: ";
    cin.ignore();
    getline(cin, testDriveCustomers[testDriveCount]);
    cout << "Enter car name: ";
    getline(cin, testDriveCar[testDriveCount]);
    cout << "Enter phone number: ";
    getline(cin, testDrivePhone[testDriveCount]);
    cout << "Enter preferred date (DD/MM/YY): ";
    getline(cin, testDriveDate[testDriveCount]);

    cout << "TEST DRIVE CONFIRMED!" << endl;
    cout << "Customer: " << testDriveCustomers[testDriveCount] << endl;
    cout << "Car: " << testDriveCar[testDriveCount] << endl;
    cout << "Date: " << testDriveDate[testDriveCount] << endl;

    testDriveCount++;
}

void giveFeedback()
{
    cout << "Enter your name: ";
    cin.ignore();
    getline(cin, feedbackCustomer[feedbackCount]);
    cout << "Enter car name: ";
    getline(cin, feedbackCar[feedbackCount]);

    cout << "Rate your experience (1-5): ";
    cin >> feedbackRating[feedbackCount];

    cout << "Share your comments: ";
    cin.ignore();
    getline(cin, feedbackComment[feedbackCount]);

    cout << "THANK YOU FOR YOUR FEEDBACK!" << endl;
    feedbackCount++;
}