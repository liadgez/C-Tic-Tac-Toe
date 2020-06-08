cmake_minimum_required(VERSION 3.16)
project(Project_Games)

set(CMAKE_CXX_STANDARD 17)

add_executable(Project_Games main.cpp TicTacToe.cpp TicTacToe.h Game.h BoardGame.cpp BoardGame.h Move.h "BoardGameController.h" BoardGameController.cpp Interface.cpp Interface.h CatchTheRabbit.cpp CatchTheRabbit.h)