#include "BoardGameController.h"
#include <iostream>
#include "TicTacToe.h"
#include "CatchTheRabbit.h"
#include "BoardGame.h"
#include "Interface.h"
#include "Move.h"
using namespace std;


void BoardGameController::Play() {
   vector<int>  game_choice;
    game_choice = view->gameMenu();
    // initial game
    BoardGame *gameObj;
    if (game_choice[0] == 0) // TicTacToe
    {
        if (game_choice[1] == 0) {
            gameObj = new TicTacToeRand();
        }
        if (game_choice[1] == 1) {
            gameObj = new TicTacToeEdu();
        }
    }
    if (game_choice[0] == 1) // Catch the bunny
    {
        if (game_choice[1] == 0) {
           gameObj = new CatchTheRabbitEdu();
            view->show( *gameObj);
            cout<<"Catch the rabbit Demo ends here..." << endl;
            exit(1);
        }
        if (game_choice[1] == 1) {
            gameObj = new CatchTheRabbitRand();
            view->show( *gameObj);
            cout<<"Catch the rabbit Demo ends here..." << endl;
            exit(1);
        }
    }
    //Start playing
    gameObj->setGameState(InProgress);
    bool valid_move= false;
    char mark = 'X'; // Human first
    int i = 0;
    while (i<9 && gameObj->getGameState()==InProgress) // Total 9 turns
    {
        view->show( *gameObj);
      while(!valid_move) {
            valid_move= gameObj->makeMove(mark);
            }
        if(gameObj->checkWin()){ // check win
            if(mark=='X')
            gameObj->setGameState(PlayerWins);
            else
                gameObj->setGameState(ComputerWins);
            view->show( *gameObj);
            view->presentWinner(mark);
            exit(1);}
            if(mark == 'X') // Switch turn
                mark='O';
            else
                mark='X';
            valid_move=false;
    }
view->itsTie();
gameObj->setGameState(Tie);
view->show( *gameObj);

}

