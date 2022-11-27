#include <iostream>
#include <vector>
#include "main_functions.h"
#include <iomanip>

using namespace std;

//declare functions


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
            system("cls");
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

void introduction()
{
    for (int i = 0; i < 3; i++)
        cout << "\n" << endl;
    cout << setw(130) << "Enjoy the game" << endl;

}



void display_misses(int misses)
{   
    for (int i = 0; i < 3; i++)
        cout << "\n" << endl;
    if (misses == 0)
    {

        cout  << "  +---+ " << endl;
        cout  << "  |   | " << endl;
        cout  << "      | " << endl;
        cout  << "      | " << endl;
        cout  << "      | " << endl;
        cout  << "      | " << endl;
        cout  << " ========= " << endl;
    }
    else if (misses == 1)
    {
        cout << "  +---+ " << endl;
        cout << "  |   | " << endl;
        cout << "  O   | " << endl;
        cout << "      | " << endl;
        cout << "      | " << endl;
        cout << "      | " << endl;
        cout << " ========= " << endl;
    }
    else if (misses == 2)
    {
        cout << "  +---+ " << endl;
        cout << "  |   | " << endl;
        cout << "  O   | " << endl;
        cout << "  |   | " << endl;
        cout << "      | " << endl;
        cout << "      | " << endl;
        cout << " ========= " << endl;
    }
    else if (misses == 3)
    {
        cout << "  +---+ " << endl;
        cout << "  |   | " << endl;
        cout << "  O   | " << endl;
        cout << " /|   | " << endl;
        cout << "      | " << endl;
        cout << "      | " << endl;
        cout << " ========= " << endl;
    }
    else if (misses == 4)
    {
        cout << "  +---+ " << endl;
        cout << "  |   | " << endl;
        cout << "  O   | " << endl;
        cout << " /|\\  | " << endl;
        cout << "      | " << endl;
        cout << "      | " << endl;
        cout << " ========= " << endl;
    }
    else if (misses == 5)
    {
        cout << "  +---+ " << endl;
        cout << "  |   | " << endl;
        cout << "  O   | " << endl;
        cout << " /|\\  | " << endl;
        cout << " /    | " << endl;
        cout << "      | " << endl;
        cout << " ========= " << endl;
    }
    else if (misses == 6)
    {
        cout << "  +---+ " << endl;
        cout << "  |   | " << endl;
        cout << "  O   | " << endl;
        cout << " /|\\  | " << endl;
        cout << " / \\  | " << endl;
        cout << "      | " << endl;
        cout << " ========= " << endl;
    }

}


void display_status(vector<char> incorrect, string answer)
{
    cout << "Wrong answers:" << endl;

    for (int i = 0; i < incorrect.size(); i++)
    {
        cout << incorrect[i] << " ";
    }

    cout  <<  "\nCodeword:" << endl;

    for (int i = 0; i < answer.size(); i++)
    {
        cout << answer[i] << " ";
    }
}

void end_game(string answer, string codeword)
{
    if (answer == codeword)
    {
        cout <<  "Good job you saved the man from being hanged!" << endl;
        cout <<  "Congratulations!" << endl;
    }
    else
    {
        cout <<  "Oh, NO the man was hanged!" << endl;
    }
}
