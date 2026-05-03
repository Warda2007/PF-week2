#include <iostream>
#include <conio.h>
using namespace std;

//   Global variables
string carName[5]     = {"Civic", "Corolla", "Mehran", "City", "Alto"};
int    carPrice[5]    = {50000, 45000, 20000, 48000, 25000};
int    carAvailable[5]= {1, 1, 1, 1, 1};

string user1Cars[5];
string user2Cars[5];
int    user1Count = 0;
int    user2Count = 0;

string history[50];
int    historyCount = 0;

string adminUser = "admin";
string adminPass  = "123";

//   Function 1 : addToHistory
//   Purpose   : saves every action in history array
//   Parameter : some sort of message that is displayed on console
void addToHistory(string msg)
{
    history[historyCount] = msg;
    historyCount++;
}

//   Funtion 2 : viewAllCars
//   Purpose    : prints every car with its index, price and availability
void viewAllCars()
{
    for (int i = 0; i < 5; i++)
    {
        cout << i << " " << carName[i]
             << " " << carPrice[i]
             << " " << (carAvailable[i] ? "Available" : "Rented")
             << endl;
    }
}


//   Function 3 : viewCarsUser
//   Purpose   : prints every car with availability no price shown for users

void viewCarsUser()
{
    for (int i = 0; i < 5; i++)
    {
        cout << i << " " << carName[i];
        if (carAvailable[i] ==  1)
            cout << " Available";
        else
            cout << " Rented";
        cout << endl;
    }
}


//   Function 4 : addCar   (Admin feature)
//   Purpose   : admin can replace a car at any index temporarily

void addCar()
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

        addToHistory("Admin added " + carName[index]);   // calls Function 1

        cout << "Car added!";
    }
    else
        cout << "Invalid index!";
}


//   Function 5 : removeCar   (Admin feature)
//   Purpose   : removes the car from index and sets its count to 0

void removeCar()
{
    int index;
    cout << "Enter index to remove: ";
    cin >> index;

    if (index >= 0 && index < 5)
    {
        addToHistory("Admin removed " + carName[index]);  // calls Function 1

        carName[index]      = "NULL";
        carPrice[index]     = 0;
        carAvailable[index] = 0;

        cout << "Car removed!";
    }
    else
        cout << "Invalid index!";
}


//   Function 6 : viewUserCars   (Admin feature)
//   Purpose   : shows which cars each user currently holds

void viewUserCars()
{
    cout << "\nUser1 Cars:\n";
    for (int i = 0; i < user1Count; i++)
        cout << user1Cars[i] << endl;

    cout << "\nUser2 Cars:\n";
    for (int i = 0; i < user2Count; i++)
        cout << user2Cars[i] << endl;
}


//   Function 7 : viewHistory
//   Purpose   : prints every line stored in the history array

void viewHistory()
{
    cout << "\n--- HISTORY ---\n";
    for (int i = 0; i < historyCount; i++)
        cout << history[i] << endl;
}


//   Function 8 : resetSystem   (Admin feature)
//   Purpose   : marks all cars available, clears user lists and wipes all the hsitory


void resetSystem()
{
    for (int i = 0; i < 5; i++)
        carAvailable[i] = 1;

    user1Count  = 0;
    user2Count  = 0;
    historyCount= 0;

    cout << "System Reset Done!";
}


//   Function 9 : rentCar
//   Purpose   : rents one car to the current user
//   Parametres : currentUser -> 1 or 2

void rentCar(int currentUser)
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
                addToHistory("User1 rented " + carName[index]);   // calls Function 1
            }
            else
            {
                user2Cars[user2Count] = carName[index];
                user2Count++;
                addToHistory("User2 rented " + carName[index]);   // calls Function 1
            }

            cout << "Car rented";
        }
        else
            cout << "Not available";
    }
    else
        cout << "Invalid index";
}


//   Funtion 10 : returnCar
//   Purpose     : marks a car available again by name
//   Parametres  : currentUser -> 1 or 2

void returnCar(int currentUser)
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
        addToHistory("User1 returned " + name);    // calls Function 1
    else
        addToHistory("User2 returned " + name);    // calls Function 1

    cout << "Returned";
}


//   Funtion 11 : myCars
//   Purpose     : shows the current user's rented cars
//   Parametres  : currentUser -> 1 or 2

void myCars(int currentUser)
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


//   Funtion 12 : swapCars
//   purpose    : swaps two cars in all three arrays at once

