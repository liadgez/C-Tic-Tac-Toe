#include <iostream>
#include "BoardGame.h"
#include "vector"
#include "Move.h"


using namespace std;


#define MAX_BOARD_SIZE 10

BoardGame::BoardGame(int rows, int cols)  : _rows(rows), _cols(cols){
   vec.resize(rows,vector<char>(cols, ' '));
}

vector<vector<char>> &BoardGame::getVec() {
    return vec;
}

bool BoardGame::makeMove(char ch) {
    {
        int row, col;
        if(ch=='X') {// Human move
          do { cout << "Enter a row number (between 0-2)"<<endl; // get row
              cin>> row;}
          while(!(-1 < row && row < 3));

            do { cout << "Enter a col number (between 0-2)"<<endl; // get col
                cin>> col;}
            while(!(-1 < col && col < 3));
        }

        if(ch=='O') // Computer move
        {
            this->computerNextAIMove(row,col);
        }

        if(this->checkMove(row,col))
        {
            Move move;
            move.setMove(row, col, ch);
            PerformPlayerMove(move);
            return true;
        }
        if(ch=='X')
        cout<< "This position is already taken, please enter again" << endl;
        return false;
    }
}

bool BoardGame::checkWin (){
    //to check diagonals
    if ((vec[0][0] == 'X' && vec[1][1] == 'X' && vec[2][2] == 'X')
        || (vec[0][2] == 'X' && vec[1][1] == 'X' && vec[2][0] == 'X'))
    {
        return true;
    }
    else if ((vec[0][0] == 'O' && vec[1][1] == 'O' && vec[2][2] == 'O')
             || (vec[0][2] == 'O' && vec[1][1] == 'O' && vec[2][0] == 'O'))
    {
        return true;
    }

    //to check horizonatal and vertical
    for (int i = 0; i < vec.size(); i++)
    {
        if ((vec[i][0] == 'X' && vec[i][1] == 'X' && vec[i][2] == 'X')
            || (vec[0][i] == 'X' && vec[1][i] == 'X' && vec[2][i] == 'X'))
        {
            return true;
        }
        else if((vec[i][0] == 'O' && vec[i][1] == 'O' && vec[i][2] == 'O')
                || (vec[0][i] == 'O' && vec[1][i] == 'O' && vec[2][i] == 'O'))
        {
            return true;
        }
    }
    return false;
}

bool BoardGame::checkMove(int row, int col){

    return this->vec[row][col] != 'X' && this->vec[row][col] != 'O';
};