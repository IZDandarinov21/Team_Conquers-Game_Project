#include <iostream>
#include <vector>
#include "mainFunctions.h"
#include <iomanip>

using namespace std;



void displayMisses(int misses)
{
   
    for (int i = 0; i < 3; i++)
        cout << "\n" << endl;
    if (misses == 0)
    {
         
        cout << setw(120) << " ___________.._______            \n";
        cout << setw(120) << "| .__________))______|           \n";
        cout << setw(120) << "| | / /      ||                  \n";
        cout << setw(120) << "| |/ /       ||                  \n";
        cout << setw(120) << "| | /        ||.-''.             \n";
        cout << setw(119) << "| |/         |/  _  \\           \n";
        cout << setw(120) << "| |          ||  `/,|            \n";
        cout << setw(117) << "| |          (\\`_.'           \n";
        cout << setw(120) << "| |         .-`--'.              \n";
        cout << setw(119) << "| |        /Y . . Y\\            \n";
        cout << setw(118) << "| |       // |   | \\\\          \n";
        cout << setw(118) << "| |      //  | . |  \\\\         \n";
        cout << setw(120) << "| |     ')   |   |   (`          \n";
        cout << setw(120) << "| |          ||'||               \n";
        cout << setw(120) << "| |          || ||               \n";
        cout << setw(120) << "| |          || ||               \n";
        cout << setw(120) << "| |          || ||               \n";
        cout << setw(119) << "| |         / | | \\             \n";
        cout << setw(120) << "'''''''''| _`-' `-' |''''''|     \n";
        cout << setw(118) << "|'| ''''' \\ \\       '''''|'|   \n";
        cout << setw(118) << "| |        \\ \\           | |   \n";
        cout << setw(118) << ": :         \\ \\          : :   \n";
        cout << setw(119) << " . .          `'          . .    \n";
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