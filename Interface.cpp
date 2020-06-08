#include <iostream>
#include "Interface.h"
#include "BoardGameController.h"
#include <vector>

using namespace std;

 Interface::Interface() {

}

vector<int> Interface::gameMenu() {
    int choose_game;
    int difficulty;
    cout << "Please choose a game:" << endl << "#0 Tic Tac Toe" << endl << "#1 Catch the bunny" << endl << "#3 Exit"<< endl;
    cin >> choose_game;
    if(choose_game==3)
        exit(1);
    cout << "Choose difficulty:" << endl << "#0 idiot" << endl << "#1 brilliant" << endl;
    cin >> difficulty;
    vector<int> choice;
    choice.push_back(choose_game);
    choice.push_back(difficulty);
     return choice;
};


void Interface::show(BoardGame &gameObj) {
    cout << "    0   1   2  \n";
    cout << "  +---+---+---+\n";
    for (int i = 0; i < gameObj.getVec().size(); i++) {
        std::cout << i << " ";
        for (int j = 0; j < gameObj.getVec()[i].size(); j++) {
            std::cout << "| " << gameObj.getVec()[i][j] << " ";
        }
        std::cout << "|";
        std::cout << '\n';
        std::cout << "  +---+---+---+\n";
    }
}


void Interface::itsTie() {
    cout << "Its a Tie!" << endl;
}

void Interface::presentWinner(char ch) {
if(ch=='X')
    cout << "Human wins!" << endl;
    if(ch=='O')
        cout << "Computer wins!" << endl;
}

int Interface::getRow() {
    int row;
    do { cout << "Enter a row number (between 0-2)"<<endl; // get row
        cin>> row;}
    while(!(-1 < row && row < 3));
    return row;
}

int Interface::getCol() {
    int col;
    do { cout << "Enter a col number (between 0-2)"<<endl; // get row
        cin>> col;}
    while(!(-1 < col && col < 3));
    return col;

}

