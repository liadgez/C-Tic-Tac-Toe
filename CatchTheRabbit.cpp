#include "CatchTheRabbit.h"
using namespace std;


GameState CatchTheRabbit ::getGameState() {
    return _state;
}

void CatchTheRabbit::PerformPlayerMove(Move &move) {
    this->vec [move.getRow()][move.getCol()] = move.getMark();
}

void CatchTheRabbit::setGameState(GameState state) {
    _state=state;
}


void CatchTheRabbitEdu::computerNextAIMove(int &row, int &col) {
// if Human can win next turn - block him.
    char Human = 'X';
    for (int i = 0; i<9; i++) {
        for (int j = 0; j < 9; j++) {
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
    do{ row = rand() % 9;
        col = rand() % 9;}
    while(!(this->checkMove(row, col)));

};

void CatchTheRabbitRand::computerNextAIMove(int &row, int &col) {

    do{ row = rand() % 3;
        col = rand() % 3;}
    while(!(this->checkMove(row, col)));

}
