#include <iostream>
#include <vector>
#include "main_functions.h"
#include <iomanip>
using namespace std;

void display_status(vector <char> incorrect, string codeword, string answer)
{
    
    
    cout << "Wrong answers:" << endl;

    for (int i = 0; i < incorrect.size(); i++)
    {
        cout << incorrect[i] << " ";
    }

    cout << "\nCodeword:" << endl;

    for (int i = 0; i < answer.size(); i++)
    {
        cout << answer[i] << " ";
    }
}