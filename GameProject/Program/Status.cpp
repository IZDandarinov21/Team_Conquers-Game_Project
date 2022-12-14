#include <iostream>
#include <ctime>
#include <string>
#include <cstdlib>
#include <fstream>
#include <iomanip>
#include "MainFunctions.h"

using namespace std;

void status()
{
	int themeChoice; // variable for selectiong your theme
	int exit; // variable used to play the game agin or go back to the menu(but only if you guess the word incorrectly)
	int play; // variable used to play the game agin or go back to the menu(only if get guess the word correctly)
	int attempts = 5; //number of tries
	char guess;  // technically the answer that you will give
	char guessedLetters[6]; // array for letters that have been given as an anwser has to be larger than attempts
	guessedLetters[0] = '\0'; // first index will be set to null terminator.(null terminators usually declare the end of the string not the array and their lenght)
	for (int i = 1; i < 5; i++)
	{
		guessedLetters[i] = '-'; // the whole array is now just the syb
	}
	guessedLetters[5] = '\0';

	bool correctGuess = false;

	string word; // the word the you will have to guess

	string wordList[20]; // the array with all the words

	srand((unsigned int)time(0)); //creates a random seed to use from the word array, time(NULL) represent the current time

	ifstream randomWord; //reads a random variable
	
	for (int i = 0; i < 3; i++)
		cout << "\n" << endl;

	cout << setw(155)<<"   _____      __          __     __  __                      \n";
	cout << setw(155)<<"  / ___/___  / /__  _____/ /_   / /_/ /_  ___  ____ ___  ___ \n";
	cout << setw(155)<<"  \\__ \\/ _ \\/ / _ \\/ ___/ __/  / __/ __ \\/ _ \\/ __ `__ \\/ _ \\\n";
	cout << setw(155)<<" ___/ /  __/ /  __/ /__/ /_   / /_/ / / /  __/ / / / / /  __/\n";
	cout << setw(155)<<"/____/\\___/_/\\___/\\___/\\__/   \\__/_/ /_/\\___/_/ /_/ /_/\\___/ \n";
	
	for (int i = 0; i < 3; i++)
		cout << "\n" << endl;

	cout << "  ____             ___           _____        ___          \n";
	cout << " / __ \\___  ___   / _/__  ____  / ___/__  ___/ (_)__  ___ _\n";
	cout << "/ /_/ / _ \\/ -_) / _/ _ \\/ __/ / /__/ _ \\/ _  / / _ \\/ _ `/\n";
	cout << "\\____/_//_/\\__/ /_/ \\___/_/    \\___/\\___/\\_,_/_/_//_/\\_, / \n";
	cout << "                                                    /___/  \n";

	for (int i = 0; i < 1; i++)
		cout << "\n" << endl;


	cout <<"  __                ___           ____                 \n";
	cout <<" / /__    _____    / _/__  ____  / __/__  ___ ________ \n";
	cout <<"/ __/ |/|/ / _ \\  / _/ _ \\/ __/ _\\ \\/ _ \\/ _ `/ __/ -_)\n";
	cout <<"\\__/|__,__/\\___/ /_/ \\___/_/   /___/ .__/\\_,_/\\__/\\__/ \n";


	for (int i = 0; i < 1; i++)
		cout << "\n" << endl;

	cout << "  __  __                 ___           ____             __\n";
	cout << " / /_/ /  _______ ___   / _/__  ____  / __/__  ___  ___/ /\n";
	cout << "/ __/ _ \\/ __/ -_) -_) / _/ _ \\/ __/ / _// _ \\/ _ \\/ _  / \n";
	cout << "\\__/_//_/_/  \\__/\\__/ /_/ \\___/_/   /_/  \\___/\\___/\\_,_/  \n";

	for (int i = 0; i < 1; i++)
		cout << "\n" << endl;

	cout << setw(25) << "...";

	cin >> themeChoice;
	while (themeChoice != 1 && themeChoice != 2 && themeChoice != 3)
	{
		for (int i = 0; i < 1; i++)
			cout << "\n" << endl;
		cout << setw(38) << "please type 1 or 2 or 3\n";
		for (int i = 0; i < 1; i++)
			cout << "\n" << endl;
		cout << setw(25) << "...";
		cin >> themeChoice;
	}
	if (themeChoice == 1)
	{
		randomWord.open("codingTheme.txt"); // read whole file and stores it in randomWord
	}
	if (themeChoice == 2)
	{
		randomWord.open("spaceTheme.txt"); // read whole file and stores it in randomWord
	}
	if (themeChoice == 3)
	{
		randomWord.open("foodTheme.txt"); // read whole file and stores it in randomWord
	}
	

	
	
	
	
	
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


		for (int i = 0; i < 4; i++)
			cout << "\n" << endl;

		cout <<" _____                                        \n";
		cout <<"/__   \\_ __ _   _    __ _ _   _  ___  ___ ___ \n";
		cout <<"  / /\\/ '__| | | |  / _` | | | |/ _ \\/ __/ __|\n";
		cout <<" / /  | |  | |_| | | (_| | |_| |  __/\\__ \\__ \\\n";
		cout <<" \\/   |_|   \\__, |  \\__, |\\__,_|\\___||___/___/\n";
		cout <<"            |___/   |___/                     \n";


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

		cout << "/\\_/\\___  _   _ _ __    __ _ _   _  ___  ___ ___ \n";
		cout << "\\_ _/ _ \\| | | | '__|  / _` | | | |/ _ \\/ __/ __|\n";
		cout << " / \\ (_) | |_| | |    | (_| | |_| |  __/\\__ \\__ \\\n";
		cout << " \\_/\\___/ \\__,_|_|     \\__, |\\__,_|\\___||___/___/\n";
		cout << "                       |___/                     \n";

		for (int i = 0; i < 1; i++)
			cout << "\n" << endl;

		cout << setw(25) << "...";
		
		
		
		

	
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
			system("cls");
			for (int i = 0; i < 7; i++)
				cout << "\n" << endl;

			cout << setw(145) << "__  __               _       _______   __\n";
			cout << setw(145) << "\\ \\/ /___  __  __   | |     / /  _/ | / /\n";
			cout << setw(145) << " \\  / __ \\/ / / /   | | /| / // //  |/ / \n";
			cout << setw(145) << " / / /_/ / /_/ /    | |/ |/ // // /|  /  \n";
			cout << setw(145) << "/_/\\____/\\__,_/     |__/|__/___/_/ |_/   \n";
			
			for (int i = 0; i < 2; i++)
				cout << "\n" << endl;

			cout << " _____ _                                  _                         \n";
			cout << "/__   \\ |__   ___  __      _____  _ __ __| | __      ____ _ ___   _ \n";
			cout << "  / /\\/ '_ \\ / _ \\ \\ \\ /\\ / / _ \\| '__/ _` | \\ \\ /\\ / / _` / __| (_)\n";
			cout << " / /  | | | |  __/  \\ V  V / (_) | | | (_| |  \\ V  V / (_| \\__ \\  _ \n";
			cout << " \\/   |_| |_|\\___|   \\_/\\_/ \\___/|_|  \\__,_|   \\_/\\_/ \\__,_|___/ (_)\n";


			for (int i = 0; i < 3; i++)
				cout << "\n" << endl;

			cout << setw(35) << word << endl;

			for (int i = 0; i < 5; i++)
				cout << "\n" << endl;

			cout << setw(170) << "   __                      ______   __                 __                                 _     \n";
			cout << setw(170) << "  / /___  ______  ___     / ____/  / /_____     ____  / /___ ___  __   ____ _____ _____ _(_)___ \n";
			cout << setw(170) << " / __/ / / / __ \\/ _ \\   /___ \\   / __/ __ \\   / __ \\/ / __ `/ / / /  / __ `/ __ `/ __ `/ / __ \\\n";
			cout << setw(170) << "/ /_/ /_/ / /_/ /  __/  ____/ /  / /_/ /_/ /  / /_/ / / /_/ / /_/ /  / /_/ / /_/ / /_/ / / / / /\n";
			cout << setw(170) << "\\__/\\__, / .___/\\___/  /_____/   \\__/\\____/  / .___/_/\\__,_/\\__, /   \\__,_/\\__, /\\__,_/_/_/ /_/ \n";
			cout << setw(170) << "   /____/_/                                 /_/            /____/         /____/                \n";

			for (int i = 0; i < 1; i++)
				cout << "\n" << endl;

			cout << setw(162) << "   __                      _____    ____                                        \n";
			cout << setw(162) << "  / /___  ______  ___     / ___/   / __/___  _____   ____ ___  ___  ____  __  __\n";
			cout << setw(162) << " / __/ / / / __ \\/ _ \\   / __ \\   / /_/ __ \\/ ___/  / __ `__ \\/ _ \\/ __ \\/ / / /\n";
			cout << setw(162) << "/ /_/ /_/ / /_/ /  __/  / /_/ /  / __/ /_/ / /     / / / / / /  __/ / / / /_/ / \n";
			cout << setw(162) << "\\__/\\__, / .___/\\___/   \\____/  /_/  \\____/_/     /_/ /_/ /_/\\___/_/ /_/\\__,_/  \n";
			cout << setw(162) << "   /____/_/                                                                     \n";

			for (int i = 0; i < 1; i++)
				cout << "\n" << endl;

			cout << setw(125) << "...";

			break;
		}
		

		
		if (correctGuess == false) // your guess has to be incorrect in order to lower your attempts
		{
			attempts--;

			for (int i = 0; i < 3; i++)
				cout << "\n" << endl;

			cout << setw(155) << " _       __                                                    \n";
			cout << setw(155) << "| |     / /________  ____  ____ _   ____ ___  _____  __________\n";
			cout << setw(155) << "| | /| / / ___/ __ \\/ __ \\/ __ `/  / __ `/ / / / _ \\/ ___/ ___/\n";
			cout << setw(155) << "| |/ |/ / /  / /_/ / / / / /_/ /  / /_/ / /_/ /  __(__  |__  ) \n";
			cout << setw(155) << "|__/|__/_/   \\____/_/ /_/\\__, /   \\__, /\\__,_/\\___/____/____/  \n";
			cout << setw(155) << "                        /____/   /____/                        \n";

			for (int i = 0; i < 2; i++)
				cout << "\n" << endl;

		}
		else
		{
			for (int i = 0; i < 3; i++)
				cout << "\n" << endl;

			cout <<setw(155)<< "   ______                          __                               \n";
			cout <<setw(155)<< "  / ____/___  _____________  _____/ /_   ____ ___  _____  __________\n";
			cout <<setw(155)<< " / /   / __ \\/ ___/ ___/ _ \\/ ___/ __/  / __ `/ / / / _ \\/ ___/ ___/\n";
			cout <<setw(155)<< "/ /___/ /_/ / /  / /  /  __/ /__/ /_   / /_/ / /_/ /  __(__  |__  ) \n";
			cout <<setw(155)<< "\\____/\\____/_/  /_/   \\___/\\___/\\__/   \\__, /\\__,_/\\___/____/____/  \n";
			cout <<setw(155)<<"                                      /____/                        \n";

			for (int i = 0; i < 2; i++)
				cout << "\n" << endl;

			
		}

		switch (attempts)
		{
		
		case 5:
		{
			for (int i = 0; i < 3; i++)
				cout << "\n" << endl;
			cout << setw(140) << " ___________.._______            \n";
			cout << setw(140) << "| .__________))______|           \n";
			cout << setw(140) << "| | / /      ||                  \n";
			cout << setw(140) << "| |/ /       ||                  \n";
			cout << setw(140) << "| | /        ||.-''.             \n";
			cout << setw(139) << "| |/         |/  _  \\           \n";
			cout << setw(140) << "| |          ||  `/,|            \n";
			cout << setw(137) << "| |          (\\`_.'           \n";
			cout << setw(140) << "| |         .-`--'.              \n";
			cout << setw(139) << "| |        /Y . . Y\\            \n";
			cout << setw(138) << "| |       // |   | \\\\          \n";
			cout << setw(138) << "| |      //  | . |  \\\\         \n";
			cout << setw(140) << "| |     ')   |   |   (`          \n";
			cout << setw(140) << "| |          ||'||               \n";
			cout << setw(140) << "| |          || ||               \n";
			cout << setw(140) << "| |          || ||               \n";
			cout << setw(140) << "| |          || ||               \n";
			cout << setw(139) << "| |         / | | \\             \n";
			cout << setw(140) << "'''''''''| _`-' `-' |''''''|     \n";
			cout << setw(138) << "|'| ''''' \\ \\       '''''|'|   \n";
			cout << setw(138) << "| |        \\ \\           | |   \n";
			cout << setw(138) << ": :         \\ \\          : :   \n";
			cout << setw(139) << " . .          `'          . .    \n";


			

			break;
		}
		case 4:
		{
			for (int i = 0; i < 3; i++)
				cout << "\n" << endl;
			cout << setw(140) << " ___________.._______            \n";
			cout << setw(140) << "| .__________))______|           \n";
			cout << setw(140) << "| | / /      ||                  \n";
			cout << setw(140) << "| |/ /       ||                  \n";
			cout << setw(140) << "| | /        ||.-''.             \n";
			cout << setw(139) << "| |/         |/  _  \\           \n";
			cout << setw(140) << "| |          ||  `/,|            \n";
			cout << setw(137) << "| |          (\\`_.'           \n";
			cout << setw(140) << "| |         .-`--'.              \n";
			cout << setw(139) << "| |        /Y . . Y\\            \n";
			cout << setw(138) << "| |       // |   | \\\\          \n";
			cout << setw(138) << "| |      //  | . |  \\\\         \n";
			cout << setw(140) << "| |     ')   |   |   (`          \n";
			cout << setw(140) << "| |          ||'||               \n";
			cout << setw(140) << "| |          || ||               \n";
			cout << setw(140) << "| |          || ||               \n";
			cout << setw(140) << "| |          || ||               \n";
			cout << setw(139) << "| |         / | | \\             \n";
			cout << setw(140) << "'''''''''| _`-' `-' |''''''|     \n";
			cout << setw(138) << "|'| ''''' \\ \\       '''''|'|   \n";
			cout << setw(138) << "| |        \\ \\           | |   \n";
			cout << setw(138) << ": :         \\ \\          : :   \n";
			cout << setw(139) << " . .          `'          . .    \n";

			if (correctGuess == false) // if your guess is false the guess you have entered will be printed in this array
			{
				guessedLetters[0] = guess;
			}
			


			break;
		}
		case 3:
		{
			for (int i = 0; i < 3; i++)
				cout << "\n" << endl;
			cout << setw(140) << " ___________.._______            \n";
			cout << setw(140) << "| .__________))______|           \n";
			cout << setw(140) << "| | / /      ||                  \n";
			cout << setw(140) << "| |/ /       ||                  \n";
			cout << setw(140) << "| | /        ||.-''.             \n";
			cout << setw(139) << "| |/         |/  _  \\           \n";
			cout << setw(140) << "| |          ||  `/,|            \n";
			cout << setw(137) << "| |          (\\`_.'           \n";
			cout << setw(140) << "| |         .-`--'.              \n";
			cout << setw(139) << "| |        /Y . . Y\\            \n";
			cout << setw(138) << "| |       // |   | \\\\          \n";
			cout << setw(138) << "| |      //  | . |  \\\\         \n";
			cout << setw(140) << "| |     ')   |   |   (`          \n";
			cout << setw(140) << "| |          ||'||               \n";
			cout << setw(140) << "| |          || ||               \n";
			cout << setw(140) << "| |          || ||               \n";
			cout << setw(140) << "| |          || ||               \n";
			cout << setw(139) << "| |         / | | \\             \n";
			cout << setw(140) << "'''''''''| _`-' `-' |''''''|     \n";
			cout << setw(138) << "|'| ''''' \\ \\       '''''|'|   \n";
			cout << setw(138) << "| |        \\ \\           | |   \n";
			cout << setw(138) << ": :         \\ \\          : :   \n";
			cout << setw(139) << " . .          `'          . .    \n";

			if (correctGuess == false)
			{
				guessedLetters[1] = guess; // also the same as before just changin the positon of the index to the next one
			}
			
			break;
		}
		case 2:
		{
			for (int i = 0; i < 3; i++)
				cout << "\n" << endl;
			cout << setw(140) << " ___________.._______            \n";
			cout << setw(140) << "| .__________))______|           \n";
			cout << setw(140) << "| | / /      ||                  \n";
			cout << setw(140) << "| |/ /       ||                  \n";
			cout << setw(140) << "| | /        ||.-''.             \n";
			cout << setw(139) << "| |/         |/  _  \\           \n";
			cout << setw(140) << "| |          ||  `/,|            \n";
			cout << setw(137) << "| |          (\\`_.'           \n";
			cout << setw(140) << "| |         .-`--'.              \n";
			cout << setw(139) << "| |        /Y . . Y\\            \n";
			cout << setw(138) << "| |       // |   | \\\\          \n";
			cout << setw(138) << "| |      //  | . |  \\\\         \n";
			cout << setw(140) << "| |     ')   |   |   (`          \n";
			cout << setw(140) << "| |          ||'||               \n";
			cout << setw(140) << "| |          || ||               \n";
			cout << setw(140) << "| |          || ||               \n";
			cout << setw(140) << "| |          || ||               \n";
			cout << setw(139) << "| |         / | | \\             \n";
			cout << setw(140) << "'''''''''| _`-' `-' |''''''|     \n";
			cout << setw(138) << "|'| ''''' \\ \\       '''''|'|   \n";
			cout << setw(138) << "| |        \\ \\           | |   \n";
			cout << setw(138) << ": :         \\ \\          : :   \n";
			cout << setw(139) << " . .          `'          . .    \n";

			if (correctGuess == false)



			{
				guessedLetters[2] = guess; // same here
			}

			


			break;
		}
		case 1:
		{
			for (int i = 0; i < 3; i++)
				cout << "\n" << endl;
			cout << setw(140) << " ___________.._______            \n";
			cout << setw(140) << "| .__________))______|           \n";
			cout << setw(140) << "| | / /      ||                  \n";
			cout << setw(140) << "| |/ /       ||                  \n";
			cout << setw(140) << "| | /        ||.-''.             \n";
			cout << setw(139) << "| |/         |/  _  \\           \n";
			cout << setw(140) << "| |          ||  `/,|            \n";
			cout << setw(137) << "| |          (\\`_.'           \n";
			cout << setw(140) << "| |         .-`--'.              \n";
			cout << setw(139) << "| |        /Y . . Y\\            \n";
			cout << setw(138) << "| |       // |   | \\\\          \n";
			cout << setw(138) << "| |      //  | . |  \\\\         \n";
			cout << setw(140) << "| |     ')   |   |   (`          \n";
			cout << setw(140) << "| |          ||'||               \n";
			cout << setw(140) << "| |          || ||               \n";
			cout << setw(140) << "| |          || ||               \n";
			cout << setw(140) << "| |          || ||               \n";
			cout << setw(139) << "| |         / | | \\             \n";
			cout << setw(140) << "'''''''''| _`-' `-' |''''''|     \n";
			cout << setw(138) << "|'| ''''' \\ \\       '''''|'|   \n";
			cout << setw(138) << "| |        \\ \\           | |   \n";
			cout << setw(138) << ": :         \\ \\          : :   \n";
			cout << setw(139) << " . .          `'          . .    \n";
			if (correctGuess == false)
			{
				guessedLetters[3] = guess; // here
			}


			


			break;
		}
		case 0:
		{
			cout << setw(140) << " ___________.._______            \n";
			cout << setw(140) << "| .__________))______|           \n";
			cout << setw(140) << "| | / /      ||                  \n";
			cout << setw(140) << "| |/ /       ||                  \n";
			cout << setw(140) << "| | /        ||.-''.             \n";
			cout << setw(139) << "| |/         |/  _  \\           \n";
			cout << setw(140) << "| |          ||  `/,|            \n";
			cout << setw(137) << "| |          (\\`_.'           \n";
			cout << setw(140) << "| |         .-`--'.              \n";
			cout << setw(139) << "| |        /Y . . Y\\            \n";
			cout << setw(138) << "| |       // |   | \\\\          \n";
			cout << setw(138) << "| |      //  | . |  \\\\         \n";
			cout << setw(140) << "| |     ')   |   |   (`          \n";
			cout << setw(140) << "| |          ||'||               \n";
			cout << setw(140) << "| |          || ||               \n";
			cout << setw(140) << "| |          || ||               \n";
			cout << setw(140) << "| |          || ||               \n";
			cout << setw(139) << "| |         / | | \\             \n";
			cout << setw(140) << "'''''''''| _`-' `-' |''''''|     \n";
			cout << setw(138) << "|'| ''''' \\ \\       '''''|'|   \n";
			cout << setw(138) << "| |        \\ \\           | |   \n";
			cout << setw(138) << ": :         \\ \\          : :   \n";
			cout << setw(139) << " . .          `'          . .    \n";

			system("cls");
			attempts = -1; // after all the attempts are wasted just set their value to -1 so that the game can immediately end



			break;

		}


		default:


			cout << "Error" << endl; // in case there is an error (this should't be displayed)

		}

	}
	if (attempts < 0)
	{
		for (int i = 0; i < 7; i++)
			cout << "\n" << endl;

		cout << setw(153)<<"   ______                                            \n";
		cout << setw(153)<<"  / ____/___ _____ ___  ___     ____ _   _____  _____\n";
		cout << setw(153)<<" / / __/ __ `/ __ `__ \\/ _ \\   / __ \\ | / / _ \\/ ___/\n";
		cout << setw(153)<<"/ /_/ / /_/ / / / / / /  __/  / /_/ / |/ /  __/ /    \n";
		cout << setw(153)<<"\\____/\\__,_/_/ /_/ /_/\\___/   \\____/|___/\\___/_/     \n";
		
		for (int i = 0; i < 2; i++)
			cout << "\n" << endl;

		cout << " _____ _                                  _                         \n";
		cout << "/__   \\ |__   ___  __      _____  _ __ __| | __      ____ _ ___   _ \n";
		cout << "  / /\\/ '_ \\ / _ \\ \\ \\ /\\ / / _ \\| '__/ _` | \\ \\ /\\ / / _` / __| (_)\n";
		cout << " / /  | | | |  __/  \\ V  V / (_) | | | (_| |  \\ V  V / (_| \\__ \\  _ \n";
		cout << " \\/   |_| |_|\\___|   \\_/\\_/ \\___/|_|  \\__,_|   \\_/\\_/ \\__,_|___/ (_)\n";


		for (int i = 0; i < 3; i++)
			cout << "\n" << endl;

		cout << setw(35)<< word << endl;

		for (int i = 0; i < 5; i++)
			cout << "\n" << endl;

		cout << setw(170) <<"   __                      ______   __                 __                                 _     \n";
		cout << setw(170) <<"  / /___  ______  ___     / ____/  / /_____     ____  / /___ ___  __   ____ _____ _____ _(_)___ \n";
		cout << setw(170) <<" / __/ / / / __ \\/ _ \\   /___ \\   / __/ __ \\   / __ \\/ / __ `/ / / /  / __ `/ __ `/ __ `/ / __ \\\n";
		cout << setw(170) <<"/ /_/ /_/ / /_/ /  __/  ____/ /  / /_/ /_/ /  / /_/ / / /_/ / /_/ /  / /_/ / /_/ / /_/ / / / / /\n";
		cout << setw(170) <<"\\__/\\__, / .___/\\___/  /_____/   \\__/\\____/  / .___/_/\\__,_/\\__, /   \\__,_/\\__, /\\__,_/_/_/ /_/ \n";
		cout << setw(170) <<"   /____/_/                                 /_/            /____/         /____/                \n";
		
		for (int i = 0; i < 1; i++)
			cout << "\n" << endl;

		cout << setw(162) << "   __                      _____    ____                                        \n";
		cout << setw(162) << "  / /___  ______  ___     / ___/   / __/___  _____   ____ ___  ___  ____  __  __\n";
		cout << setw(162) << " / __/ / / / __ \\/ _ \\   / __ \\   / /_/ __ \\/ ___/  / __ `__ \\/ _ \\/ __ \\/ / / /\n";
		cout << setw(162) << "/ /_/ /_/ / /_/ /  __/  / /_/ /  / __/ /_/ / /     / / / / / /  __/ / / / /_/ / \n";
		cout << setw(162) << "\\__/\\__, / .___/\\___/   \\____/  /_/  \\____/_/     /_/ /_/ /_/\\___/_/ /_/\\__,_/  \n";
		cout << setw(162) << "   /____/_/                                                                     \n";

		for (int i = 0; i < 1; i++)
			cout << "\n" << endl;

		
		cout << setw(125) << "...";


	}
	cin >> exit;
	while (exit != 5 && exit != 6)
	{
		for (int i = 0; i < 1; i++)
			cout << "\n" << endl;
		cout << setw(125) << "...";
		cin >> exit;
		
	}
	if (exit == 5)
	{
		system("cls");
		introduction();
		status();
	}
	if (exit == 6)
	{
		system("cls");
		menu();
	}
	
	if (word == blankWord)
	{

		cin >> play;
		while (play != 5 && play != 6)
		{
			cin >> play;
		}
		if (play == 5)
		{
			system("cls");
			introduction();
			status();
		}
		if (play == 6)
		{
			system("cls");
			menu();
		}
		
	}
}   