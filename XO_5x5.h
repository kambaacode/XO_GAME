#pragma once

class Game_Board
{
protected:
	int nmoves = 0;
	char** Board_Game;

public:
	virtual void Display() = 0;
	virtual bool GameOver() = 0;
	virtual bool update_board(int x, int y, char symbol) = 0;
	virtual void isWinner() = 0;
};

class Board : public Game_Board
{
protected:
public:
	Board();

	void Display();
	bool GameOver();
	bool update_board(int x, int y, char symbol);
	void isWinner();
};

class Player
{
protected:
	char symbol;

public:
	Player() : symbol(' ')
	{}
	Player(char sym) : symbol(sym)
	{}
	virtual void getmove(int& x, int& y);
	virtual char getSymbol();
};

class Random_Player : public Player
{
public:
	Random_Player(char symbol) : Player(symbol)
	{}
	void getmove(int& x, int& y);
	char getSymbol();

};
class Game_Manager
{
	Game_Board* Boardptr;
	Player* Players[2];

public:
	Game_Manager(Game_Board* board, Player* Playersptr[2]);
	void Run();
};

