
#ifndef UNTITLED22_IO_H
#define UNTITLED22_IO_H

#include "iostream"

using namespace std;

void PrintBoard(char board[][3], int size);

int InputCoordinate();

void PrintBoard(char board[][3], int size) {
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            cout << board[i][j] << "|";
        }
        cout << "\n -----\n";
    }
    cout << endl;
}

int InputCoordinate() {
    int coordinate;
    do {
        cout << "Enter coordinate (0..2): ";
        cin >> coordinate;
    } while (!Check(coordinate));
    return coordinate;
}

#endif //UNTITLED22_IO_H
