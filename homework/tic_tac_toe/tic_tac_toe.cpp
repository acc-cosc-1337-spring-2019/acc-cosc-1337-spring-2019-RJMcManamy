#include "tic_tac_toe.h"




void TicTacToe::start_game(std::string first_player)
{
	next_player = first_player;
}

void TicTacToe::mark_board(int position)
{
	pegs[position-1] = get_player();
	if (game_over() == false)
	{
		set_next_player();
	}
}

std::string TicTacToe::get_player() const
{
	return next_player;
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
		if (tictactoe.pegs.size() == 9)
		{
			if (p == 2 || p == 5 || p == 8)
			{
				cout << "\n";
			}
		}
		else if (tictactoe.pegs.size() == 16)
		{
			if (p == 3 || p == 7 || p == 11 || p == 15)
			{
				cout << "\n";
			}
		}
	}
	return out;
}

std::istream & operator>>(std::istream & in, TicTacToe & tictactoe)
{
	int mark;
	cout << "Enter a position of 1-" << tictactoe.pegs.size() <<" for " << tictactoe.get_player() << " ";
	cin >> mark;
	tictactoe.mark_board(mark);
	cout << "\n";
	return in;
}
