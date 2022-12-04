#include <iostream>
#include <vector>
#include "mainFunctions.h"
#include <iomanip>







void game()
{

    menu();
    introduction();
    string codeword = "coding";
    string answer = "______";
    vector<char> incorrect;
    int misses = 0;
    bool guess = false;
    char letter;



    while (answer != codeword && misses < 7)
    {
        displayMisses(misses);
        displayStatus(incorrect, codeword, answer);

        cout << "\n\nGuess: ";
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

    endGame(codeword, answer);


}

