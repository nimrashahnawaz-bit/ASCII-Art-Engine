#include <iostream>
#include <conio.h>
#include <string>
using namespace std;
main()
{
    int carCount = 10;
    int total = 100;

    // data structures
    string nameArray[total] = {"BMW i3", "BMW X2", "BMW XZ", "BMW X3", "BMW X5", "BMW X7", "BMW M3", "BMW M4", "BMW iX", "BMW i7"};
    int priceArray[total] = {42000, 54000, 93000, 46000, 65000, 77000, 72000, 74000, 52000, 87000};
    int stockArray[total] = {4, 5, 4, 6, 7, 2, 5, 6, 3, 1};
    string customers[total] = {"Rija Ijaz", "Tashifa   ", "Hamza Ali", "Hira Malik"};
    string soldCars[total] = {"BMW M3", "BMW i7", "BMW X5", "BMW M4"};
    int soldAmount[total] = {72000, 87000, 65000, 74000};
    int costAmount[total];
    int profitPerCar[total];
    string feedbackCustomer[total] = {"Rija Ijaz", "Tashifa   ", "Hamza Ali", "Hira Malik"};
    string feedbackCar[total] = {"BMW M3", "BMW i7", "BMW i4", "BMW M4"};
    int feedbackRating[total] = {5, 5, 4, 4};
    string feedbackComment[total] = {"Amazing car! Very smooth drive and great comfort. Best BMW I have ever driven!", "Incredible performance! Best car ever!",
                                     "Great electric car. Charging could be faster.", "Amazing car! Very smooth drive!"};
    string testDriveCustomers[total] = {"Nimra Shahnawaz", "Wali Muhammad", "Donald Trump"};
    string testDriveCar[total] = {"BMW 7 Series", "BMW X7", "BMW 3 Series"};
    string testDriveDate[total] = {"07/08/2026", "04/09/2026", "24/04/2026"};
    string testDrivePhone[total] = {"+92 333 4445678", "+92 321 0989087", "+92 332 654123"};
    int testDriveCount = 3;
    int saleCount = 4;
    int feedbackCount = 3;
    int totalRevenue = 0;
    float average;
    int totalCost = 0;
    float totalProfit = 0;
    float profitMargin;
    float totalRating = 0;
    while (true)
    {
        system("cls");
        cout << "====================================================================" << endl;
        cout << "                        BMW SHOWROOM SCREEN                         " << endl;
        cout << "                    The Ultimate Driving Machine                    " << endl;
        cout << "====================================================================" << endl;
        cout << endl;
        cout << "User Options: " << endl;
        cout << "1. Sales Team" << endl;
        cout << "2. Customer" << endl;
        cout << "3. EXIT" << endl;
        cout << "Choice one of the above options" << endl;

        int option;
        cin >> option;

        if (option == 1)
        {
            // write code for sale team
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
                        cout << "8. View Test Drvie Bookings" << endl;
                        cout << "9. Profit Calculator" << endl;
                        cout << "10. View FeedBack" << endl;
                        cout << "11. Exit to Main" << endl;
                        cout << "Select the option" << endl;

                        int adminOption;
                        cin >> adminOption;
                        if (adminOption == 1)
                        {
                            // add new car
                            cout << "Enter new Model Car name: " << endl;
                            string newName;
                            cin.ignore();
                            getline(cin, newName);
                            cout << "Enter the Price of Car: " << endl;
                            cout << "$ ";
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

                            getch();
                            cout << "Press any key to continue...." << endl;
                        }

                        else if (adminOption == 2)
                        {
                            // view all cars record
                            for (int i = 0; i < carCount; i = i + 1)
                            {
                                cout << i + 1. << endl;
                                cout << "Car Model Name:\t  " << nameArray[i] << endl;
                                cout << "Car Price:\t  $" << priceArray[i] << endl;
                                cout << "Stock Available:\t  " << stockArray[i] << endl;
                            }
                        }

                        else if (adminOption == 3)
                        {
                            // update car record
                            cout << "Enter the car name you want to update price of: " << endl;
                            string name;
                            cin.ignore();
                            getline(cin, name);
                            bool found = false;
                            int foundindex = -1;
                            for (int i = 0; i < carCount; i = i + 1)
                            {
                                if (nameArray[i] == name)
                                {
                                    foundindex = i;
                                    found = true;
                                }
                            }
                            if (found == true)
                            {
                                cout << "==================================================================================" << endl;
                                cout << "                                   OLD RECORD                                     " << endl;
                                cout << "==================================================================================" << endl;
                                cout << endl;
                                cout << "Car Model Name:\t  " << nameArray[foundindex] << endl;
                                cout << "Car Price:\t  $" << priceArray[foundindex] << endl;
                                cout << endl;
                                cout << "Enter the Updated Price of Car: " << endl;
                                cout << "$ ";
                                int newPrice;
                                cin >> newPrice;
                                priceArray[foundindex] == newPrice;
                            }
                            else
                            {
                                cout << "Record not Found" << endl;
                            }
                        }

                        else if (adminOption == 4)
                        {
                            // update car record
                            cout << "Enter the car name you want to update stock of: " << endl;
                            string name;
                            cin.ignore();
                            getline(cin, name);
                            bool found = false;
                            int foundindex = -1;
                            for (int i = 0; i < carCount; i = i + 1)
                            {
                                if (nameArray[i] == name)
                                {
                                    foundindex = i;
                                    found = true;
                                }
                            }
                            if (found == true)
                            {
                                cout << "==================================================================================" << endl;
                                cout << "                                   OLD RECORD                                     " << endl;
                                cout << "==================================================================================" << endl;
                                cout << endl;
                                cout << "Car Model Name:\t  " << nameArray[foundindex] << endl;
                                cout << "Stock Available:\t  " << stockArray[foundindex] << endl;
                                cout << endl;
                                cout << "Enter the Updated Stock Number of Car: " << endl;
                                int newStock;
                                cin >> newStock;

                                stockArray[foundindex] == newStock;
                            }
                            else
                            {
                                cout << "Record not Found" << endl;
                            }
                        }

                        else if (adminOption == 5)
                        {
                            // del car record
                            //  Show all cars
                            for (int i = 0; i < carCount; i++)
                            {
                                cout << (i + 1) << ". " << nameArray[i] << endl;
                            }

                            int del;
                            cout << "Select car name to delete: ";
                            cin >> del;
                            del--;

                            if (del >= 0 && del < carCount)
                            {
                                for (int i = del; i < carCount - 1; i++)
                                {
                                    priceArray[i] = priceArray[i + 1];
                                    stockArray[i] = stockArray[i + 1];

                                    int j = 0;
                                    while (nameArray[i + 1][j] != '\0')
                                    {
                                        nameArray[i][j] = nameArray[i + 1][j];
                                        j++;
                                    }
                                    nameArray[i][j] = '\0';
                                }
                                carCount--;
                                cout << " Car deleted successfully!" << endl;
                            }
                            else
                            {
                                cout << " Invalid selection!" << endl;
                            }
                        }

                        else if (adminOption == 6)
                        {
                            // stock alert
                            cout << "==================================================================================" << endl;
                            cout << "                                    STOCK ALERT                                    " << endl;
                            cout << "==================================================================================" << endl;
                            for (int i = 0; i < carCount; i++)
                            {
                                if (stockArray[i] < 4 && stockArray[i] > 0)
                                {
                                    cout << "Car Model Name:\t  " << nameArray[i] << endl;
                                    cout << "Only " << stockArray[i] << " units left!" << endl;
                                    cout << "Order more soon!" << endl;
                                }
                                if (stockArray[i] == 0)
                                {
                                    cout << "Car Model Name:\t  " << nameArray[i] << endl;
                                    cout << "OUT OF STOCK! " << endl;
                                    cout << "Need Urgent restock" << endl;
                                }
                            }
                        }
                        else if (adminOption == 7)
                        {
                            // sales report
                            cout << "==================================================================================" << endl;
                            cout << "                                    SALES REPORT                                   " << endl;
                            cout << "==================================================================================" << endl;
                            cout << endl;
                            cout << "Sr.no.\t    Customer Name\t    Car Purchased\t    Amount" << endl;
                            cout << "----------------------------------------------------------------------------------" << endl;
                            for (int i = 0; i < saleCount; i++)
                            {
                                cout << i + 1 << ".\t    " << customers[i] << "\t\t    " << soldCars[i] << "\t\t    $" << soldAmount[i] << endl;
                                totalRevenue = totalRevenue + soldAmount[i];
                            }
                            cout << "-----------------------------------------------------------------------------------" << endl;
                            average = totalRevenue / saleCount;
                            cout << endl;
                            cout << "SUMMARY:" << endl;
                            cout << "Total Cars Sold: " << saleCount << endl;
                            cout << "Total Revenue: $" << totalRevenue << endl;
                            cout << "Average Sale: $" << average << endl;
                        }
                        else if (adminOption == 8)
                        {
                            // view test drive bookings
                            cout << "====================================================================" << endl;
                            cout << "                       TEST DRIVE BOOKINGS                         " << endl;
                            cout << "====================================================================" << endl;
                            cout << "Total Bookings: " << testDriveCount << endl;
                            cout << "-------------------------------------------------------------------" << endl;
                            for (int i = 0; i < 3; i++)
                            {
                                cout << "Booking #" << i + 1 << endl;
                                cout << "Customer: " << testDriveCustomers[i] << endl;
                                cout << "Phone: " << testDrivePhone[i] << endl;
                                cout << "Car: " << testDriveCar[i] << endl;
                                cout << "Date: " << testDriveDate[i] << endl;
                                cout << "-------------------------------------------------------------------" << endl;
                            }
                        }
                        else if (adminOption == 9)
                        {
                            // profit calculator
                            for (int i = 0; i < saleCount; i++)
                            {
                                costAmount[i] = (soldAmount[i] * 10 / 100) + soldAmount[i];
                                totalCost = totalCost + costAmount[i];
                                profitPerCar[i] = costAmount[i] - soldAmount[i];
                                totalProfit = totalProfit + profitPerCar[i];
                                totalRevenue = totalRevenue + soldAmount[i];
                            }
                            profitMargin = (totalProfit / totalRevenue) * 100;
                            cout << "============================================================================" << endl;
                            cout << "                               PROFIT CALCULATOR                            " << endl;
                            cout << "============================================================================" << endl;
                            cout << "Sr.no.\t    Car Model\t    Cost Price\t    Sell Price\t         Profit " << endl;
                            cout << "----------------------------------------------------------------------------" << endl;
                            for (int i = 0; i < saleCount; i++)
                            {
                                cout << i + 1 << ".\t    " << soldCars[i] << "\t    $" << costAmount[i] << "\t    $" << soldAmount[i] << "\t\t $" << profitPerCar[i] << endl;
                            }
                            cout << "-----------------------------------------------------------------------------" << endl;
                            cout << "SUMMARY" << endl;
                            cout << "Total Revenue: $" << totalRevenue << endl;
                            cout << "Total Cost: $" << totalCost << endl;
                            cout << "Total Profit: $" << totalProfit << endl;
                            cout << "Profit Margin: " << profitMargin << "%" << endl;
                        }
                        else if (adminOption == 10)
                        {
                            // feedback review
                            cout << "===================================================================" << endl;
                            cout << "                          CUSTOMER FEEDBACK                        " << endl;
                            cout << "===================================================================" << endl;
                            cout << "Total Reviews :" << feedbackCount << endl;
                            cout << "----------------------------------------" << endl;
                            for (int i = 0; i < feedbackCount; i++)
                            {
                                cout << "\n REVIEW #" << (i + 1) << endl;
                                cout << "    Customer: " << feedbackCustomer[i] << endl;
                                cout << "    Car: " << feedbackCar[i] << endl;
                                cout << "    Rating: " << feedbackRating[i] << "/5" << endl;
                                cout << "    Comment: " << feedbackComment[i] << endl;
                                cout << "----------------------------------------" << endl;

                                totalRating = totalRating + feedbackRating[i];
                            }

                            float averageRating = totalRating / feedbackCount;

                            cout << "\nFEEDBACK SUMMARY:" << endl;
                            cout << "   Total Reviews: " << feedbackCount << endl;
                            cout << "   Average Rating: " << averageRating << "/5" << endl;
                            if (averageRating >= 4.5)
                            {
                                cout << "   EXCELLENT! Customers love BMW!" << endl;
                                cout << "   Keep up the great service!" << endl;
                            }
                            else if (averageRating >= 3.5)
                            {
                                cout << "   GOOD! Customers are satisfied!" << endl;
                                cout << "   Keep improving!" << endl;
                            }
                            else if (averageRating >= 2.5)
                            {
                                cout << "   AVERAGE! Need some improvements." << endl;
                                cout << "   Focus on customer concerns." << endl;
                            }
                            else
                            {
                                cout << "   POOR! Immediate action needed!" << endl;
                                cout << "   Review all negative feedback carefully." << endl;
                            }
                        }

                        else if (adminOption == 11)
                        {
                            // exit
                            break;
                        }
                        else
                        {
                            cout << "Wrong Option entered" << endl;
                        }
                        cout << "Press any key to countinue..." << endl;
                        getch();
                    }
                    cout << "Press any key to countinue...." << endl;
                    getch();
                    break;
                }
                else
                {
                    cout << "INVALID Password" << endl;
                }
                cout << "Press anykey to continue... ";
                getch();
            }
        }
        else if (option == 2)
        {
            system("cls");
            // write code for customer
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
                cout << "Select the option" << endl;
                int userOption;
                cin >> userOption;

                if (userOption == 1)
                { // view all cars
                    for (int i = 0; i < carCount; i++)
                    {
                        if (stockArray[i] != 0)
                        {
                            cout << i + 1. << endl;
                            cout << "Car Model Name:\t  " << nameArray[i] << endl;
                            cout << "Car Price:\t  $" << priceArray[i] << endl;
                            cout << "Stock Available:\t" << stockArray[i] << endl;
                        }
                    }
                }

                else if (userOption == 2)
                {
                    // budget search
                    cout << "What is your Budget: $";
                    int budget;
                    cin >> budget;
                    int found = 0;
                    for (int i = 0; i < carCount; i++)
                    {
                        if (budget >= priceArray[i])
                        {
                            cout << "Car Model Name:\t  " << nameArray[i] << endl;
                            cout << "Car Price:\t  $" << priceArray[i] << endl;
                            cout << "Stock Available:\t  " << stockArray[i] << endl;
                            found++;
                        }
                    }
                    if (found == 0)
                    {
                        cout << "SORRY! We cannot find a Car under this Budget....." << endl;
                    }
                }

                else if (userOption == 3)
                {
                    // name search
                    cout << "Enter the Car Model Name you want to Search:  ";
                    string name;
                    cin.ignore();
                    getline(cin, name);
                    for (int i = 0; i < carCount; i++)
                    {
                        if (name == nameArray[i])
                        {
                            cout << "Car Model Name:\t  " << nameArray[i] << endl;
                            cout << "Car Price:\t  $" << priceArray[i] << endl;
                            cout << "Stock Available:\t  " << stockArray[i] << endl;
                        }
                    }
                }
                else if (userOption == 4)
                { // BOOK BMW

                    cout << "\n========================================" << endl;
                    cout << "           BOOK YOUR BMW" << endl;
                    cout << "========================================" << endl;

                    // Show available cars
                    for (int i = 0; i < carCount; i++)
                    {
                        if (stockArray[i] > 0)
                        {
                            cout << (i + 1) << ". " << nameArray[i]
                                 << " - $" << priceArray[i] << endl;
                        }
                    }

                    int carChoice;
                    cout << "\nSelect car number: ";
                    cin >> carChoice;
                    carChoice--; // Convert to index

                    if (carChoice >= 0 && carChoice < carCount && stockArray[carChoice] > 0)
                    {

                        // Get customer details
                        string customerName;
                        string customerPhone;

                        cout << "Enter your name: ";
                        cin.ignore();
                        getline(cin, customerName);

                        cout << "Enter your phone number: ";
                        getline(cin, customerPhone);

                        double carPrice = priceArray[carChoice];
                        double tax = carPrice * 0.05;
                        double total = carPrice + tax;

                        cout << "\n========================================" << endl;
                        cout << "           BOOKING SUMMARY" << endl;
                        cout << "========================================" << endl;
                        cout << "Customer: " << customerName << endl;
                        cout << "Phone: " << customerPhone << endl;
                        cout << "Car: " << nameArray[carChoice] << endl;
                        cout << "Price: $" << carPrice << endl;
                        cout << "Tax (5%): $" << tax << endl;
                        cout << "Total: $" << total << endl;
                        cout << "========================================" << endl;

                        char confirm;
                        cout << "Confirm booking? (y/n): ";
                        cin >> confirm;

                        if (confirm == 'y' || confirm == 'Y')
                        {

                            // update stock
                            stockArray[carChoice]--;

                            // update customer history
                            customers[saleCount] = customerName;
                            soldCars[saleCount] = nameArray[carChoice];
                            soldAmount[saleCount] = total;

                            saleCount++;

                            cout << "\n========================================" << endl;
                            cout << "       BOOKING CONFIRMED! " << endl;
                            cout << "========================================" << endl;
                            cout << "Customer has been added to history!" << endl;
                            cout << "========================================" << endl;
                        }
                        else
                        {
                            cout << "Booking cancelled!" << endl;
                        }
                    }
                    else
                    {
                        cout << "\nInvalid selection or car out of stock!" << endl;
                    }
                }
                else if (userOption == 5)
                {
                    // compare two cars
                    cout << "\n=======================================" << endl;
                    cout << "             COMPARE TWO BMWs           " << endl;
                    cout << "========================================" << endl;

                    // Show cars
                    for (int i = 0; i < carCount; i++)
                    {
                        cout << (i + 1) << ". " << nameArray[i] << " - $" << priceArray[i] << endl;
                    }

                    int car1, car2;
                    cout << "\nSelect first car number: ";
                    cin >> car1;
                    cout << "Select second car number: ";
                    cin >> car2;

                    car1--;
                    car2--;

                    if (car1 >= 0 && car1 < carCount && car2 >= 0 && car2 < carCount && car1 != car2)
                    {
                        cout << "\n========================================" << endl;
                        cout << "               COMPARISON                " << endl;
                        cout << "========================================" << endl;
                        cout << "Car 1: " << nameArray[car1] << " - $" << priceArray[car1] << endl;
                        cout << "Car 2: " << nameArray[car2] << " - $" << priceArray[car2] << endl;
                        cout << "================================" << endl;

                        if (priceArray[car1] < priceArray[car2])
                        {
                            cout << nameArray[car1] << " is cheaper!" << endl;
                        }
                        else if (priceArray[car2] < priceArray[car1]) 
                        {
                            cout << nameArray[car2] << " is cheaper!" << endl;
                        }

                        if (priceArray[car1] < priceArray[car2])
                        {
                            double difference = priceArray[car1] - priceArray[car2];
                            cout << "   ✓ " << nameArray[car1] << " is CHEAPER by $" << difference << endl;
                            cout << "   ✗ " << nameArray[car2] << " is EXPENSIVE by $" << difference << endl;
                        }
                        else if (priceArray[car2] < priceArray[car1])
                        {
                            double difference = priceArray[car1] - priceArray[car2];
                            cout << nameArray[car2] << " is CHEAPER by $" << difference << endl;
                            cout << nameArray[car1] << " is EXPENSIVE by $" << difference << endl;
                        }
                        else
                        {
                            cout << "   Both cars have the SAME PRICE!" << endl;
                        }
                    }
                    else
                    {
                        cout << "Invalid selection or same car selected!" << endl;
                    }
                }
                else if (userOption == 6)
                {
                    // price analysis

                    cout << "\n========================================" << endl;
                    cout << "           SORT BMWs BY PRICE           " << endl;
                    cout << "========================================" << endl;
                    cout << "1. Cheapest First (Low to High)" << endl;
                    cout << "2. Expensive First (High to Low)" << endl;
                    cout << "========================================" << endl;
                    cout << "Enter your choice: ";

                    int sortType;
                    cin >> sortType;

                    if (sortType == 1 || sortType == 2)
                    {

                        // Copy to temp arrays
                        string tempModels[total];
                        double tempPrices[total];

                        for (int i = 0; i < carCount; i++)
                        {
                            tempModels[i] = nameArray[i];
                            tempPrices[i] = priceArray[i];
                        }

                        // Bubble Sort
                        for (int i = 0; i < carCount - 1; i++)
                        {
                            for (int j = 0; j < carCount - i - 1; j++)
                            {

                                bool needSwap = false;

                                if (sortType == 1)
                                {
                                    // Cheapest First
                                    if (tempPrices[j] > tempPrices[j + 1])
                                    {
                                        needSwap = true;
                                    }
                                }
                                else if (sortType == 2)
                                {
                                    // Expensive First
                                    if (tempPrices[j] < tempPrices[j + 1])
                                    {
                                        needSwap = true;
                                    }
                                }

                                if (needSwap)
                                {
                                    // Swap prices
                                    double tempPrice = tempPrices[j];
                                    tempPrices[j] = tempPrices[j + 1];
                                    tempPrices[j + 1] = tempPrice;

                                    // Swap model names
                                    string tempModel = tempModels[j];
                                    tempModels[j] = tempModels[j + 1];
                                    tempModels[j + 1] = tempModel;
                                }
                            }
                        }

                        // Display Result
                        cout << "\n========================================" << endl;
                        if (sortType == 1)
                        {
                            cout << "   BMWs (Cheapest to Most Expensive)" << endl;
                        }
                        else
                        {
                            cout << "   BMWs (Most Expensive to Cheapest)" << endl;
                        }
                        cout << "========================================" << endl;

                        for (int i = 0; i < carCount; i++)
                        {
                            cout << (i + 1) << ". " << tempModels[i]
                                 << " - $" << tempPrices[i] << endl;
                        }
                    }
                    else
                    {
                        cout << "\n Invalid choice! Please select 1 or 2." << endl;
                    }
                }

                else if (userOption == 7)
                {
                    // book test drive
                    cout << "================================================" << endl;
                    cout << "                BOOK A TEST DRIVE               " << endl;
                    cout << "================================================" << endl;
                    cout << "\nAvailable Cars for Test Driving: " << endl;
                    cout << "------------------------------------------------" << endl;
                    for (int i = 0; i < carCount; i++)
                    {
                        if (stockArray[i] != 0)
                        {
                            cout << i + 1. << endl;
                            cout << "Car Model Name:\t  " << nameArray[i] << endl;
                        }
                    }
                    cout << "-------------------------------------------------" << endl;
                    cout << "Enter your name: " << endl;
                    cin.ignore();
                    getline(cin, testDriveCustomers[testDriveCount]);
                    cout << "Enter the car name for Test Drive:" << endl;
                    getline(cin, testDriveCar[testDriveCount]);
                    cout << "Enter your Phone number: " << endl;
                    getline(cin, testDrivePhone[testDriveCount]);
                    cout << "Enter Preferred Date (DD/MM/YY): " << endl;
                    getline(cin, testDriveDate[testDriveCount]);
                    cout << "================================================" << endl;
                    cout << "               TEST DRIVE CONFIRMED           " << endl;
                    cout << "================================================" << endl;
                    cout << "Customer: " << testDriveCustomers[testDriveCount] << endl;
                    cout << "Car: " << testDriveCar[testDriveCount] << endl;
                    cout << "Date: " << testDriveDate[testDriveCount] << endl;
                    cout << "Phone: " << testDrivePhone[testDriveCount] << endl;
                    cout << "=================================================" << endl;
                    cout << "Location: BMW Showroom, 123 Luxuary Avenue" << endl;
                    cout << "Please bring your valid driving lisence!" << endl;

                    testDriveCount++;
                }

                else if (userOption == 8)
                {
                    // feedback
                    cout << "Enter your name :";
                    cin.ignore();
                    getline(cin, feedbackCustomer[feedbackCount]);
                    cout << "Enter the Car name you are reviewing :";
                    getline(cin, feedbackCar[feedbackCount]);

                    cout << "\nRate your experience (1-5 stars):" << endl;
                    cout << "   1 - Poor" << endl;
                    cout << "   2 - Average" << endl;
                    cout << "   3 - Good" << endl;
                    cout << "   4 - Very Good" << endl;
                    cout << "   5 - Excellent" << endl;
                    cout << "Your rating: ";
                    cin >> feedbackRating[feedbackCount];

                    cout << "Share your Commments: ";
                    cin.ignore();
                    getline(cin, feedbackComment[feedbackCount]);

                    cout << "THANKS FOR YOUR FEEDBACK...." << endl;
                    feedbackCount++;
                }
                else if (userOption == 9)
                {
                    // exit
                    break;
                }
                else
                {
                    cout << "Wrong Option Entered" << endl;
                }
                cout << "Press any key to countinue..." << endl;
                getch();
            }
            cout << "Press any key to countinue...." << endl;
            getch();
        }
        else if (option == 3)
        {
            break;
        }
        else
        {
            cout << "You entered wrong option" << endl;
        }

    } // end of main loop
    cout << endl;
    cout << " THANK YOU FOR USING OUR SYSTEM!" << endl;
    cout << "BMW: The Ultimate Driving Machine " << endl;
}