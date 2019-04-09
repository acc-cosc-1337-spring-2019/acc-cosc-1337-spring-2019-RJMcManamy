#include "tic_tac_toe.h"
#include <vector>
#include <string>
#include <iostream>
#include <memory>
#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H
//Write class interface here

using std::cout;

class TicTacToeManager 
{
public:
	void save_game(std::unique_ptr<TicTacToe>& game);
	std::unique_ptr<TicTacToe> get_game(int game_type);
	friend std::ostream& operator << (std::ostream &out, TicTacToeManager &manager);
	const std::vector<std::unique_ptr<TicTacToe>>& get_games();
	void get_winner_totals(int& x, int& o, int& c);

private:
	std::vector<std::unique_ptr<TicTacToe>> games;
	int x_win = 0;
	int o_win = 0;
	int ties = 0;
	void update_winner_count(std::string winner);
};



#endif // !TIC_TAC_TOE_MANAGER_H
