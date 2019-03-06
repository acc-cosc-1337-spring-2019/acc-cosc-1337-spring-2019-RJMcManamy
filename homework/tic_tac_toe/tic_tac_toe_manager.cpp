#include "tic_tac_toe_manager.h"
#include <string>

//Write class function implementations here

void TicTacToeManager::save_game(TicTacToe game)
{
	std::string winnns = game.get_winner();
	games.push_back(game);
	update_winner_count(winnns);
}

void TicTacToeManager::display_history() const
{
	for (int v = 0; v < games.size(); v++)
	{
		games[v].display_board();
	}
	cout << "\n" << "X Wins: " << x_win << " O Wins: " << o_win << " Ties: " << ties;
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
	else
	{
		ties++;
	}
}
