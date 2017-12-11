/*
 * Naama Harshoshanim
 * 315783217
 * Tchelet Englman
 * 208780585
 */

#ifndef GAME_H
#define GAME_H


#include "Board.h"
#include "Logic.h"
#include "Player.h"

class Game {
public:
    /**
     * constructor.
     * @param board
     * @param logic
     * @param p1
     * @param p2
     */
    Game(Board* board, Logic* logic, Player* p1, Player* p2);
    /**
     * destructor.
     */
    ~Game();
    /**
     * running the game.
     */
    void run();

private:
    // members.
    Board* board;
    Logic* logic;
    Player* player1;
    Player* player2;
};


#endif //GAME_H