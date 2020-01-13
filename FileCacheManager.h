//
// Created by eizzker on 13/01/2020.
//

#ifndef MILE_STONE_2_FILECACHEMANAGER_H
#define MILE_STONE_2_FILECACHEMANAGER_H

#include "CacheManager.h";

class FileCacheManager : public CacheManager {
    // implement those func:

    int doWeHaveSolution(); // return if there is a solution
    Solver pop(); // pop solution to problem P
    void save(Solver s); // save solution s to problem P
};


#endif //MILE_STONE_2_FILECACHEMANAGER_H
