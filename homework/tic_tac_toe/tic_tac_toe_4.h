#ifndef TIC_TAC_TOE_4
#define TIC_TAC_TOE_4
#include "tic_tac_toe.h"
#include<string>
#include<vector>

using std::string;

class TicTacToe4 : public TicTacToe
{
public:
	TicTacToe4() : TicTacToe(GameType::four) {}
	/*
	1. Write a constructor with vector of string p and use an initializer
	   to initialize the TicTacToe object with p.
	*/
	TicTacToe4(std::vector<string> p) : TicTacToe(p) {  }

private:
	bool check_column_win();
	bool check_row_win();
	bool check_diagonal_win();

};
#endif // !TIC_TAC_TOE_4
