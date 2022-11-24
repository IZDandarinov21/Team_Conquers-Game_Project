#include <iostream>
#include "main_functions.h"
#include <fstream>

using namespace std;
int main()
{
    
    Menu();
    introduction();
    
    
    string codeword = "coding";
    string answer = "______";
    int misses = 0;
    vector<char> incorrect;
    bool guess = false;
    char letter;


    while (answer != codeword && misses < 7)
    {
        display_misses(misses);
        display_status(incorrect, answer);

        cout <<"\n\nGuess: ";
        cin >> letter;

        for (int i = 0; i < codeword.size(); i++)
        {
            if (letter == codeword[i])
            {
                answer[i] = letter;
                guess = true;
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

    end_game(answer, codeword);

    return 0;
}