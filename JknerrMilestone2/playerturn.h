#pragma once
#include "Board.h"
using namespace std;

//Variable Declaration
int choice;
int row, column;
char turn = 'X';
bool draw = false;


int player_turn() {
    if (turn == 'X') {
        cout << "Player - 1 [X] turn : ";
    }
    else if (turn == 'O') {
        cout << "Player - 2 [O] turn : ";
    }
    //Taking input from user
    //updating the board according to choice and reassigning the turn Start

    cin >> choice;

    //switch case to get which row and column will be update

    switch (choice) {
    case 1: row = 0; column = 0; break;
    case 2: row = 0; column = 1; break;
    case 3: row = 0; column = 2; break;
    case 4: row = 1; column = 0; break;
    case 5: row = 1; column = 1; break;
    case 6: row = 1; column = 2; break;
    case 7: row = 2; column = 0; break;
    case 8: row = 2; column = 1; break;
    case 9: row = 2; column = 2; break;
    default:
        cout << "Invalid Move";
    }

    if (turn == 'X' && board[row][column] != 'X' && board[row][column] != 'O') {
        //updating the position for 'X' symbol if
        //it is not already occupied
        board[row][column] = 'X';
        turn = 'O';
    }
    else if (turn == 'O' && board[row][column] != 'X' && board[row][column] != 'O') {
        //updating the position for 'O' symbol if
        //it is not already occupied
        board[row][column] = 'O';
        turn = 'X';
    }
    else {
        //if input position already filled
        cout << "Box already filled!Please choose another!!";
        player_turn();
    }
    /* Ends */
    display_board();

    return 0;
}
