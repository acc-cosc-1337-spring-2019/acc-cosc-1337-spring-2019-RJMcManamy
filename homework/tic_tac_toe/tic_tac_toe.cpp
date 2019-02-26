#include "tic_tac_toe.h"

void TicTacToe::start_game(std::string first_player)
{
	next_player = first_player;
}

void TicTacToe::mark_board(int position)
{
	for (int p = 0; p < pegs.size(); p++)
	{
		if (p == (position - 1))
		{
			pegs[p] = get_player();
		}
	}
}

void TicTacToe::display_board() const
{
	for (int p = 0; p < pegs.size(); p++)
	{
		cout << pegs[p];
		if (p == 2 || p == 5 || p == 8)
		{
			cout << "\n";
		}
	}
}

std::string TicTacToe::get_player() const
{
	return next_player;
}

bool TicTacToe::check_column_win()
{
	return false;
}

bool TicTacToe::check_row_win()
{
	return false;
}

bool TicTacToe::check_diagonal_win()
{
	return false;
}

void TicTacToe::set_next_player()
{
	if (next_player == "X")
	{
		next_player = "O";
	}
	else
	{
		next_player = "X";
	}
}

bool TicTacToe::game_over()
{
	if (check_column_win() == true || check_diagonal_win() == true || check_row_win() == true)
	{
		return true;
	}
	else
	{
		return false;
	}
}

