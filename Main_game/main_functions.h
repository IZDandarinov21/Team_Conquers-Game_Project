#pragma once
#include <iostream>
#include <vector>

using namespace std;

//define functions

void introduction();
void display_misses(int misses);
void display_status(std::vector<char> incorrect, string answer);
void end_game(string answer, string codeword);
void Menu();