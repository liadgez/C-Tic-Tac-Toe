#include "TicTacToe.h"
using namespace std;
#include <iostream>
//void TicTacToeEdu :: computerNextAIMove(){
//int x;
//};
//
//void TicTacToeRand :: computerNextAIMove(){
//    int x;
//
//};

//GameState getGameState(){
//  return GameState;
//};


GameState TicTacToe ::getGameState() {
    return _state;
}

void TicTacToe::PerformPlayerMove(Move &move) {
    this->vec [move.getRow()][move.getCol()] = move.getMark();
}

void TicTacToe::setGameState(GameState state) {
    _state=state;
}


void TicTacToeEdu::computerNextAIMove(int &row, int &col) {
// if Human can win next turn - block him.
char Human = 'X';
    for (int i = 0; i<3; i++) {
        for (int j = 0; j < 3; j++) {
            if (this->checkMove(i, j)) {
                vec[i][j] = Human;
                if (this->checkWin()) {
                    row = i;
                    col = j;
                    vec[i][j] = ' ';
                    return;
                } else vec[i][j] = ' ';
            }
        }
    }
    do{ row = rand() % 3;
        col = rand() % 3;}
    while(!(this->checkMove(row, col)));

};

void TicTacToeRand::computerNextAIMove(int &row, int &col) {

            do{ row = rand() % 3;
             col = rand() % 3;}
         while(!(this->checkMove(row, col)));

    }
