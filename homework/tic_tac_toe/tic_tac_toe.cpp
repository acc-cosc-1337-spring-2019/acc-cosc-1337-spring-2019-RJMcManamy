#include "tic_tac_toe.h"
#include<iostream>
#include<math.h>

void TicTacToe::start_game(std::string first_player)
{
	next_player = first_player;
	clear_board();
}

std::string TicTacToe::get_player() const
{
	return next_player;
}

bool TicTacToe::game_over()
{
	if(check_column_win() || check_row_win() || check_diagonal_win() || check_board_full())
	{
		set_winner();
		return true;
	}

	return false;
}

void TicTacToe::mark_board(int position)
{
	pegs[position - 1] = next_player;

	if (!game_over())
	{
		set_next_player();
	}
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

void TicTacToe::clear_board()
{
	for (auto& p : pegs)
	{
		p = " ";
	}
}

bool TicTacToe::check_board_full()
{
	for (auto p : pegs) 
	{
		if (p == " ") 
		{
			return false;
		}
	}

	return true;
}

std::string TicTacToe::get_winner() const
{
	return winner;
}

void TicTacToe::set_winner() 
{
	if (check_board_full()) 
	{
		winner = "C";
	}
	else 
	{
		winner = next_player;
	}
}

const std::vector<std::string>& TicTacToe::get_pegs() 
{
	return pegs;
}

/*
Write code to determine winner.
If board full game is a tie return.
  otherwise
  Iterate vector of string and count Xs, and 0s compare x to o count to determine winner, set the winner class string variable
*/
void TicTacToe::determine_winner() 
{
	if (check_board_full() == true)
	{
		winner = "C";
	}
	else
	{
		int x = 0;
		int o = 0;
		for (auto s : pegs)
		{
			if ("X")
			{
				x++;
			}
			else
			{
				o++;
			}
			
		}
		if (x > o)
		{
			winner = "X";
		}
		else
		{
			winner = "O";
		}
		
	}
}

std::ostream & operator<<(std::ostream & out, const TicTacToe & t)
{
	for (std::size_t i = 0; i < t.pegs.size(); i += sqrt(t.pegs.size()))
	{
		std::cout << t.pegs[i] << "|" << t.pegs[i + 1] << "|" << t.pegs[i + 2];
		
		if (t.pegs.size() == 16) 
		{
			std::cout <<"|" << t.pegs[i + 3];
		}
		
		std::cout<< "\n";
	}

	return out;
}

std::istream & operator>>(std::istream & in, TicTacToe & t)
{
	int position;
	std::cout << "Enter position[1-9]: ";
	in >> position;
	t.mark_board(position);

	return in;
}
