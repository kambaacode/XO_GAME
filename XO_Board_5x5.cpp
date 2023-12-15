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
    //check horizontally
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

}

bool Board::update_board(int x, int y, char symbol)
{
    if (!(x < 0 || x > 4 || y < 0 || y > 4) && Board_Game[x][y] == '.')
    {
        Board_Game[x][y] = toupper(symbol);
        nmoves++;
        return true;
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

void Player::getmove(int& x, int& y)
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

Game_Manager::Game_Manager(Game_Board* Board, Player* Playersptr[2])
{
    Boardptr = Board;
    this -> Players[0] = Playersptr[0] ;
    this -> Players[1] = Playersptr[1];
}

void Game_Manager::Run()
{
    int x, y;
    Boardptr->Display();
    while ((Boardptr->GameOver()))
    {
        for (int i : {0, 1})
        {
            Players[i]->getmove(x, y);
            while (!Boardptr->update_board(x, y, Players[i]->getSymbol())) {
                Players[i]->getmove(x, y);
            }
            Boardptr->update_board(x, y, Players[i]->getSymbol());
        }
    }
    Boardptr->isWinner();
}