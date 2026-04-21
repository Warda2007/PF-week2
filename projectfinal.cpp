#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int choice;

    string carName[5] = {"Civic", "Corolla", "Mehran", "City", "Alto"};
    int carPrice[5] = {50000, 45000, 20000, 48000, 25000};
    int carAvailable[5] = {1, 1, 1, 1, 1};

    string user1Cars[5];
    string user2Cars[5];

    int user1Count = 0;
    int user2Count = 0;

    string history[50];
    int historyCount = 0;

    int currentUser;

    //  ADMIN
    string adminUser = "admin";
    string adminPass = "123";

    while (true)
    {
        system("cls");

        cout << "===== CAR RENTAL SYSTEM =====\n";
        cout << "1. User 1\n";
        cout << "2. User 2\n";
        cout << "3. Exit\n";
        cout << "4. Admin\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 3)
        {
            cout << "\nProgram ended. Goodbye!\n";
            getch();
            break;
        }

        // ADMIN
        if (choice == 4)
        {
            string u, p;
            cout << "Enter username: ";
            cin >> u;
            cout << "Enter password: ";
            cin >> p;

            if (u == adminUser && p == adminPass)
            
        
            
            {
                int adminChoice;

                while (true)
                {
                    system("cls");
                    cout << "\n===== ADMIN PANEL =====\n";
                    cout << "1. View All Cars\n";
                    cout << "2. Add Car\n";
                    cout << "3. Remove Car\n";
                    cout << "4. View User Cars\n";
                    cout << "5. View History\n";
                    cout << "6. Reset System\n";
                    cout << "7. Logout\n";
                    cout << "Enter: ";
                    cin >> adminChoice;

                    // 1 VIEW ALL CARS
                    if (adminChoice == 1)
                    {
                        for (int i = 0; i < 5; i++)
                        {
                            cout << i << " " << carName[i] << " "
                                 << carPrice[i] << " "
                                 << (carAvailable[i] ? "Available" : "Rented") << endl;
                        }
                    }

                    // 2 ADD CAR
                    else if (adminChoice == 2)
                    {
                        int index;
                        cout << "Enter index (0-4): ";
                        cin >> index;

                        if (index >= 0 && index < 5)
                        {
                            cout << "Enter car name: ";
                            cin >> carName[index];
                            cout << "Enter price: ";
                            cin >> carPrice[index];

                            carAvailable[index] = 1;

                            history[historyCount] = "Admin added " + carName[index];
                            historyCount++;

                            cout << "Car added!";
                        }
                        else
                            cout << "Invalid index!";
                    }

                    // 3 REMOVE CAR
                    else if (adminChoice == 3)
                    {
                        int index;
                        cout << "Enter index to remove: ";
                        cin >> index;

                        if (index >= 0 && index < 5)
                        {
                            history[historyCount] = "Admin removed " + carName[index];
                            historyCount++;

                            carName[index] = "NULL";
                            carPrice[index] = 0;
                            carAvailable[index] = 0;

                            cout << "Car removed!";
                        }
                        else
                            cout << "Invalid index!";
                    }

                    // 4 VIEW USER CARS
                    else if (adminChoice == 4)
                    {
                        cout << "\nUser1 Cars:\n";
                        for (int i = 0; i < user1Count; i++)
                            cout << user1Cars[i] << endl;

                        cout << "\nUser2 Cars:\n";
                        for (int i = 0; i < user2Count; i++)
                            cout << user2Cars[i] << endl;
                    }

                    // 5 HISTORY
                    else if (adminChoice == 5)
                    {
                        cout << "\n--- HISTORY ---\n";
                        for (int i = 0; i < historyCount; i++)
                            cout << history[i] << endl;
                    }

                    // 6 RESET
                    else if (adminChoice == 6)
                    {
                        for (int i = 0; i < 5; i++)
                            carAvailable[i] = 1;

                        user1Count = 0;
                        user2Count = 0;
                        historyCount = 0;

                        cout << "System Reset Done!";
                    }

                    // 7 LOGOUT
                    else if (adminChoice == 7)
                    {
                        break;
                    }

                    else
                        cout << "Invalid";

                    cout << "\nPress any key...";
                    getch();
                }
            }
            else
            {
                cout << "Wrong Admin Credentials!";
                getch();
            }

            continue;
        }

        if (choice == 1)
            currentUser = 1;
        else if (choice == 2)
            currentUser = 2;
        else
        {
            cout << "Wrong choice";
            getch();
            continue;
        }

        int userChoice;

        while (true)
        {
            system("cls");

            cout << "--- MENU ---\n";
            cout << "1. View Cars\n";
            cout << "2. Rent Car\n";
            cout << "3. Return Car\n";
            cout << "4. My Cars\n";
            cout << "5. Swap Cars\n";
            cout << "6. Check Availability\n";
            cout << "7. Sort by Price\n";
            cout << "8. Count My Cars\n";
            cout << "9. Remove All Cars\n";
            cout << "10. History\n";
            cout << "11. Logout\n";
            cout << "Enter: ";
            cin >> userChoice;

            if (userChoice == 11)
            {
                cout << "\nThanks for using Car Rental System\n";
                cout << "Visit again!\n";
                getch();
                break;
            }

            if (userChoice == 1)
            {
                for (int i = 0; i < 5; i++)
                {
                    cout << i << " " << carName[i];

                    if (carAvailable[i] == 1)
                        cout << " Available";
                    else
                        cout << " Rented";

                    cout << endl;
                }
            }

            else if (userChoice == 2)
            {
                int index;
                cout << "Enter car number: ";
                cin >> index;

                if (index >= 0 && index < 5)
                {
                    if (carAvailable[index] == 1)
                    {
                        carAvailable[index] = 0;

                        if (currentUser == 1)
                        {
                            user1Cars[user1Count] = carName[index];
                            user1Count++;
                            history[historyCount] = "User1 rented " + carName[index];
                        }
                        else
                        {
                            user2Cars[user2Count] = carName[index];
                            user2Count++;
                            history[historyCount] = "User2 rented " + carName[index];
                        }

                        historyCount++;
                        cout << "Car rented";
                    }
                    else
                        cout << "Not available";
                }
                else
                    cout << "Invalid index";
            }

            else if (userChoice == 3)
            {
                string name;
                cout << "Enter car name: ";
                cin >> name;

                for (int i = 0; i < 5; i++)
                {
                    if (carName[i] == name)
                        carAvailable[i] = 1;
                }

                if (currentUser == 1)
                    history[historyCount] = "User1 returned " + name;
                else
                    history[historyCount] = "User2 returned " + name;

                historyCount++;

                cout << "Returned";
            }

            else if (userChoice == 4)
            {
                if (currentUser == 1)
                {
                    for (int i = 0; i < user1Count; i++)
                        cout << user1Cars[i] << endl;
                }
                else
                {
                    for (int i = 0; i < user2Count; i++)
                        cout << user2Cars[i] << endl;
                }
            }

            else if (userChoice == 5)
            {
                int a, b;
                cout << "Enter first index: ";
                cin >> a;
                cout << "Enter second index: ";
                cin >> b;

                if (a >= 0 && a < 5 && b >= 0 && b < 5)
                {
                    string tn = carName[a];
                    carName[a] = carName[b];
                    carName[b] = tn;

                    int tp = carPrice[a];
                    carPrice[a] = carPrice[b];
                    carPrice[b] = tp;

                    int ta = carAvailable[a];
                    carAvailable[a] = carAvailable[b];
                    carAvailable[b] = ta;

                    history[historyCount] = "Cars swapped";
                    historyCount++;

                    cout << "Swapped";
                }
                else
                    cout << "Invalid index";
            }

            else if (userChoice == 6)
            {
                for (int i = 0; i < 5; i++)
                    cout << carName[i] << " " << carAvailable[i] << endl;
            }

            else if (userChoice == 7)
            {
                for (int i = 0; i < 5; i++)
                {
                    for (int j = 0; j < 4; j++)
                    {
                        if (carPrice[j] > carPrice[j + 1])
                        {
                            int tp = carPrice[j];
                            carPrice[j] = carPrice[j + 1];
                            carPrice[j + 1] = tp;

                            string tn = carName[j];
                            carName[j] = carName[j + 1];
                            carName[j + 1] = tn;

                            int ta = carAvailable[j];
                            carAvailable[j] = carAvailable[j + 1];
                            carAvailable[j + 1] = ta;
                        }
                    }
                }

                history[historyCount] = "Cars sorted";
                historyCount++;

                cout << "Sorted:\n";
                for (int i = 0; i < 5; i++)
                    cout << carName[i] << " " << carPrice[i] << endl;
            }

            else if (userChoice == 8)
            {
                if (currentUser == 1)
                    cout << user1Count;
                else
                    cout << user2Count;
            }

            else if (userChoice == 9)
            {
                if (currentUser == 1)
                {
                    user1Count = 0;
                    history[historyCount] = "User1 removed all cars";
                }
                else
                {
                    user2Count = 0;
                    history[historyCount] = "User2 removed all cars";
                }

                historyCount++;
                cout << "All removed";
            }

            else if (userChoice == 10)
            {
                cout << "\n--- HISTORY ---\n";
                for (int i = 0; i < historyCount; i++)
                {
                    cout << history[i] << endl;
                }
            }

            else
            {
                cout << "Invalid";
            }

            cout << "\n\nPress any key to continue...";
            getch();
        }
    }

    return 0;
}