//
// Created by raz on 12/22/17.
//

#ifndef EX4_CLOSESPECIFICGAMEC_H
#define EX4_CLOSESPECIFICGAMEC_H


#include <vector>
#include "../client/Game.h"
#include "Command.h"

class CloseSpecificGameC : public Command {
public:
    void execute(const vector<string>& args, int client, ServerGames* serverGamesI);
};

#endif //EX4_CLOSESPECIFICGAMEC_H
