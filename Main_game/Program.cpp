#include <iostream>
#include <vector>
#include "main_functions.h"
#include <iomanip>

using namespace std;


// Menu Of the Game

void Menu()
{
    int choice;


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

    do
    {
        

        // The game window
        cin >> choice;
        switch (choice)
        {
        case 1:

            
            system("cls");
            break;
        // Settings window
        case 2:
            for (int i = 0; i < 3; i++)
                cout << "\n" << endl;
            system("cls");
            cout << "\n";
            cout << "\n";
            break;
        // Credits windwow
        case 3:
            for (int i = 0; i < 3; i++)
                cout << "\n" << endl;
            system("cls");
            cout << setw(140) << "______  ______   ______   _____ \n";
            cout << setw(140) << "\\     \\|\\     \\ |\\     \\ |     |\n";
            cout << setw(140) << " |     |\\|     |\\ \\     \\|     |\n";
            cout << setw(140) << " |     |/____ /  \\ \\           |\n";
            cout << setw(140) << " |     |\\     \\   \\ \\____      |\n";
            cout << setw(140) << " |     | |     |   \\|___/     /|\n";
            cout << setw(140) << " |     | |     |       /     / |\n";
            cout << setw(140) << "/_____/|/_____/|      /_____/  /\n";
            cout << setw(140) << "|    |||     | |      |     | / \n";
            cout << setw(140) << "|____|/|_____|/       |_____|/  \n";
            for (int i = 0; i < 3; i++)
                cout << "\n" << endl;
            cout << "                             ,//*(#(%#%###((*                              \n" ;
            cout << "                      . **(##(##(%#%&#(#####%####*                         \n" ;
            cout << "                  ..,*###%#%##&&###(%%%&%%#####%%##%,                     \n"  ;
            cout << "                   **/#%%%%##%%##%%#%%%##%%%&&%%%%##%##                    \n" ;
            cout << "                ... #%&%&%#%%%%%%&%%&%#%%&####%%%#%%%&%%#.                 \n" ;
            cout << "                 .(%#%%%%%####((((//((((((#%%%%%###%%%%%%#                 \n" ;
            cout << "                ,((#%###(/,,,,........,..,,,,,,*/%%%#%%%%%(                \n" ;
            cout << "                 ,#%%##/,,,,....... ............,,*/(#&%%%,                \n" ;
            cout << "                  #%%(/,,,........ .  ...........,,,**(#%%                 \n" ;
            cout << "                  /%%#*,,,........      ........,,,,***(#/                 \n" ;
            cout << "                  ,%#(,,,,.......................,,,,**/%/                 \n" ;
            cout << "                  .#(/*,****(#%%#/*,....,,*/#####(*//***#/                 \n" ;
            cout << "                   ((,,*,**(*,*/(#/*,...,//(#***,(/*****(                  \n" ;
            cout << "               *(*../,,..,//*,((,,,.,...,,,***(**/(*,,,,/,*#               \n" ;
            cout << "               ,*,,,*,,.............,,..,,,,,,,......,,,****               \n" ;
            cout << "                ..,,,,,...........,,,...,,,,,,.......,,****                \n" ;
            cout << "                 ,,,.,,,,.........,,.....,,,,,.....,,,**/*                 \n" ;
            cout << "                  ,..*,,,.........,*##///%/*,,,,...,,,**,*                 \n" ;
            cout << "                     .,,,,.........,,,,*****,,,,,,,,,,*,                   \n" ;
            cout << "                      *,,,,....,,,........,,,,,,,,,,,**                    \n" ;
            cout << "                       *,,,,,,,,//*,,,,*,,*//,,,,,,,,*.                    \n" ;
            cout << "                        *,,,,,,,,,,,*/((//*,,,*******.                     \n" ;
            cout << "                        ,****,,,,,,,.....,,,,*,******                      \n" ;
            cout << "                        ,,**//*,,,,..,,,,,,,,,**//***                      \n" ;
            cout << "                   .    ,,,**/////*/******////(//****&&%                   \n" ;
            cout << "                       #,,,,,**///(#######((///******(&&#                  \n" ;
            cout << " .                   .#%,,,,,*,*/****///////*/********%&%(                 \n" ;
            cout << "                   *((#%,,,,,,,,********/*************%&%####              \n" ;
            cout << "               ((#######/,,,,,,,,**********/*********/%##########* .   . . \n" ;
            cout << "          #######%####%#((,,,,,,,,*,****************(###%#####%%#######*.  \n" ;
            cout << " ...(############%########(*,,,,,,****************/####%%#%%##%%###########\n" ;
            cout << "###############%%########%##(,,,,,,**/////******/####%%%%%%###%%###########\n" ;
            cout << "#################%######%%###(/,,,************/(((##%%%%%%##&%%%%##########\n" ;
            cout << "###################%######%####(/,,,*********///(##%%%%%###%%%%%%%#########\n" ;
            cout << "###################%%######%%%####,,,*,*,,,,,,###%%%%%#####%%%%%%%#########\n" ;

        // Exit window 
            break;
        case 4: for (int i = 0; i < 3; i++)
            cout << "\n" << endl;
            system("cls");
            cout << setw(126) << "Ok Bye\n";
            break;
        }


    } while (choice != 1);
    if (choice == 0) {

    }
}
// The text with which the program starts
void introduction()
{
    for (int i = 0; i < 4; i++)
        cout << "\n" << endl;
    cout << setw(170) << "___________           __                 __  .__                                           \n";
    cout << setw(170) << "\\_   _____/ ____     |__| ____ ___.__. _/  |_|  |__   ____      _________    _____   ____  \n";
    cout << setw(170) << " |    __)_ /    \\    |  |/  _ <   |  | \\   __\\  |  \\_/ __ \\    / ___\\__  \\  /     \\_/ __ \\ \n";
    cout << setw(170) << " |        \\   |  \\   |  (  <_> )___  |  |  | |   Y  \\  ___/   / /_/  > __ \\|  Y Y  \\  ___/ \n";
    cout << setw(170) << "/_______  /___|  /\\__|  |\\____// ____|  |__| |___|  /\\___  >  \\___  (____  /__|_|  /\\___  >\n";
    cout << setw(170) << "        \\/     \\/\\______|      \\/                 \\/     \\/  /_____/     \\/      \\/     \\/ \n";

}

 


vector<char> incorrect;
string codeword = "appla";
string answer = "______";
int misses = 0;

//Defining global variables so that the whole program can run without refrencing every single variable
int main()
{
   
    Menu();
    introduction();

    bool guess = false;
    char letter;


    while (answer != codeword && misses < 7)
    {
        display_misses();
        display_status();

        cout << "\n\nGuess: ";
        cin >> letter;

        for (int i = 0; i < codeword.size(); i++)
        {
            if (letter == codeword[i])
            {
                answer[i] = letter;
                guess = true;
            }
            if (letter == 'exit')
            {
                Menu();
            }
        }
        if (guess)
        {
            cout << "\nCorrect! " << endl;
        }
        else
        {
            cout << "\nIncorrect!" << endl;
            incorrect.push_back(letter);
            misses++;
        }
        guess = false;
    }

    end_game();

    return 0;
}


void display_misses()
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


void display_status()
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

void end_game()
{
    string answer;
    string codeword;
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

