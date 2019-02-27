#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test game over")
{
	TicTacToe game1;
	game1.start_game("X");
	REQUIRE(game1.game_over() == false);
}

TEST_CASE("Test first player X and first column win") 
{
	 /* Tic Tac Toe Board
		123
		456
		789

	   First column win are user positions 1,4, and 7
	  */
	TicTacToe board;
	board.start_game("X");
	REQUIRE(board.get_player() == "X");
	REQUIRE(board.game_over() == false);
	board.mark_board(1);//X         
	REQUIRE(board.game_over() == false);
	board.mark_board(2);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(4);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(7);//X 
	//X wins 
	
	REQUIRE(board.game_over() == true);
	
}

TEST_CASE("Test first player O")
{
	TicTacToe board;
	board.start_game("O");
	REQUIRE(board.game_over() == false);
	board.mark_board(1);//O         
	REQUIRE(board.game_over() == false);
	board.mark_board(2);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(4);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(7);//O 
	//O wins 

	REQUIRE(board.game_over() == true);

}

TEST_CASE("Test second column win")
{
	TicTacToe board;
	board.start_game("X");
	REQUIRE(board.get_player() == "X");
	REQUIRE(board.game_over() == false);
	board.mark_board(2);//X         
	REQUIRE(board.game_over() == false);
	board.mark_board(3);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(6);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(8);//X 
	//X wins 

	REQUIRE(board.game_over() == true);

}

TEST_CASE("Test third column win")
{
	TicTacToe board;
	board.start_game("X");
	REQUIRE(board.get_player() == "X");
	REQUIRE(board.game_over() == false);
	board.mark_board(3);//X         
	REQUIRE(board.game_over() == false);
	board.mark_board(2);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(6);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(4);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(9);//X 
	//X wins 

	REQUIRE(board.game_over() == true);

}

TEST_CASE("Test first row win")
{
	TicTacToe board;
	board.start_game("X");
	REQUIRE(board.get_player() == "X");
	REQUIRE(board.game_over() == false);
	board.mark_board(1);//X         
	REQUIRE(board.game_over() == false);
	board.mark_board(4);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(2);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(3);//X 
	//X wins 

	REQUIRE(board.game_over() == true);

}

TEST_CASE("Test second row win")
{
	TicTacToe board;
	board.start_game("X");
	REQUIRE(board.get_player() == "X");
	REQUIRE(board.game_over() == false);
	board.mark_board(4);//X         
	REQUIRE(board.game_over() == false);
	board.mark_board(1);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(2);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(6);//X 
	//X wins 

	REQUIRE(board.game_over() == true);

}

TEST_CASE("Test third row win")
{
	TicTacToe board;
	board.start_game("X");
	REQUIRE(board.get_player() == "X");
	REQUIRE(board.game_over() == false);
	board.mark_board(7);//X         
	REQUIRE(board.game_over() == false);
	board.mark_board(3);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(8);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(2);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(9);//X 
	//X wins 

	REQUIRE(board.game_over() == true);

}

TEST_CASE("Test first diagonal win")
{
	TicTacToe board;
	board.start_game("X");
	REQUIRE(board.get_player() == "X");
	REQUIRE(board.game_over() == false);
	board.mark_board(1);//X         
	REQUIRE(board.game_over() == false);
	board.mark_board(3);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(6);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(9);//X 
	//X wins 

	REQUIRE(board.game_over() == true);

}

TEST_CASE("Test second diagonal win")
{
	TicTacToe board;
	board.start_game("X");
	REQUIRE(board.get_player() == "X");
	REQUIRE(board.game_over() == false);
	board.mark_board(3);//X         
	REQUIRE(board.game_over() == false);
	board.mark_board(2);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(6);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(7);//X 
	//X wins 

	REQUIRE(board.game_over() == true);

}

TEST_CASE("Test no winner game over")
{
	TicTacToe board;
	board.start_game("X");
	REQUIRE(board.get_player() == "X");
	REQUIRE(board.game_over() == false);
	board.mark_board(1);//X         
	REQUIRE(board.game_over() == false);
	board.mark_board(2);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(3);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(6);//X 
	REQUIRE(board.game_over() == false);
	board.mark_board(4);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(7);//X 
	REQUIRE(board.game_over() == false);
	board.mark_board(9);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(8);//X 
	//X wins 

	REQUIRE(board.game_over() == true);

}
