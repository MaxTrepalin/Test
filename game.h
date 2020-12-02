
#ifndef UNTITLED22_GAME_H
#define UNTITLED22_GAME_H

bool Win(char board[][3], char symbol) {
    if ((board[0][0] == symbol && board[0][1] == symbol && board[0][2] == symbol) ||
        (board[1][0] == symbol && board[1][1] == symbol && board[1][2] == symbol) ||
        (board[2][0] == symbol && board[2][1] == symbol && board[2][2] == symbol) ||
        (board[0][1] == symbol && board[1][0] == symbol && board[2][0] == symbol) ||
        (board[0][2] == symbol && board[1][2] == symbol && board[2][2] == symbol) ||
        (board[0][0] == symbol && board[1][0] == symbol && board[2][0] == symbol) ||
        (board[0][0] == symbol && board[1][1] == symbol && board[2][2] == symbol) ||
        (board[2][0] == symbol && board[1][1] == symbol && board[0][2] == symbol)) {
        return true;
    } else
        return false;
}

bool WinX(char board[][3], int size) {
    return Win(board, 'X');
}

bool WinO(char board[][3], int size) {
    {
        return Win(board, 'O');
    }
}


bool WinDrawn(char board[][3], int size) {
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            if (board[i][j] == ' ') return false;
        }
    }
    return true;
}

bool Check(int number) {
    if (number >= 0 && number <= 2) {
        return true;
    } else {
        return false;
    }
}


#endif //UNTITLED22_GAME_H




