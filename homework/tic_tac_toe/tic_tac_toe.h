#include<string>
#include<vector>
#include<iostream>

using std::cout;

class TicTacToe 
{
public:
	void start_game(std::string first_player);
	bool game_over();
	void mark_board(int position);
	void display_board() const;
	std::string get_player() const;
private:
	std::string next_player = "X";
	std::vector<std::string> pegs{ 9, " " };
	bool check_column_win();
	bool check_row_win();
	bool check_diagonal_win();
	void clear_board();
	bool check_board_full();
	void set_next_player();

};