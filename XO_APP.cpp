#include <iostream>
#include "XO.h"


using namespace std;

int main()
{
	Player* Players[2];
	Players[0] = new Player('X');
	int Choice;
	cout << "1 - To play Against Computer " << endl;
	cout << "2 - To play Against Player " << endl;
	cin >> Choice;

	if (Choice == 1)
	{
		Players[1] = new Random_Player('O');
	}
	else if (Choice == 2) Players[1] = new Player('O');
	else cout << "Enter Valid Choice!";


	Game_Board* board = new Board();
	Game_Manager new_game(board, Players);
	new_game.Run();

	return 0;
}
