//
// Created by Stanley Razumov on 2019-04-18.
//

#include "BankSimulation.h"
#include <queue>          // std::queue
#include <cstdlib>
#include <fstream>
#include <iostream>

std::ifstream data{"input.dat"};

void BankSimulation::fillQueue() {
    while (data >> order >> time) {
        lineQueue.push(order);
        lineQueue.push(time);
        ++countPeople;
        avgTime += time;
    }
        avgTime = avgTime/countPeople;
    data.close();
}

