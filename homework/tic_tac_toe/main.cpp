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
		int mark;
		for (int peg = 0; peg < 9; peg++)
		{
			cout << "Enter a position of 1-9 for " << board.get_player() << " ";
			cin >> mark;
			board.mark_board(mark);
			cout << "\n";
			board.display_board();
			if (board.game_over() == true)
			{
				cout << "Game Over";
				break;
			}
			/*if (board.game_over() == true && board.get_player() == "X")
			{
				cout << "Winner is O";
				break;
			}
			else if (board.game_over() == true && board.get_player() == "O")
			{
				cout << "Winner is X";
				break;
			}*/
			
		}
		manage.save_game(board);
		cout << "\n" << "Press 1 to play again: ";
		cin >> choice;
	} while (choice == 1);
	manage.display_history();
	return 0;
}