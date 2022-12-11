#include <iostream>
#include <ctime>
#include <string>
#include <cstdlib>
#include <fstream>
#include <iomanip>

using namespace std;

void status()
{
	//variables used in the game
	int attempts = 6; //number of tries
	char guess;  // technically the answer that you will give
	char guessedLetters[7]; // array for letters that have been given as an anwser has to be larger than attempts
	guessedLetters[0] = '\0'; // first index will be set to null terminator.(null terminators usually declare the end of the string not the array and their lenght
	for (int i = 1; i < 6; i++)
	{
		guessedLetters[i] = '-'; // the whole array is now just the syb
	}
	guessedLetters[6] = '\0';

	bool correctGuess = false;

	string word; // the word the you will have to guess

	string wordList[20]; // the array with all the words

	srand(time(NULL)); //creates a random seed to use from the word array, time(NULL) represent the current time

	ifstream randomWord; //reads a random variable

	randomWord.open("Wordlist.txt"); // read whole file and stores it in randomWord

	for (int i = 0; i < 20; i++)
	{

		randomWord >> wordList[i]; // fills array with words form the wordlist.txt file

	}

	int randNum = rand() % 20; // gives a random number between 0 and 20, rand predifined function for generating random numbers

	word = wordList[randNum]; // randNum will essentialy be the index of this array and which ever index this may be the word coresponding to that index will be chosen

	randomWord.close(); // closes file to save memory

	string blankWord(word.length(), '_'); //swaps each letter of the word with _ and it is stored in blankWord;


	//end of random word generator



	// a while loop to display the status of the player

	while (attempts >= 0)
	{

		correctGuess = false; //reseting bool


		cout << "Try to guess the word: \n";


		cout << blankWord << endl;


		cout << "You have " << attempts << " attempts \n";


		if (guessedLetters[0] == '\0') //
		{

			cout << endl;

		}
		else
		{
			cout << "You have guessed: " << guessedLetters << endl;

		}

		cout << "\n\nYour guess: " << endl;

	
		cin >> guess;
		

		for (int i = 0; i < blankWord.length(); i++)
		{

			if (word[i] == guess) // checks if the word has the letter guess in it
			{

				blankWord[i] = guess;


				correctGuess = true; // if it does the boolean correctGuess now has a value of true and the letter you have guessed replaces the space that is equal to 
			}
			
		}
		if (word == blankWord) // if have every letter correct you win
		{

			cout << "Congratulations you have saved this man by guessing the word correctly: " << blankWord << endl;

			break;
		}
		if (correctGuess == false) // your guess has to be incorrect in order to lower your attempts
		{
			attempts--;


			cout << "You have guessed inccorrectly" << endl;
		}
		else
		{

			cout << "Your correct" << endl;
		}

		switch (attempts)
		{
		case 6:
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
			break;
		}
		case 5:
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


			if (correctGuess == false) // if your guess is false the guess you have entered will be printed in this array
			{
				guessedLetters[0] = guess;
			}


			break;
		}
		case 4:
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


			if (correctGuess == false)
			{
				guessedLetters[1] = guess; // also the same as before just changin the positon of the index to the next one
			}


			break;
		}
		case 3:
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


			if (correctGuess == false)



			{
				guessedLetters[2] = guess; // same here
			}
			break;
		}
		case 2:
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



			if (correctGuess == false)
			{
				guessedLetters[3] = guess; // here
			}


			break;
		}
		case 1:
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



			if (correctGuess == false)
			{
				guessedLetters[4] = guess; // and here
			}


			break;
		}
		case 0:
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


			attempts = -1; // after all the attempts are wasted just set their value to -1 so that the game can immediately end



			break;

		}


		default:


			cout << "Error" << endl; // in case there is an error (this should't be displayed)

		}

	}
	if (attempts < 0)
	{

		cout << "Game over!" << endl;


		cout << "\nThe word was: \n\n" << endl;


		cout << word;



	}
}   