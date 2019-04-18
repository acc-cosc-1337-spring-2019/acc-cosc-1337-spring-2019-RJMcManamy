#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"


/*
1. Write code to set the class variable games to the return value of data (class
variable) get_games function.
Call the set_scores function.
*/
TicTacToeManager::TicTacToeManager()
{
	
}

/*
2. After update_winner_count call data save_game function and pass the
game get_pegs return value to the function.
*/
void TicTacToeManager::save_game(std::unique_ptr<TicTacToe>& game)
{   
	update_winner_count(game->get_winner());
	games.push_back(std::move(game));
}

std::unique_ptr<TicTacToe> TicTacToeManager::get_game(GameType game_type)
{
	if (game_type == GameType::three) 
	{
		return std::make_unique<TicTacToe3>();
	}
	else 
	{
		return std::make_unique<TicTacToe4>();
	}
	
}

const std::vector<std::unique_ptr<TicTacToe>>& TicTacToeManager::get_games()
{
	return games;
}

void TicTacToeManager::update_winner_count(std::string winner)
{
	if (winner == "C") 
	{
		ties++;
	}
	else if (winner == "X") 
	{
		x_win++;
	}
	else if (winner == "O") 
	{
		o_win++;
	}
}

/*
3. Write code to set values of x_win, o_win and ties.
Iterate vector of games call get_winner function for each game
and add 1 to x_win, o_win or ties.
*/
void TicTacToeManager::set_scores()
{
	
}

void TicTacToeManager::get_winner_totals(int& x, int& o, int& c) 
{
	x = x_win;
	o = o_win;
	c = ties;
}

std::ostream & operator<<(std::ostream & out, const TicTacToeManager & t)
{
	for (auto& game : t.games)
	{
		out << *game;
	}

	out << "X wins: " << t.x_win << "\n";
	out << "O wins: " << t.o_win << "\n";
	out << "Ties: " << t.ties << "\n";

	return out;
}
