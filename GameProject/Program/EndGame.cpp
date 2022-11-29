#include <iostream>
#include <vector>
#include "mainFunctions.h"
#include <iomanip>
using namespace std;



void endGame(string codeword, string answer)
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