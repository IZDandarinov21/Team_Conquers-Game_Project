#include <iostream>
#include <iomanip>
using namespace std;

void menu()
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
            
            // Credits windwow
        case 2:
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
            cout << "                             ,//*(#(%#%###((*                              " << setw(40) << "A\n";
            cout << "                      . **(##(##(%#%&#(#####%####*                         " << setw(140) << "A\n";
            cout << "                  ..,*###%#%##&&###(%%%&%%#####%%##%,                      \n";
            cout << "                   **/#%%%%##%%##%%#%%%##%%%&&%%%%##%##                    \n";
            cout << "                ... #%&%&%#%%%%%%&%%&%#%%&####%%%#%%%&%%#.                 \n";
            cout << "                 .(%#%%%%%####((((//((((((#%%%%%###%%%%%%#                 \n";
            cout << "                ,((#%###(/,,,,........,..,,,,,,*/%%%#%%%%%(                \n";
            cout << "                 ,#%%##/,,,,....... ............,,*/(#&%%%,                \n";
            cout << "                  #%%(/,,,........ .  ...........,,,**(#%%                 \n";
            cout << "                  /%%#*,,,........      ........,,,,***(#/                 \n";
            cout << "                  ,%#(,,,,.......................,,,,**/%/                 \n";
            cout << "                  .#(/*,****(#%%#/*,....,,*/#####(*//***#/                 \n";
            cout << "                   ((,,*,**(*,*/(#/*,...,//(#***,(/*****(                  \n";
            cout << "               *(*../,,..,//*,((,,,.,...,,,***(**/(*,,,,/,*#               \n";
            cout << "               ,*,,,*,,.............,,..,,,,,,,......,,,****               \n";
            cout << "                ..,,,,,...........,,,...,,,,,,.......,,****                \n";
            cout << "                 ,,,.,,,,.........,,.....,,,,,.....,,,**/*                 \n";
            cout << "                  ,..*,,,.........,*##///%/*,,,,...,,,**,*                 \n";
            cout << "                     .,,,,.........,,,,*****,,,,,,,,,,*,                   \n";
            cout << "                      *,,,,....,,,........,,,,,,,,,,,**                    \n";
            cout << "                       *,,,,,,,,//*,,,,*,,*//,,,,,,,,*.                    \n";
            cout << "                        *,,,,,,,,,,,*/((//*,,,*******.                     \n";
            cout << "                        ,****,,,,,,,.....,,,,*,******                      \n";
            cout << "                        ,,**//*,,,,..,,,,,,,,,**//***                      \n";
            cout << "                   .    ,,,**/////*/******////(//****&&%                   \n";
            cout << "                       #,,,,,**///(#######((///******(&&#                  \n";
            cout << " .                   .#%,,,,,*,*/****///////*/********%&%(                 \n";
            cout << "                   *((#%,,,,,,,,********/*************%&%####              \n";
            cout << "               ((#######/,,,,,,,,**********/*********/%##########* .   . . \n";
            cout << "          #######%####%#((,,,,,,,,*,****************(###%#####%%#######*.  \n";
            cout << " ...(############%########(*,,,,,,****************/####%%#%%##%%###########\n";
            cout << "###############%%########%##(,,,,,,**/////******/####%%%%%%###%%###########\n";
            cout << "#################%######%%###(/,,,************/(((##%%%%%%##&%%%%##########\n";
            cout << "###################%######%####(/,,,*********///(##%%%%%###%%%%%%%#########\n";
            cout << "###################%%######%%%####,,,*,*,,,,,,###%%%%%#####%%%%%%%#########\n";



            // Exit window 
            break;
        case 3: for (int i = 0; i < 3; i++)
            cout << "\n" << endl;
            system("cls");
            cout << setw(126) << "Ok Bye\n";
            break;
        }


    } while (choice != 1);
    if (choice == 0) {

    }
}