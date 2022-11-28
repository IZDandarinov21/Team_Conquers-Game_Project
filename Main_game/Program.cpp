#include <iostream>
#include "main_functions.h"
#include <iomanip>
using namespace std;




int main()
{
    cout << setw(120) << "Hangman" << endl;

    string choise;
    cin >> choise;
    system("cls");
    if (choise == "play")
    {

        game();
    }
    
}
