/*
 * Naama Harshoshanim
 * 315783217
 * Tchelet Englman
 * 208780585
 */

#ifndef JOINCOMMAND_H
#define JOINCOMMAND_H

#include "Command.h"

class JoinCommand : public Command {
public:
    /**
     * constructor.
     */
    JoinCommand();
    /**
     * join command.
     * @param arg char*
     * @param socket int*
     * @param games vector<GameMembers*>
     */
    void execute(char* arg, int* socket, vector<GameMembers*> &games);
    /**
     * handle client.
     * @param gameMembers GameMembers*
     */
    void handleClient(GameMembers* gameMembers);
private:
    // members:
    vector<GameMembers*> games;
    int* socket;
    int gameIndex;
};


#endif //JOINCOMMAND_H
