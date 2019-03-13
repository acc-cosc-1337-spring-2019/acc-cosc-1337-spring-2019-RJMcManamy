#include "tic_tac_toe.h"
#include <vector>
#include <string>
#include <iostream>
#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H
//Write class interface here

using std::cout;

class TicTacToeManager 
{
public:
	void save_game(const TicTacToe game);
	friend std::ostream& operator << (std::ostream &out, TicTacToeManager &manager);

private:
	std::vector<TicTacToe> games;
	int x_win = 0;
	int o_win = 0;
	int ties = 0;
	void update_winner_count(std::string winner);
};



#endif // !TIC_TAC_TOE_MANAGER_H
