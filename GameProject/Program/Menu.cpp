#include <iostream>
#include <iomanip>
using namespace std;

void menu()
{
    
    int choice;

    system("Color B");
    for (int i = 0; i < 7; i++)
        cout << "\n" << endl;
    cout << setw(170) << "   __                      ____  _   ________   __           ____  __    _____  __\n";
    cout << setw(170) << "  / /___  ______  ___     / __ \\/ | / / ____/  / /_____     / __ \\/ /   /   \\ \\/ /\n";
    cout << setw(170) << " / __/ / / / __ \\/ _ \\   / / / /  |/ / __/    / __/ __ \\   / /_/ / /   / /| |\\  / \n";
    cout << setw(170) << "/ /_/ /_/ / /_/ /  __/  / /_/ / /|  / /___   / /_/ /_/ /  / ____/ /___/ ___ |/ /  \n";
    cout << setw(170) << "\\__/\\__, / .___/\\___/   \\____/_/ |_/_____/   \\__/\\____/  /_/   /_____/_/  |_/_/   \n";
    cout << setw(170) << "   /____/_/                                                                       \n";


   
    for (int i = 0; i < 3; i++)
        cout << "\n" << endl;
    cout << setw(180) << "   __                      _______       ______     ____              __________  __________  _______________\n";
    cout << setw(180) << "  / /___  ______  ___     /_  __/ |     / / __ \\   / __/___  _____   / ____/ __ \\/ ____/ __ \\/  _/_  __/ ___/\n";
    cout << setw(180) << " / __/ / / / __ \\/ _ \\     / /  | | /| / / / / /  / /_/ __ \\/ ___/  / /   / /_/ / __/ / / / // /  / /  \\__ \\ \n";
    cout << setw(180) << "/ /_/ /_/ / /_/ /  __/    / /   | |/ |/ / /_/ /  / __/ /_/ / /     / /___/ _, _/ /___/ /_/ // /  / /  ___/ / \n";
    cout << setw(180) << "\\__/\\__, / .___/\\___/    /_/    |__/|__/\\____/  /_/  \\____/_/      \\____/_/ |_/_____/_____/___/ /_/  /____/  \n";
    cout << setw(180) << "   /____/_/                                                                                                  \n";

    for (int i = 0; i < 1; i++)
        cout << "\n" << endl;

    cout << setw(125) << "...";
    
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
            system("cls");
            for (int i = 0; i < 4; i++)
                cout << "\n" << endl;
            cout << setw(190) << "                                                                    _____                                                             \n";
            cout << setw(190) << "        ___________            _____         ____________      _____\\    \\  _____    _____           ______  ______   ______   _____  \n";
            cout << setw(190) << "       /           \\         /      |_       \\           \\    /    / |    ||\\    \\   \\    \\          \\     \\|\\     \\ |\\     \\ |     | \n";
            cout << setw(190) << "      /    _   _    \\       /         \\       \\           \\  /    /  /___/| \\\\    \\   |    |          |     |\\|     |\\ \\     \\|     | \n";
            cout << setw(190) << "     /    //   \\\\    \\     |     /\\    \\       |    /\\     ||    |__ |___|/  \\\\    \\  |    |          |     |/____ /  \\ \\           | \n";
            cout << setw(190) << "    /    //     \\\\    \\    |    |  |    \\      |   |  |    ||       \\         \\|    \\ |    |          |     |\\     \\   \\ \\____      | \n";
            cout << setw(190) << "   /     \\\\_____//     \\   |     \\/      \\     |    \\/     ||     __/ __       |     \\|    |          |     | |     |   \\|___/     /| \n";
            cout << setw(190) << "  /       \\ ___ /       \\  |\\      /\\     \\   /           /||\\    \\  /  \\     /     /\\      \\         |     | |     |       /     / | \n";
            cout << setw(190) << " /________/|   |\\________\\ | \\_____\\ \\_____\\ /___________/ || \\____\\/    |   /_____/ /______/|       /_____/|/_____/|      /_____/  / \n";
            cout << setw(190) << "|        | |   | |        || |     | |     ||           | / | |    |____/|  |      | |     | |       |    |||     | |      |     | /  \n";
            cout << setw(190) << "|________|/     \\|________| \\|_____|\\|_____||___________|/   \\|____|   | |  |______|/|_____|/        |____|/|_____|/       |_____|/   \n";
            cout << setw(190) << "                                                                   |___|/                                                             \n";
            



            for (int i = 0; i < 3; i++)
                cout << "\n" << endl;

            cout << setw(155) << "    ___  _________                     __        __          \n";
            cout << setw(155) << "   /   |/_  __/   |  ____  ____  _____/ /_____  / /___ _   __\n";
            cout << setw(155) << "  / /| | / / / /| | / __ \\/ __ \\/ ___/ __/ __ \\/ / __ \\ | / /\n";
            cout << setw(155) << " / ___ |/ / / ___ |/ /_/ / /_/ (__  ) /_/ /_/ / / /_/ / |/ / \n";
            cout << setw(155) << "/_/  |_/_/ /_/  |_/ .___/\\____/____/\\__/\\____/_/\\____/|___/  \n";
            cout << setw(155) << "                 /_/                                         \n";


            for (int i = 0; i < 3; i++)
                cout << "\n" << endl;

            cout << setw(160) << "    _________   ____                  __           _                 \n";
            cout << setw(160) << "   /  _/__  /  / __ \\____ _____  ____/ /___ ______(_)___  ____ _   __\n";
            cout << setw(160) << "   / /   / /  / / / / __ `/ __ \\/ __  / __ `/ ___/ / __ \\/ __ \\ | / /\n";
            cout << setw(160) << " _/ /   / /__/ /_/ / /_/ / / / / /_/ / /_/ / /  / / / / / /_/ / |/ / \n";
            cout << setw(160) << "/___/  /____/_____/\\__,_/_/ /_/\\__,_/\\__,_/_/  /_/_/ /_/\\____/|___/  \n";

            for (int i = 0; i < 1; i++)
                cout << "\n" << endl;

            cout << setw(125) << "...";

            break;
        case 3:
            system("cls");
            for (int i = 0; i < 14; i++)
                cout << "\n" << endl;


            cout << setw(170) << "   __                      ____                __           _______  __ __________\n";
            cout << setw(170) << "  / /___  ______  ___     / __ \\____  ___     / /_____     / ____/ |/ //  _/_  __/\n";
            cout << setw(170) << " / __/ / / / __ \\/ _ \\   / / / / __ \\/ _ \\   / __/ __ \\   / __/  |   / / /  / /   \n";
            cout << setw(170) << "/ /_/ /_/ / /_/ /  __/  / /_/ / / / /  __/  / /_/ /_/ /  / /___ /   |_/ /  / /    \n";
            cout << setw(170) << "\\__/\\__, / .___/\\___/   \\____/_/ /_/\\___/   \\__/\\____/  /_____//_/|_/___/ /_/     \n";
            cout << setw(170) << "   /____/_/                                                                       \n";


            for (int i = 0; i < 1; i++)
                cout << "\n" << endl;


            cout << setw(125) << "...";

            
            
        }


    } while (choice != 1);
  
}