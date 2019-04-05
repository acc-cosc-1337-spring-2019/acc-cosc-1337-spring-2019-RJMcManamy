#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"

int main() 
{
	std::unique_ptr<TicTacToeManager> manager = std::make_unique<TicTacToeManager>();
	int choice = 0;
	int size;
	do
	{
		std::unique_ptr<TicTacToe> board;
		cout << "Would you like to play a 3x3 or a 4x4? ";
		cin >> size;

		board = manager->get_game(size);
			
		manager->save_game(std::move(board));
		cout << "\n" << "Press 1 to play again: ";
		cin >> choice;
		cout << "\n";
	} while (choice == 1);
	cout << *manager;
	return 0;
}