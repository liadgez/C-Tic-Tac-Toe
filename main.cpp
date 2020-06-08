#include <iostream>
#include "Game.h"
#include "TicTacToe.h"
#include "BoardGame.h"
#include "BoardGameController.h"
#include "Interface.h"
#include <vector>


using namespace std;


int main() {
    std::shared_ptr <BoardGameController> boardGameController(new BoardGameController());
    boardGameController->Play();

return 1;






    //SHOW
    //gameMenu
    //Check
    //Loop
}