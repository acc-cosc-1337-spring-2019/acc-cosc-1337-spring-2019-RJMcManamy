#include "tic_tac_toe_data.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"

/*
Write the code to save a vector of string into a file.
After writing all the vector strings add a new line character "\n" to file.
Close the file.
Use the fstream object and file_name(class variable). Open the file_name for
writing and append.
*/
void TicTacToeData::save_game(const vector<string>& pegs)
{
	fstream saved_games(file_name, std::ios::out | std::ios::app);

	for (int p = 0; p <= pegs.size(); p++)
	{
		saved_games << pegs[p];
	}
	saved_games << "\n";
	saved_games.close();
}

/*
Read the file with fstream and file_name, open file for input(reading).
ALGORITHM:
Create unique ptr of TicTacToe boards
		  Open File
		  while file open
			 Create vector of string
			 get a line from file
			for each ch in line
			  Create a string with each ch use std::string(1, ch) to create the string

			Add the string to vector of string

			Create unique ptr of TicTacToe board

		   if vector peg size 9
			   create board of TicTacToe3 using make_unique
		   else
			   create board of TicTacToe4 using make_unique

			  add the board to the boards vector

		 close the file

		return the  vector  of TicTacToe
*/
vector<unique_ptr<TicTacToe>> TicTacToeData::get_games()
{
	vector<unique_ptr<TicTacToe>> games;

	fstream file(file_name, std::ios::in);

	vector<string> game;
	string line;
	while (getline(file, line))
	{
		for (auto ch : line)
		{
			game.push_back(std::string(1 ,ch));	
		}
		std::unique_ptr<TicTacToe> game1;
		if (line.size() == 9)
		{
			game1 = std::make_unique<TicTacToe3>(game);
		}
		else
		{
			game1 = std::make_unique<TicTacToe4>(game);
		}
		games.push_back(std::move(game1));
	}
	file.close();


	return games;
}
