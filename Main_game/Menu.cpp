#include <iostream>
#include <iomanip>
#include <Windows.h>
#include "main_functions.h"

using namespace std;

void Menu()
{
    int choice;

    
    do
    {
            system("Color B");
            for (int i = 0; i < 7; i++)
                cout << "\n" << endl;
            cout << setw(134) << "______ _             \n";
            cout << setw(134) << "| ___ \\ |            \n";
            cout << setw(134) << "| |_/ / | __ _ _   _ \n";
            cout << setw(134) << "|  __/| |/ _` | | | |\n";
            cout << setw(134) << "| |   | | (_| | |_| |\n";
            cout << setw(134) << "\\_|   |_|\\__,_|\\__, |\n";
            cout << setw(134) << "                __/ |\n";
            cout << setw(134) << "               |___/ \n";
            cout << setw(134) << "\n";
            cout << setw(134) << "\n";
            cout << setw(134) << "\n";

            for (int i = 0; i < 1; i++)
                cout << "\n" << endl;
            cout << setw(140) << " _____       _   _                 \n";
            cout << setw(140) << "|  _  |     | | (_)                \n";
            cout << setw(140) << "| | | |_ __ | |_ _  ___  _ __  ___ \n";
            cout << setw(140) << "| | | | '_ \\| __| |/ _ \\| '_ \\/ __|\n";
            cout << setw(140) << "\\ \\_/ / |_) | |_| | (_) | | | \\__ \\\n";
            cout << setw(140) << " \\___/| .__/ \\__|_|\\___/|_| |_|___/\n";
            cout << setw(140) << "      | |                          \n";
            cout << setw(140) << "      |_|                          \n";

            for (int i = 0; i < 3; i++)
                cout << "\n" << endl;
            cout << setw(138) << " _____              _ _ _       \n";
            cout << setw(138) << "/  __ \\            | (_) |      \n";
            cout << setw(138) << "| /  \\/_ __ ___  __| |_| |_ ___ \n";
            cout << setw(138) << "| |   | '__/ _ \\/ _` | | __/ __|\n";
            cout << setw(138) << "| \\__/\\ | |  __/ (_| | | |_\\__ \\\n";
            cout << setw(138) << " \\____/_|  \\___|\\__,_|_|\\__|___/\n";


            for (int i = 0; i < 3; i++)
                cout << "\n" << endl;
            cout << setw(130) << " _____     _ _   \n";
            cout << setw(130) << "|  ___|   (_) |  \n";
            cout << setw(130) << "| |____  ___| |_ \n";
            cout << setw(130) << "|  __\\ \\/ / | __|\n";
            cout << setw(130) << "| |___>  <| | |_ \n";
            cout << setw(130) << "\\____/_/\\_\\_|\\__|\n";
            

            cin >> choice;
            switch (choice)
            {
            case 1:
                 
                    cout << "\n" << endl;
                break;
            case 2:
                for (int i = 0; i < 3; i++)
                    cout << "\n" << endl;
                cout << "You are in setings \n";
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
    if (choice == 0) {
        
   }
}


