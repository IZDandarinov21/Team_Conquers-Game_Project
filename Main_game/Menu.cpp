#include <iostream>
#include <iomanip>
#include <Windows.h>


using namespace std;

void Menu()
{
    int choice;

    
    do
    {
            system("Color 7C");
            for (int i = 0; i < 7; i++)
                cout << "\n" << endl;
            cout << setw(125) << "1. Play";
            for (int i = 0; i < 3; i++)
                cout << "\n" << endl;
            cout << setw(128) << "2. Options";
            for (int i = 0; i < 3; i++)
                cout << "\n" << endl;
            cout << setw(128) << "3. Credits";
            for (int i = 0; i < 3; i++)
                cout << "\n" << endl;
            cout << setw(125) << "4. Exit";
            

            cin >> choice;
            switch (choice)
            {
            case 1:
                 
                    cout << "\n" << endl;
                break;
            case 2:
                for (int i = 0; i < 3; i++)
                    cout << "\n" << endl;
                cout << setw(134) << "Your in the settings\n";
                break;
            case 3:
                for (int i = 0; i < 3; i++)
                    cout << "\n" << endl;
                cout << setw(140) << "by ATApostolov and IVAdandarinov \n";
                break;
            case 4: for (int i = 0; i < 3; i++)
                cout << "\n" << endl;
            cout << setw(126) << "Ok Bye\n";
            break;
            }
           

    } while (choice != 1);
   
}


