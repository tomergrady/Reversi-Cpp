//
// Created by raz on 12/22/17.
//

#include <vector>
#include "StartNewGameC.h"


void StartNewGameC::execute(vector<string> args, int client, ServerGames* serverGamesI) {
    int i = 0;
    bool badName = false;
    // arg[1] is the room name
    string gameName = args[1];
    string answerToUser;
    if (serverGamesI->isGameInList(gameName)) {
        badName = true;
    }
//    for (i; i < serverGamesI->size(); i++) {
//        if (serverGamesI->isGameInList(gameName)) {
//            badName = true;
//        }
//    }
    // user inputted a bad name
    if (badName) {
        answerToUser = "AlreadyExist";
        cout << "start new game got as game name:" << gameName << "and it's not valid" << endl;
        writeToClient(answerToUser, client);
    } else {
        // send "started"
        answerToUser = "Started";
        cout << "start new game got as game name:" << gameName << "and it's valid "<< endl;
        writeToClient(answerToUser, client);
        serverGamesI->addGame(gameName, client);
    }
}
