#include "XO.h"
#include <iostream>

using namespace std;

//Board
bool Board::GameOver()
{
	return !(nmoves == 24);
}


void Board::isWinner()
{
    int counterx = 0;
    int countero = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (Board_Game[i][j] == 'X' &&
                Board_Game[i][j] == Board_Game[i][j + 1] &&
                Board_Game[i][j] == Board_Game[i][j + 2])
            {
                counterx++;
            }
            if (Board_Game[i][j] == 'O' &&
                Board_Game[i][j] == Board_Game[i][j + 1] &&
                Board_Game[i][j] == Board_Game[i][j + 2])
            {
                countero++;
            }
        }
    }

    // Check for row vertical
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (Board_Game[i][j] == 'X' &&
                Board_Game[i][j] == Board_Game[i + 1][j] &&
                Board_Game[i][j] == Board_Game[i + 2][j])
            {
                counterx++;
            }
            if (Board_Game[i][j] == 'O' &&
                Board_Game[i][j] == Board_Game[i + 1][j] &&
                Board_Game[i][j] == Board_Game[i + 2][j])
            {
                countero++;
            }
        }
    }

    // Check for row diagonal
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (Board_Game[i][j] == 'X' &&
                Board_Game[i][j] == Board_Game[i + 1][j + 1] &&
                Board_Game[i][j] == Board_Game[i + 2][j + 2])
            {
                counterx++;
            }
            if (Board_Game[i][j] == 'O' &&
                Board_Game[i][j] == Board_Game[i + 1][j + 1] &&
                Board_Game[i][j] == Board_Game[i + 2][j + 2])
            {
                countero++;
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 4; j > 1; j--)
        {
            if (Board_Game[i][j] == 'X' &&
                Board_Game[i][j] == Board_Game[i + 1][j - 1] &&
                Board_Game[i][j] == Board_Game[i + 2][j - 2])
            {
                counterx++;
            }
            if (Board_Game[i][j] == 'O' &&
                Board_Game[i][j] == Board_Game[i + 1][j - 1] &&
                Board_Game[i][j] == Board_Game[i + 2][j - 2])
            {
                countero++;
            }
        }
    }

    if (counterx > countero)
        cout << "X Wins!";
    else if (counterx < countero)
        cout << "O Wins!";
    else
        cout << "Draw";

    cout << endl << endl;
    cout << "X counter : " << endl;
    cout << "O counter : ";
}

void Board::update_board(int x , int y ,char symbol)
{
	if (!(x < 0 || x > 4 || y < 0 || y > 4) && Board_Game[x][y] == '.')
	{
		Board_Game[x][y] = toupper(symbol);
		nmoves++;
	}
	else cout << "Enter Valid move" << endl;
	
	cout << nmoves << endl;
}

void Board::Display()
{
	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 5; ++j)
			cout << Board_Game[i][j];
		cout << endl;
	}
}
//Player
//---------

void Player::getmove(int & x , int & y)
{
	cout << "Enter index: " << endl;
	cin >> x >> y;
}

char Player::getSymbol()
{
	return symbol;
}



//Game_manager
//---------------

Game_Manager::Game_Manager(Game_Board* Board , Player* player1 , Player* player2)
{
	Boardptr = Board;
	Player1 = player1;
	Player2 = player2;
}

void Game_Manager::Run()
{
    int x1, y1 , x2 , y2;
	Boardptr->Display();
	while ((Boardptr->GameOver()))
	{
		Player1->getmove(x1 , y1);
		Boardptr->update_board(x1 , y1 ,Player1 -> getSymbol());
		Boardptr->Display();

		if (!(Boardptr->GameOver()))
			break;

		Player2->getmove(x2, y2);
		Boardptr->update_board(x2, y2, Player2->getSymbol());
		Boardptr->Display();
	}
	Boardptr->isWinner();
}