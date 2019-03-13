#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"

int main() 
{
	TicTacToeManager manage;
	int choice = 0;
	do
	{
		TicTacToe board;
		board.start_game("X");
		for (int peg = 0; peg < 9; peg++)
		{
			cin << board;
			cout << board;
			if (board.game_over() == true)
			{
				break;
			}
		}
			
		manage.save_game(board);
		cout << "\n" << "Press 1 to play again: ";
		cin >> choice;
		cout << "\n";
	} while (choice == 1);
	cout << manage;
	return 0;
}