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
	if (game_over() == false)
	{
		set_next_player();
	}
}

std::string TicTacToe::get_player() const
{
	return next_player;
}

bool TicTacToe::check_column_win()
{
	if (pegs[0] == "X" && pegs[3] == "X" && pegs[6] == "X")
	{
		return true;
	}
	else if (pegs[0] == "O" && pegs[3] == "O" && pegs[6] == "O")
	{
		return true;
	}
	else if (pegs[1] == "X" && pegs[4] == "X" && pegs[7] == "X")
	{
		return true;
	}
	else if (pegs[1] == "O" && pegs[4] == "O" && pegs[7] == "O")
	{
		return true;
	}
	else if (pegs[2] == "X" && pegs[5] == "X" && pegs[8] == "X")
	{
		return true;
	}
	else if (pegs[2] == "O" && pegs[5] == "O" && pegs[8] == "O")
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool TicTacToe::check_row_win()
{
	if (pegs[0] == "X" && pegs[1] == "X" && pegs[2] == "X")
	{
		return true;
	}
	else if (pegs[0] == "O" && pegs[1] == "O" && pegs[2] == "O")
	{
		return true;
	}
	else if (pegs[3] == "X" && pegs[4] == "X" && pegs[5] == "X")
	{
		return true;
	}
	else if (pegs[3] == "O" && pegs[4] == "O" && pegs[5] == "O")
	{
		return true;
	}
	else if (pegs[6] == "X" && pegs[7] == "X" && pegs[8] == "X")
	{
		return true;
	}
	else if (pegs[6] == "O" && pegs[7] == "O" && pegs[8] == "O")
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool TicTacToe::check_diagonal_win()
{
	if (pegs[0] == "X" && pegs[4] == "X" && pegs[8] == "X")
	{
		return true;
	}
	else if (pegs[0] == "O" && pegs[4] == "O" && pegs[8] == "O")
	{
		return true;
	}
	else if (pegs[2] == "X" && pegs[4] == "X" && pegs[6] == "X")
	{
		return true;
	}
	else if (pegs[2] == "O" && pegs[4] == "O" && pegs[6] == "O")
	{
		return true;
	}
	else
	{
		return false;
	}
}

void TicTacToe::clear_board()
{
	for (int p = 0; p < pegs.size(); p++)
	{
		pegs[p] = " ";
	}
}

bool TicTacToe::check_board_full()
{
	bool full = false;
	for (int i = 0; i < pegs.size(); i++)
	{
		if (pegs[i] == "X" || pegs[i] == "O")
		{
			full = true;
		}
		else
		{
			full = false;
			break;
		}
	}
	return full;
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

void TicTacToe::set_winner()
{
	if (check_board_full() == true)
	{
		winner = "C";
	}
	else
	{
		winner = next_player;
	}

}

std::string TicTacToe::get_winner()const
{
	return winner;
}

bool TicTacToe::game_over()
{
	if (check_column_win() == true || check_diagonal_win() == true || check_row_win() == true || check_board_full() == true)
	{
		set_winner();
		return true;
	}
	else
	{
		return false;
	}
}

std::ostream & operator<<(std::ostream & out, TicTacToe & tictactoe)
{
	for (int p = 0; p < tictactoe.pegs.size(); p++)
	{
		out << tictactoe.pegs[p];
		if (p == 2 || p == 5 || p == 8)
		{
			cout << "\n";
		}
	}
	return out;
}

std::istream & operator<<(std::istream & in, TicTacToe & tictactoe)
{
	int mark;
	cout << "Enter a position of 1-9 for " << tictactoe.get_player() << " ";
	cin >> mark;
	tictactoe.mark_board(mark);
	cout << "\n";
	return in;
}
