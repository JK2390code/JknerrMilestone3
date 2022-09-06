#include <iostream>
#include <stdlib.h>
#include "Board.h"
#include "playerturn.h"
#include "gameover.h"
#include "instruction.h"
#include "fileout.h"
using namespace std;



//Program Main Method

int main()
{
    cout << "T I C K -- T A C -- T O E -- G A M E\n";
    cout << "FOR 2 PLAYERS\n";
    while (gameover()) {
        printDetails();
        display_board();
        player_turn();
        gameover();
    }
    if (turn == 'X' && draw == false) {
        cout << "Congratulations!Player with 'O' has won the game";
    }
    else if (turn == 'O' && draw == false) {
        cout << "Congratulations!Player with 'X' has won the game";
    }
    else
        cout << "GAME DRAW!!!";
    mainSave();
}

