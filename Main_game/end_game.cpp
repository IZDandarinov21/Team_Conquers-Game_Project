#include <iostream>
#include <vector>
#include "main_functions.h"
#include <iomanip>
using namespace std;



void end_game(string codeword, string answer)
{
    
    if (answer == codeword)
    {
        cout << "Good job you saved the man from being hanged!" << endl;
        cout << "Congratulations!" << endl;
    }
    else
    {
        cout << "Oh, NO the man was hanged!" << endl;
    }

}