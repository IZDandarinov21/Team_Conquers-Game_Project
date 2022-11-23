#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void Menu()
{
    int choice;
    ifstream iFile;
    ofstream oFile;
    do
    {
        cout << "0. Play\n1. Settings\n2. creits\n3. exit\n\n";
        cin >> choice;
        switch (choice)
        {
        case 0:            
            iFile.open("Main_game.cpp");
            if (!iFile.is_open()) {
                cout << "Error";
            }
        case 1:
            cout << "Your in the settings\n";
            break;
        case 2:
            cout << "by appleninja360YT \n";
            break;
        case 3:
            cout << "Ok Bye\n";
            break;
        }


    } while (choice != 3);

}