void swapCars()
{
    int a, b;
    cout << "Enter first index: ";
    cin >> a;
    cout << "Enter second index: ";
    cin >> b;

    if (a >= 0 && a < 5 && b >= 0 && b < 5)
    {
        string tn     = carName[a];
        carName[a]    = carName[b];
        carName[b]    = tn;

        int tp        = carPrice[a];
        carPrice[a]   = carPrice[b];
        carPrice[b]   = tp;

        int ta            = carAvailable[a];
        carAvailable[a]   = carAvailable[b];
        carAvailable[b]   = ta;

        addToHistory("Cars swapped");     // calls Function 1

        cout << "Swapped";
    }
    else
        cout << "Invalid index";
}


//   Funtion 13 : checkAvailability
//   Purpose     : prints every car's name and check if available

void checkAvailability()
{
    for (int i = 0; i < 5; i++)
        cout << carName[i] << " " << carAvailable[i] << endl;
}


//   Funtion 14 : sortByPrice
//   Purpose     : bubble-sorts all three arrays together
//                 from lowest price to highest

void sortByPrice()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (carPrice[j] > carPrice[j + 1])
            {
                int tp          = carPrice[j];
                carPrice[j]     = carPrice[j + 1];
                carPrice[j + 1] = tp;

                string tn       = carName[j];
                carName[j]      = carName[j + 1];
                carName[j + 1]  = tn;

                int ta              = carAvailable[j];
                carAvailable[j]     = carAvailable[j + 1];
                 carAvailable[j + 1] = ta;
            }
        }
    }

    addToHistory("Cars sorted");    // calls Function 1

    cout << "Sorted:\n";
    for (int i = 0; i < 5; i++)
        cout << carName[i] << " " << carPrice[i] << endl;
}


//   Function 15 : countMyCars
//   purpose     : prints how many cars the current user has
//   Parametres  : currentUser -> 1 or 2

void countMyCars(int currentUser)
{
    if (currentUser == 1)
        cout << user1Count;
    else
        cout << user2Count;
}


//   Funtion 16 : removeAllMyCars
//   Purpose     : resets the current user's car count to 0
//   P  : currentUser -> 1 or 2

void removeAllMyCars(int currentUser)
{
    if (currentUser == 1)
    {
        user1Count = 0;
        addToHistory("User1 removed all cars");    // calls Function 1
    }
    else
    {
        user2Count = 0;
        addToHistory("User2 removed all cars");    // calls Function 1
    }

    cout << "All removed";
}


//   Function 17 : adminPanel
//   Purpose     : runs the entire admin menu loop
//                 Calls Functions 2,4,5,6,7,8

void adminPanel()
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

            if      (adminChoice == 1) viewAllCars();      // Function 2
            else if (adminChoice == 2) addCar();           // Function 4
            else if (adminChoice == 3) removeCar();        // Function 5
            else if (adminChoice == 4) viewUserCars();     // Function 6
            else if (adminChoice == 5) viewHistory();      // Function 7
            else if (adminChoice == 6) resetSystem();      // Function 8
            else if (adminChoice == 7) break;
            else cout << "Invalid";

            cout << "\nPress any key...";
            getch();
        }
    }
    else
    {
        cout << "Wrong Admin Credentials!";
        getch();
    }
}

//   Function 18 : userPanel
//   Purpose    : runs the entire user menu loop
//   Parametres : currentUser -> 1 or 2
//                 Calls Functions 3,9,10,11,12,13,14,15,16,7

void userPanel(int currentUser)
{
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

        if      (userChoice == 11) { cout << "\nThanks for using Car Rental System\nVisit again!\n"; getch(); break; }
        else if (userChoice == 1)  viewCarsUser();               // Function 3
        else if (userChoice == 2)  rentCar(currentUser);         // Function 9
        else if (userChoice == 3)  returnCar(currentUser);       // Function 10
        else if (userChoice == 4)  myCars(currentUser);          // Function 11
        else if (userChoice == 5)  swapCars();                   // Function 12
        else if (userChoice == 6)  checkAvailability();          // Function 13
        else if (userChoice == 7)  sortByPrice();                // Function 14
        else if (userChoice == 8)  countMyCars(currentUser);     // Function 15
        else if (userChoice == 9)  removeAllMyCars(currentUser); // Function 16
        else if (userChoice == 10) viewHistory();                // Function 7
        else cout << "Invalid";

        cout << "\n\nPress any key to continue...";
        getch();
    }
}


//  now we will display the header and call the functions made.           
//  MAIN 
int main()
{
    int choice;

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
        else if (choice == 4)
        {
            adminPanel();     // Function 17
        }
        else if (choice == 1)
        {
            userPanel(1);     // Function 18
        }
        else if (choice == 2)
        {
            userPanel(2);     // Function 18
        }
        else
        {
            cout << "Wrong choice";
            getch();
        }
    }

    return 0;
}
