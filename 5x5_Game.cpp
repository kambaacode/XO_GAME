#include <iostream>
#include "XO.h"


using namespace std;

int main()
{
	Player* Player1 = new Player('X');
	Player* Player2;
	int Choice;
	cout << "1 - To play Against Computer " << endl;
	cin >> Choice;

	if (Choice == 1)
	{
		Player2 = new AI_Player('O');
	}
	else
		Player2 = new Player('O');
		


	Game_Board* board = new Board();
	Game_Manager new_game(board, Player1, Player2);
	new_game.Run();

	return 0;
}