#ifndef TIC_TAC_TOE_3
#define TIC_TAC_TOE_3
#include "tic_tac_toe.h"
#include<string>
#include<vector>

using std::string;

class TicTacToe3 : public TicTacToe 
{
public:
	TicTacToe3() : TicTacToe(GameType::three) {}
	/*
	1. Write a constructor with vector of string p and use an initializer
	   to initialize the TicTacToe object with p.
	*/
	TicTacToe3(std::vector<string> s): TicTacToe(s) {  }

private:
	bool check_column_win();
	bool check_row_win();
	bool check_diagonal_win();

};
#endif // !TIC_TAC_TOE_3
