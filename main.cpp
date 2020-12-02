// Трепалин Максим Евгеньевич
//

#include <iostream>
#include "game.h"
#include "IO.h"

using namespace std;

int main() {

    const int SIZE = 3;
    char board[SIZE][SIZE] = {{' ', ' ', ' '},
                              {' ', ' ', ' '},
                              {' ', ' ', ' '}};

    bool winX = false, winO = false, drawn = false;
    int row, col;
    PrintBoard(board, SIZE);

    do {
        cout << "!!! X Turn !!!" << endl;
        do {
            row = InputCoordinate();
            col = InputCoordinate();
        } while (board[row][col] != ' ');
        board[row][col] = 'X';
        PrintBoard(board, SIZE);
        if (winX == true) {cout <<"X won\n";}
        if (winX) break;

        cout << "!!! O Turn !!!" << endl;
        do {
            row = InputCoordinate();
            col = InputCoordinate();
        } while (board[row][col] != ' ');
        board[row][col] = 'O';
        PrintBoard(board, SIZE);
        if (winO == true) {cout <<"O won\n";}
        if (winO) break;

        drawn = WinDrawn(board, SIZE);
        if (drawn == true) {cout <<"no winner\n";}
    } while (!drawn);

    if (drawn == true) {cout <<"no winner\n";}
   else if (winX == true) {cout <<"X won\n";}
   else if (winO == true) {cout <<"O won\n";}

    PrintBoard(board, SIZE);
}








