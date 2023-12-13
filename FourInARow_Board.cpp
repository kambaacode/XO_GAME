#include "BoardGame_Classes.hpp"
#include <iostream>
#include <iomanip>
//constructor to set the board
FourInARow_Board::FourInARow_Board() {
    n_rows = 6;
    n_cols = 7;
    board = new char*[n_rows];
    for (int i = 0; i < n_rows; ++i) {
        board[i] = new char[n_cols];
        for (int j = 0; j < n_cols; ++j)
            board[i][j] = ' ';
    }
    n_moves = 0;
}

bool FourInARow_Board::update_board(int x, int y, char mark) {
    if (x >= 0 && x < n_rows && y >= 0 && y < n_cols && board[x][y] == ' ') {
        board[x][y] = mark;
        n_moves++;
        return true;
    }
    return false;
}

void FourInARow_Board::display_board() {
    for (int i = 0; i < n_rows; ++i) {
        cout << "\n| ";
        for (int j = 0; j < n_cols; ++j) {
            cout << "(" << i << "," << j << ")";
            cout << setw(2) << board [i][j] << " |";
        }
        cout << "\n-----------------------------------------------------------------";
    }
    cout << endl;
}
bool FourInARow_Board::is_winner() {
    // Check horizontally
    for (int i = 0; i < n_rows; ++i) {
        for (int j = 0; j <= n_cols - 4; ++j) {
            if (board[i][j] != ' ' &&
                board[i][j] == board[i][j + 1] &&
                board[i][j] == board[i][j + 2] &&
                board[i][j] == board[i][j + 3]) {
                return true;
            }
        }
    }

    // Check vertically
    for (int j = 0; j < n_cols; ++j) {
        for (int i = 0; i <= n_rows - 4; ++i) {
            if (board[i][j] != ' ' &&
                board[i][j] == board[i + 1][j] &&
                board[i][j] == board[i + 2][j] &&
                board[i][j] == board[i + 3][j]) {
                return true;
            }
        }
    }

    // Check diagonally (left-bottom to right-top)
    for (int i = 3; i < n_rows; ++i) {
        for (int j = 0; j <= n_cols - 4; ++j) {
            if (board[i][j] != ' ' &&
                board[i][j] == board[i - 1][j + 1] &&
                board[i][j] == board[i - 2][j + 2] &&
                board[i][j] == board[i - 3][j + 3]) {
                return true;
            }
        }
    }

    // Check diagonally (left-top to right-bottom)
    for (int i = 0; i <= n_rows - 4; ++i) {
        for (int j = 0; j <= n_cols - 4; ++j) {
            if (board[i][j] != ' ' &&
                board[i][j] == board[i + 1][j + 1] &&
                board[i][j] == board[i + 2][j + 2] &&
                board[i][j] == board[i + 3][j + 3]) {
                return true;
            }
        }
    }

    return false;
}



bool FourInARow_Board::is_draw() {
    return (n_moves == n_rows * n_cols && !is_winner());
}

bool FourInARow_Board::game_is_over() {
    return is_winner() || is_draw();
}

