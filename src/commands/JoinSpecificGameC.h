//
// Created by raz on 12/22/17.
//

#ifndef EX4_JOINSPECIFICGAMEC_H
#define EX4_JOINSPECIFICGAMEC_H

#include "Command.h"
#include "../client/Game.h"

class JoinSpecificGameC : public Command {
public:
    void execute(const vector<string>& args, int client, ServerGames* serverGamesI);
};

#endif //EX4_JOINSPECIFICGAMEC_H
