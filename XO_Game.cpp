#include <iostream>
#include <vector>
using namespace std;

class XO
{
    char Board[3][3];
    int row, column;
    char turn = 'X'; // Initialize 'turn' at the point of declaration

public:
    void setrow(int r)
    {
        row = r;
    }

    void setcolumn(int c)
    {
        column = c;
    }

    bool is_Valid_move(int i, int j);

    void Update_Board();
    void insert();
};

bool XO::is_Valid_move(int i, int j)
{
    return (Board[i][j] != 'X' && Board[i][j] != 'O');
}

void XO::insert()
{
    if (is_Valid_move(row, column))
    {
        if (turn == 'X')
        {
            Board[row][column] = 'X';
            turn = 'O';
        }
        else if (turn == 'O')
        {
            Board[row][column] = 'O';
            turn = 'X';
        }
    }
    else
    {
        cout << "Already inserted!" << endl;
    }

    if (row > 2 || row < 0 || column > 2 || column < 0)
    {
        cout << "Invalid index" << endl;
    }
}

void XO::Update_Board()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << Board[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    XO game;
    cout << "Welcome to XO Game :)" << endl;

    game.setrow(0);
    game.setcolumn(0);
    game.insert();
    game.Update_Board();

    game.setrow(1);
    game.setcolumn(1);
    game.insert();
    game.Update_Board();

    game.setrow(2);
    game.setcolumn(2);
    game.insert();
    game.Update_Board();

    return 0;
}
