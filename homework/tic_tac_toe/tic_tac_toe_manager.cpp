#include "tic_tac_toe_manager.h"
#include <string>

//Write class function implementations here

void TicTacToeManager::save_game(const TicTacToe game)
{
	games.push_back(game);
	update_winner_count(games.back().get_winner());
}

void TicTacToeManager::update_winner_count(std::string winner)
{
	if (winner == "X")
	{
		x_win++;
	}
	else if (winner == "O")
	{
		o_win++;
	}
	else if(winner == "C")
	{
		ties++;
	}
}

std::ostream & operator<<(std::ostream & out, TicTacToeManager & manager)
{
	for (int v = 0; v < manager.games.size(); v++)
	{
		cout << manager.games[v];
	}
	cout << "\n" << "X Wins: " << manager.x_win << " O Wins: " << manager.o_win << " Ties: " << manager.ties;

	return out;
}
