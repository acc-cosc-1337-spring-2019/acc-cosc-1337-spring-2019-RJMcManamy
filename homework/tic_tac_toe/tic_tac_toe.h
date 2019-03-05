#include<string>
#include<vector>
#include<iostream>
#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

using std::cout;
using std::cin;

class TicTacToe 
{
public:
	void start_game(std::string first_player);
	bool game_over();
	void mark_board(int position);
	void display_board() const;
	std::string get_player() const;
	std::string get_winner();
private:
	std::string next_player = "X";
	std::vector<std::string> pegs{ 9, " " };
	bool check_column_win();
	bool check_row_win();
	bool check_diagonal_win();
	void clear_board();
	bool check_board_full();
	void set_next_player();
	std::string winner;
	void set_winner();

};

#endif