#include <iostream>
#include <conio.h>
using namespace std;
main()
{

    int totalStudents = 200; // total size
    int index = 7;

    // data structures
    string name_arr[totalStudents] = {"ali", "ammar", "sara", "ahmad", "zain", "nida", "tariq"};
    int age_arr[totalStudents] = {19, 20, 22, 23, 24,18,22};
    float matric_arr[totalStudents] = {1065, 1067, 1040, 1056, 1066, 1020, 780};
    float inter_arr[totalStudents] = {1085, 1100, 1114, 1045, 1145, 1020, 1112};
    float ecat_arr[totalStudents] = {
        257,
        309,
        200,
        380,
        330,
        270,
        310,
    };
    string pref1_arr[totalStudents] = {"CE", "EE", "CS", "EE", "CS", "CE", "CS", "CS"};
    string pref2_arr[totalStudents] = {"CS", "CE", "EE", "CE", "EE", "CS", "CE", "EE"};
    string pref3_arr[totalStudents] = {"EE", "CS", "CE", "CS", "CE", "EE", "EE", "CE "};
    string admittedProgram[totalStudents];
    float agg_arr[totalStudents];

    // CRUD Create Read Update Read
    while (true)
    {
        // main header of ums
        system("cls");
        cout << "--------------------------------------------" << endl;
        cout << "--------UNIVERSITY MANAGEMENT SYSTEM--------" << endl;
        cout << "---------------------------------------------" << endl;

        cout << "----USER MENU----" << endl;
        cout << "1 Admin" << endl;
        cout << "2 User" << endl;
        cout << "3 to Exit" << endl;
        cout << "Choose option :" << endl;
        int userOption;
        cin >> userOption;

        cout << "You Choose " << userOption << endl;
        if (userOption == 1)
        {
            // write here the admin code

            for (int i = 0; i < 3; i++)
            {
                system("cls");
                cout << "Admin Menu " << i + 1 << "  Login attempt " << endl;
                cout << "Enter username : ";
                string username;
                cin >> username;
                cout << "Enter password : ";
                string password;
                cin >> password;
                if (username == "admin" && password == "123")
                {
                    cout << "Successfully Logged in " << endl;
                    _getch();

                    // menu
                    while (true)
                    {
                        system("cls");
                        cout << "1.Show all students " << endl;
                        cout << "2.Search all students" << endl;
                        cout << "3.Update student record" << endl;
                        cout << "4.Generate merit list" << endl;
                        cout << "5.Delete record by name" << endl;
                        cout << "6.Show admitted students" << endl;
                        cout << "7.Logout" << endl;

                        cout << "Choose the option : ";
                        int adminOption;
                        cin >> adminOption;
                        if (adminOption == 1)
                        {
                            // show students record
                            cout << "Name\tAge\tMatric\tInter\tECAT\tP1\tP2\tP3" << endl;
                            for (int i = 0; i < index; i++)
                            {
                                if (name_arr[i] != "")
                                {
                                    cout << name_arr[i] << "\t" << age_arr[i] << "\t" << matric_arr[i] << "\t" << inter_arr[i] << "\t" << ecat_arr[i] << "\t" << pref1_arr[i] << "\t"
                                         << pref2_arr[i] << "\t" << pref3_arr[i] << endl;
                                }
                            }
                            _getch();
                        }

                        else if (adminOption == 2)
                        {
                            // find student by name
                            cout << "Enter the name you want to find : ";
                            string name;
                            cin >> name;
                            bool found = false;
                            int foundindex = -1;
                            for (int i = 0; i < index; i++)
                            {
                                if (name_arr[i] == name)
                                {
                                    foundindex = i;
                                    found == true;
                                }
                            }
                            if (found == false)
                            {
                                cout << "Record not found against name " << name << endl;
                            }
                            if(found=true)
                            {
                                cout << "Name\tAge\tMatric\tInter\tECAT\tP1\tP2\tP3" << endl;
                                cout << name_arr[foundindex] << "\t" << age_arr[foundindex] << "\t" << matric_arr[foundindex] << "\t" << inter_arr[foundindex] << "\t" << ecat_arr[foundindex] << "\t" << pref1_arr[foundindex] << "\t"
                                     << pref2_arr[foundindex] << "\t" << pref3_arr[foundindex] << endl;
                            }
                        }
                        else if (adminOption == 3)
                        {
                            // update student record
                            cout << "Enter the name you want to update record of : ";
                            string name;
                            cin >> name;
                            bool found = false;
                            int foundindex = -1;
                            for (int i = 0; i < index; i++)
                            {
                                if (name_arr[i] == name)
                                {
                                    foundindex = i;
                                    found == true;
                                }
                            }
                            if (found = true)
                            {

                                cout << "-----OLD RECORD------" << endl;
                                cout << "Name\tAge\tMatric\tInter\tECAT\tP1\tP2\tP3" << endl;
                                cout << name_arr[foundindex] << "\t" << age_arr[foundindex] << "\t" << matric_arr[foundindex] << "\t" << inter_arr[foundindex] << "\t" << ecat_arr[foundindex] << "\t" << pref1_arr[foundindex] << "\t"
                                     << pref2_arr[foundindex] << "\t" << pref3_arr[foundindex] << endl;

                                cout << "Enter new record for update : " << endl;

                                cout << "Enter your name : ";
                                string name;
                                cin >> name;
                                cout << "Enter your age : ";
                                int age;
                                cin >> age;
                                cout << "Enter your matric marks : ";
                                float matric;
                                cin >> matric;
                                cout << "Enter your intermediate marks : ";
                                float inter;
                                cin >> inter;
                                cout << "Enter your ECAT marks : ";
                                float ecat;
                                cin >> ecat;

                                cout << "Enter CS CE or EE  as your preference :" << endl;

                                cout << "Enter your 1st preference : ";
                                string pref1;
                                cin >> pref1;
                                cout << "Enter your 2nd preference : ";
                                string pref2;
                                cin >> pref2;
                                cout << "Enter your 3rd preference : ";
                                string pref3;
                                cin >> pref3;

                                name_arr[foundindex] = name;
                                age_arr[foundindex] = age;
                                matric_arr[foundindex] = matric;
                                inter_arr[foundindex] = inter;
                                ecat_arr[foundindex] = ecat;
                                pref1_arr[foundindex] = pref1;
                                pref2_arr[foundindex] = pref2;
                                pref3_arr[foundindex] = pref3;
                            }
                            else
                            {
                                cout << "Record not found" << endl;
                            }
                        }
                        else if (adminOption == 4)
                        {
                            // generate merit list
                            for (int i = 0; i < index; i++)
                            {
                                float aggregate = matric_arr[i] / 1100.0 * 100.0 * 0.30 + inter_arr[i] / 1200.0 * 100.0 * 0.4 +
                                                  ecat_arr[i] / 400.0 * 100.0 * 0.3;
                                agg_arr[i] = aggregate;
                            }
                            // sorting data on base of aggregate
                            for (int i = 0; i < index; i++)
                            {
                                for (int j = i + 1; j < index; j++)
                                {
                                    if (agg_arr[i] < agg_arr[j])
                                    {
                                        // swaping of names
                                        string temp = name_arr[i];
                                        name_arr[i] = name_arr[j];
                                        name_arr[j] = temp;

                                        // swaping matric marks
                                        float tempmatric = matric_arr[i];
                                        matric_arr[i] = matric_arr[j];
                                        matric_arr[j] = tempmatric;

                                        // swaping inter
                                        float tempinter = inter_arr[i];
                                        inter_arr[i] = inter_arr[j];
                                        inter_arr[j] = tempinter;

                                        // swaping ecat
                                        float tempecat = ecat_arr[i];
                                        ecat_arr[i] = ecat_arr[j];
                                        ecat_arr[j] = tempecat;

                                        // swaping preferences
                                        string temppref1 = pref1_arr[i];
                                        pref1_arr[i] = pref1_arr[j];
                                        pref1_arr[j] = temppref1;

                                        string temppref2 = pref2_arr[i];
                                        pref2_arr[i] = pref2_arr[j];
                                        pref2_arr[j] = temppref2;

                                        string temppref3 = pref3_arr[i];
                                        pref3_arr[i] = pref3_arr[j];
                                        pref3_arr[j] = temppref3;

                                        // swaping aggregate
                                        float tempaggregate = agg_arr[i];
                                        agg_arr[i] = agg_arr[j];
                                        agg_arr[j] = tempaggregate;
                                    }
                                }
                            }
                            // code to display all data with aggregate
                            cout << "Name\tAge\tAggregate" << endl;
                            for (int i = 0; i < index; i++)
                            {
                                if (name_arr[i] != " ")
                                {
                                    cout << name_arr[i] << "\t" << age_arr[i] << "\t" << agg_arr[i] << endl;
                                }
                            }
                            // admit students into disciplines
                            int csseats = 2;
                            int ceseats = 2;
                            int eeseats = 2;

                            for (int i = 0; i < index; i++)
                            {
                                admittedProgram[i] = "Not admitted";
                                if (pref1_arr[i] == "CS" && csseats > 0)
                                {
                                    admittedProgram[i] = "CS";
                                    csseats--;
                                }
                                else if (pref1_arr[i] == "CE" && ceseats > 0)
                                {
                                    admittedProgram[i] = "CE";
                                    ceseats--;
                                }
                                else if (pref1_arr[i] == "EE" && eeseats > 0)
                                {
                                    admittedProgram[i] = "EE";
                                    eeseats--;
                                }
                            }
                        }
                        else if (adminOption == 5)
                        {
                            // delete student record
                            cout << "Enter the name you want to delete record of :";
                            string name;
                            cin >> name;
                            bool found = false;
                            int foundindex = -1;
                            for (int i = 0; i < index; i++)
                            {
                                if (name_arr[i] == name)
                                {
                                    foundindex = i;
                                    found = true;
                                }
                            }
                            if (found = true)
                            {
                                name_arr[foundindex] = "";
                                age_arr[foundindex] = 0;
                                matric_arr[foundindex] = 0;
                                inter_arr[foundindex] = 0;
                                ecat_arr[foundindex] = 0;
                                pref1_arr[foundindex] = "";
                                pref2_arr[foundindex] = "";
                                pref3_arr[foundindex] = "";
                                cout << "Record of " << name << "deleted" << endl;
                            }
                            else
                            {
                                cout << "Record not found" << endl;
                            }
                        }
                        else if(adminOption==6){
                            //record of students
                            cout<<"Name\tProgram"<<endl;
                            for (int i=0; i<index; i++){
                                if(name_arr[i] !=" "){
                                    cout<<name_arr[i]<< "\t"<<admittedProgram[i]<<endl;
                                }
                            }
                        }
                        else if (adminOption == 7)
                        {
                            // back
                            break;
                        }
                        else
                        {
                            cout << "Wrong option selected " << endl;
                        }
                        cout << "Press any key to continue" << endl;
                        _getch();
                    }
                    cout << "Press any key to continue" << endl;
                    _getch();
                    break;
                }
                else
                {
                    cout << "Invalid Credentials " << endl;
                }
                cout << "Enter any key to continue.... ";
                _getch();
            }
        }
        else if (userOption == 2)
        {
            // write here the student code
            system("cls");
            cin.ignore();
            cout << "This is student menu" << endl;
            cout << "Welcome to UMS student menu " << endl;
            cout << "Enter your name : ";
            string name;
            cin >> name;
            cout << "Enter your age : ";
            int age;
            cin >> age;
            cout << "Enter your matric marks : ";
            float matric;
            cin >> matric;
            cout << "Enter your intermediate marks : ";
            float inter;
            cin >> inter;
            cout << "Enter your ECAT marks : ";
            float ecat;
            cin >> ecat;

            cout << "Enter CS CE or EE  as your preference :" << endl;

            cout << "Enter your 1st preference : ";
            string pref1;
            cin >> pref1;
            cout << "Enter your 2nd preference : ";
            string pref2;
            cin >> pref2;
            cout << "Enter your 3rd preference : ";
            string pref3;
            cin >> pref3;

            name_arr[index] = name;
            age_arr[index] = age;
            matric_arr[index] = matric;
            inter_arr[index] = inter;
            ecat_arr[index] = ecat;
            pref1_arr[index] = pref1;
            pref2_arr[index] = pref2;
            pref3_arr[index] = pref3;
            index++;
            cout << "Your data has been saved " << endl;
            cout << "Enter any key to continue.... " << endl;
            _getch();
        }
        
        else if(userOption==3){
            break;
        }else{
            cout<<"You entered wrong choice."<<endl;
        }
    } // end of our main while loop
    cout << endl
         << "Thanks for using this software ";
}