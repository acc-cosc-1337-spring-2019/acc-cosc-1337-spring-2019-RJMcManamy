#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include <string>

//Write class function implementations here

void TicTacToeManager::save_game(std::unique_ptr<TicTacToe>& game)
{
	update_winner_count(game->get_winner());
	games.push_back(std::move(game));
}

std::unique_ptr<TicTacToe> TicTacToeManager::get_game(int game_type)
{
	if (game_type == 3)
	{
		return std::make_unique<TicTacToe3>();
	}
	else
	{
		return std::make_unique<TicTacToe4>();
	}
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
	for (auto& game : manager.games)
	{
		out << *game;
	}
	cout << "\n" << "X Wins: " << manager.x_win << " O Wins: " << manager.o_win << " Ties: " << manager.ties;

	return out;
}
