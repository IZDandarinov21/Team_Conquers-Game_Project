#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void Menu()
{
    int choice;
    
    do
    {
        cout << "1. Play\n2. Settings\n3. credits\n4. exit\n\n";
        cin >> choice;
        switch (choice)
        {
        case 1:            
            cout << "You play the game\n";
            break;
        case 2:
            cout << "Your in the settings\n";
            break;
        case 3:
            cout << "by ATApostolov and IVAdandarinov \n";
            break;
        case 4:
            cout << "Ok Bye\n";
            break;
        }


    } while (choice != 1);

}


