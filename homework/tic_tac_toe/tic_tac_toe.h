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
	TicTacToe(int tsize) :pegs(tsize*tsize, " "){};
	void start_game(std::string first_player);
	bool game_over();
	void mark_board(int position);
	std::string get_player() const;
	std::string get_winner() const;

protected:
	std::vector<std::string> pegs{ 9, " " };
	virtual bool check_column_win()=0;
	virtual bool check_row_win()=0;
	virtual bool check_diagonal_win()=0;

private:
	std::string next_player = "X";
	void clear_board();
	bool check_board_full();
	void set_next_player();
	std::string winner;
	void set_winner();


	friend std::ostream& operator << (std::ostream &out, TicTacToe &tictactoe);
	friend std::istream& operator >> (std::istream &in, TicTacToe &tictactoe);
};



#endif

