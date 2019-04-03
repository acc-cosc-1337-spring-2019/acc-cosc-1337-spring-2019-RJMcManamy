#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test game over")
{
	TicTacToe* game1 = new TicTacToe3();
	game1->start_game("X");
	REQUIRE(game1->game_over() == false);

	delete game1;
}

TEST_CASE("Test first player X and first column win") 
{
	 /* Tic Tac Toe Board
		123
		456
		789

	   First column win are user positions 1,4, and 7
	  */

	TicTacToe* board = new TicTacToe3();
	board->start_game("X");
	REQUIRE(board->get_player() == "X");
	REQUIRE(board->game_over() == false);
	board->mark_board(1);//X         
	REQUIRE(board->game_over() == false);
	board->mark_board(2);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(4);//X          
	REQUIRE(board->game_over() == false);
	board->mark_board(5);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(7);//X 
	//X wins 
	
	REQUIRE(board->get_winner() == "X");

	delete board;
	
}

TEST_CASE("Test first player O")
{
	TicTacToe* board = new TicTacToe3();
	board->start_game("O");
	REQUIRE(board->game_over() == false);
	board->mark_board(1);//O         
	REQUIRE(board->game_over() == false);
	board->mark_board(2);//X          
	REQUIRE(board->game_over() == false);
	board->mark_board(4);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(5);//X          
	REQUIRE(board->game_over() == false);
	board->mark_board(7);//O 
	//O wins 

	REQUIRE(board->get_winner() == "O");

	delete board;

}

TEST_CASE("Test second column win")
{
	TicTacToe* board = new TicTacToe3();
	board->start_game("X");
	REQUIRE(board->get_player() == "X");
	REQUIRE(board->game_over() == false);
	board->mark_board(2);//X         
	REQUIRE(board->game_over() == false);
	board->mark_board(3);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(5);//X          
	REQUIRE(board->game_over() == false);
	board->mark_board(6);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(8);//X 
	//X wins 

	REQUIRE(board->get_winner() == "X");

	delete board;

}

TEST_CASE("Test third column win")
{
	TicTacToe* board = new TicTacToe3();
	board->start_game("X");
	REQUIRE(board->get_player() == "X");
	REQUIRE(board->game_over() == false);
	board->mark_board(3);//X         
	REQUIRE(board->game_over() == false);
	board->mark_board(2);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(6);//X          
	REQUIRE(board->game_over() == false);
	board->mark_board(4);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(9);//X 
	//X wins 

	REQUIRE(board->get_winner() == "X");

	delete board;

}

TEST_CASE("Test first row win")
{
	TicTacToe* board = new TicTacToe3();
	board->start_game("X");
	REQUIRE(board->get_player() == "X");
	REQUIRE(board->game_over() == false);
	board->mark_board(1);//X         
	REQUIRE(board->game_over() == false);
	board->mark_board(4);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(2);//X          
	REQUIRE(board->game_over() == false);
	board->mark_board(5);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(3);//X 
	//X wins 

	REQUIRE(board->get_winner() == "X");

	delete board;

}

TEST_CASE("Test second row win")
{
	TicTacToe* board = new TicTacToe3();
	board->start_game("X");
	REQUIRE(board->get_player() == "X");
	REQUIRE(board->game_over() == false);
	board->mark_board(4);//X         
	REQUIRE(board->game_over() == false);
	board->mark_board(1);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(5);//X          
	REQUIRE(board->game_over() == false);
	board->mark_board(2);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(6);//X 
	//X wins 

	REQUIRE(board->get_winner() == "X");

	delete board;

}

TEST_CASE("Test third row win")
{
	TicTacToe* board = new TicTacToe3();
	board->start_game("X");
	REQUIRE(board->get_player() == "X");
	REQUIRE(board->game_over() == false);
	board->mark_board(7);//X         
	REQUIRE(board->game_over() == false);
	board->mark_board(3);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(8);//X          
	REQUIRE(board->game_over() == false);
	board->mark_board(2);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(9);//X 
	//X wins 

	REQUIRE(board->get_winner() == "X");

	delete board;

}

TEST_CASE("Test first diagonal win")
{
	TicTacToe* board = new TicTacToe3();
	board->start_game("X");
	REQUIRE(board->get_player() == "X");
	REQUIRE(board->game_over() == false);
	board->mark_board(1);//X         
	REQUIRE(board->game_over() == false);
	board->mark_board(3);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(5);//X          
	REQUIRE(board->game_over() == false);
	board->mark_board(6);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(9);//X 
	//X wins 

	REQUIRE(board->get_winner() == "X");

	delete board;

}

TEST_CASE("Test second diagonal win")
{
	TicTacToe* board = new TicTacToe3();
	board->start_game("X");
	REQUIRE(board->get_player() == "X");
	REQUIRE(board->game_over() == false);
	board->mark_board(3);//X         
	REQUIRE(board->game_over() == false);
	board->mark_board(2);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(5);//X          
	REQUIRE(board->game_over() == false);
	board->mark_board(6);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(7);//X 
	//X wins 

	REQUIRE(board->get_winner() == "X");

	delete board;

}

