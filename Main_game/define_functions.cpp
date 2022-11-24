#include <iostream>
#include <vector>
#include "main_functions.h"
#include <iomanip>

using namespace std;

//declare functions

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
