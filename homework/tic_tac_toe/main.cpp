#include "tic_tac_toe.h"

int main() 
{
	TicTacToe board;
	board.start_game("X");
	board.display_board();
	return 0;
}