TEST_CASE("Test no winner game over")
{
	TicTacToe* board = new TicTacToe3();
	board->start_game("X");
	REQUIRE(board->get_player() == "X");
	REQUIRE(board->game_over() == false);
	board->mark_board(1);//X         
	REQUIRE(board->game_over() == false);
	board->mark_board(2);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(5);//X          
	REQUIRE(board->game_over() == false);
	board->mark_board(3);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(6);//X 
	REQUIRE(board->game_over() == false);
	board->mark_board(4);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(7);//X 
	REQUIRE(board->game_over() == false);
	board->mark_board(9);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(8);//X 
	//X wins 

	REQUIRE(board->get_winner() == "C");

	delete board;

}

TEST_CASE("Test first column win 4")
{
	/* Tic Tac Toe Board

			  1  2  3  4

			  5  6  7  8

			  9 10 11 12
			  13 14 15 16



		  First column win are

		  user positions 1,5, 9 and 13

		  */

	TicTacToe* board = new TicTacToe4();
	board->start_game("X");
	REQUIRE(board->game_over() == false);
	board->mark_board(1);//X        
	REQUIRE(board->game_over() == false);
	board->mark_board(2);//O         
	REQUIRE(board->game_over() == false);
	board->mark_board(5);//X         
	REQUIRE(board->game_over() == false);
	board->mark_board(6);//O         
	REQUIRE(board->game_over() == false);
	board->mark_board(9);//X 
	REQUIRE(board->game_over() == false);
	board->mark_board(10);//O
	REQUIRE(board->game_over() == false);
	board->mark_board(13);//X

	//X wins
	REQUIRE(board->game_over() == true);

	delete board;
}

TEST_CASE("Test second column win 4")
{
	TicTacToe* board = new TicTacToe4();
	board->start_game("X");
	REQUIRE(board->game_over() == false);
	board->mark_board(2);//X        
	REQUIRE(board->game_over() == false);
	board->mark_board(3);//O         
	REQUIRE(board->game_over() == false);
	board->mark_board(6);//X         
	REQUIRE(board->game_over() == false);
	board->mark_board(7);//O         
	REQUIRE(board->game_over() == false);
	board->mark_board(10);//X 
	REQUIRE(board->game_over() == false);
	board->mark_board(13);//O
	REQUIRE(board->game_over() == false);
	board->mark_board(14);//X

	//X wins
	REQUIRE(board->game_over() == true);

	delete board;

}

TEST_CASE("Test third column win 4")
{
	TicTacToe* board = new TicTacToe4();
	board->start_game("X");
	REQUIRE(board->game_over() == false);
	board->mark_board(3);//X        
	REQUIRE(board->game_over() == false);
	board->mark_board(2);//O         
	REQUIRE(board->game_over() == false);
	board->mark_board(7);//X         
	REQUIRE(board->game_over() == false);
	board->mark_board(6);//O         
	REQUIRE(board->game_over() == false);
	board->mark_board(11);//X 
	REQUIRE(board->game_over() == false);
	board->mark_board(10);//O
	REQUIRE(board->game_over() == false);
	board->mark_board(15);//X

	//X wins
	REQUIRE(board->game_over() == true);

	delete board;

}

TEST_CASE("Test fourth column win 4")
{
	TicTacToe* board = new TicTacToe4();
	board->start_game("X");
	REQUIRE(board->game_over() == false);
	board->mark_board(4);//X        
	REQUIRE(board->game_over() == false);
	board->mark_board(2);//O         
	REQUIRE(board->game_over() == false);
	board->mark_board(8);//X         
	REQUIRE(board->game_over() == false);
	board->mark_board(6);//O         
	REQUIRE(board->game_over() == false);
	board->mark_board(12);//X 
	REQUIRE(board->game_over() == false);
	board->mark_board(10);//O
	REQUIRE(board->game_over() == false);
	board->mark_board(16);//X

	//X wins
	REQUIRE(board->game_over() == true);

	delete board;

}

TEST_CASE("Test first row win 4")
{
	TicTacToe* board = new TicTacToe4();
	board->start_game("X");
	REQUIRE(board->game_over() == false);
	board->mark_board(1);//X        
	REQUIRE(board->game_over() == false);
	board->mark_board(5);//O         
	REQUIRE(board->game_over() == false);
	board->mark_board(2);//X         
	REQUIRE(board->game_over() == false);
	board->mark_board(6);//O         
	REQUIRE(board->game_over() == false);
	board->mark_board(3);//X 
	REQUIRE(board->game_over() == false);
	board->mark_board(7);//O
	REQUIRE(board->game_over() == false);
	board->mark_board(4);//X

	//X wins
	REQUIRE(board->game_over() == true);

	delete board;

}

