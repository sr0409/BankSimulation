//
// Created by Stanley Razumov on 2019-04-18.
//

#include "BankSimulation.h"
#include "SimulateTimeEvents.h"
#include <queue>          // std::queue
#include <cstdlib>
#include <fstream>
#include <iostream>


std::ifstream data{"input.dat"};

void BankSimulation::fillQueue() {
    SimulateTimeEvents x;
    while (data >> arrivalTime >> duration) {
        ++countPeople;
        lineQueue.push(SimulateTimeEvents(true, countPeople, arrivalTime ));
        avgTime += duration;
        lineQueue.push(SimulateTimeEvents(false, countPeople, arrivalTime + duration ));

    }
        avgTime = avgTime/countPeople;
    data.close();
    while (!lineQueue.empty()) {
        x = lineQueue.pop();
        std::cout << x;

    }
}

