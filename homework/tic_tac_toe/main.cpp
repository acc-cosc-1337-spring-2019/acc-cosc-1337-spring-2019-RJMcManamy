#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"

int main() 
{
	TicTacToeManager manage;
	int choice = 0;
	int size;
	do
	{
		TicTacToe* board;
		cout << "Would you like to play a 3x3 or a 4x4? ";
		cin >> size;
		int full_size = (size*size);
		if (size == 4)
		{
			board = new TicTacToe4();
		}
		else
		{
			board = new TicTacToe3();
		}
		board->start_game("X");
		for (int peg = 0; peg < full_size; peg++)
		{
			cin >> *board;
			cout << *board;
			if (board->game_over() == true)
			{
				break;
			}
		}
			
		manage.save_game(*board);
		cout << "\n" << "Press 1 to play again: ";
		cin >> choice;
		cout << "\n";
	} while (choice == 1);
	cout << manage;
	return 0;
}