TEST_CASE("Test second row win 4")
{
	TicTacToe* board = new TicTacToe4();
	board->start_game("X");
	REQUIRE(board->game_over() == false);
	board->mark_board(5);//X        
	REQUIRE(board->game_over() == false);
	board->mark_board(9);//O         
	REQUIRE(board->game_over() == false);
	board->mark_board(6);//X         
	REQUIRE(board->game_over() == false);
	board->mark_board(10);//O         
	REQUIRE(board->game_over() == false);
	board->mark_board(7);//X 
	REQUIRE(board->game_over() == false);
	board->mark_board(11);//O
	REQUIRE(board->game_over() == false);
	board->mark_board(8);//X

	//X wins
	REQUIRE(board->game_over() == true);

	delete board;
}

TEST_CASE("Test third row win 4")
{
	TicTacToe* board = new TicTacToe4();
	board->start_game("X");
	REQUIRE(board->game_over() == false);
	board->mark_board(9);//X        
	REQUIRE(board->game_over() == false);
	board->mark_board(5);//O         
	REQUIRE(board->game_over() == false);
	board->mark_board(10);//X         
	REQUIRE(board->game_over() == false);
	board->mark_board(6);//O         
	REQUIRE(board->game_over() == false);
	board->mark_board(11);//X 
	REQUIRE(board->game_over() == false);
	board->mark_board(7);//O
	REQUIRE(board->game_over() == false);
	board->mark_board(12);//X

	//X wins
	REQUIRE(board->game_over() == true);

	delete board;

}

TEST_CASE("Test fourth row win 4")
{
	TicTacToe* board = new TicTacToe4();
	board->start_game("X");
	REQUIRE(board->game_over() == false);
	board->mark_board(13);//X        
	REQUIRE(board->game_over() == false);
	board->mark_board(5);//O         
	REQUIRE(board->game_over() == false);
	board->mark_board(14);//X         
	REQUIRE(board->game_over() == false);
	board->mark_board(6);//O         
	REQUIRE(board->game_over() == false);
	board->mark_board(15);//X 
	REQUIRE(board->game_over() == false);
	board->mark_board(7);//O
	REQUIRE(board->game_over() == false);
	board->mark_board(16);//X

	//X wins
	REQUIRE(board->game_over() == true);

	delete board;

}

TEST_CASE("Test first diagonal win 4")
{
	TicTacToe* board = new TicTacToe4();
	board->start_game("X");
	REQUIRE(board->game_over() == false);
	board->mark_board(1);//X        
	REQUIRE(board->game_over() == false);
	board->mark_board(5);//O         
	REQUIRE(board->game_over() == false);
	board->mark_board(6);//X         
	REQUIRE(board->game_over() == false);
	board->mark_board(8);//O         
	REQUIRE(board->game_over() == false);
	board->mark_board(11);//X 
	REQUIRE(board->game_over() == false);
	board->mark_board(7);//O
	REQUIRE(board->game_over() == false);
	board->mark_board(16);//X

	//X wins
	REQUIRE(board->game_over() == true);

	delete board;

}

TEST_CASE("Test second diagonal win 4")
{
	TicTacToe* board = new TicTacToe4();
	board->start_game("X");
	REQUIRE(board->game_over() == false);
	board->mark_board(4);//X        
	REQUIRE(board->game_over() == false);
	board->mark_board(5);//O         
	REQUIRE(board->game_over() == false);
	board->mark_board(7);//X         
	REQUIRE(board->game_over() == false);
	board->mark_board(8);//O         
	REQUIRE(board->game_over() == false);
	board->mark_board(10);//X 
	REQUIRE(board->game_over() == false);
	board->mark_board(9);//O
	REQUIRE(board->game_over() == false);
	board->mark_board(13);//X

	//X wins
	REQUIRE(board->game_over() == true);

	delete board;
}

TEST_CASE("Test no winner game over 4")
{
	TicTacToe* board = new TicTacToe4();
	board->start_game("X");
	REQUIRE(board->get_player() == "X");
	REQUIRE(board->game_over() == false);
	board->mark_board(1);//X         
	REQUIRE(board->game_over() == false);
	board->mark_board(2);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(3);//X          
	REQUIRE(board->game_over() == false);
	board->mark_board(4);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(6);//X 
	REQUIRE(board->game_over() == false);
	board->mark_board(5);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(8);//X 
	REQUIRE(board->game_over() == false);
	board->mark_board(7);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(10);//X 
	REQUIRE(board->game_over() == false);
	board->mark_board(9);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(12);//X 
	REQUIRE(board->game_over() == false);
	board->mark_board(11);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(13);//X
	REQUIRE(board->game_over() == false);
	board->mark_board(14);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(15);//X
	REQUIRE(board->game_over() == false);
	board->mark_board(16);//O

	//Tie 
	REQUIRE(board->game_over() == true);
	REQUIRE(board->get_winner() == "C");

	delete board;

}
