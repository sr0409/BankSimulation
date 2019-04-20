//
// Created by Stanley Razumov on 2019-04-18.
//

#ifndef BANKSIMULATION_BANKSIMULATION_H
#define BANKSIMULATION_BANKSIMULATION_H


#include <queue>          // std::queue
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <vector>
#include "SimulateTimeEvents.h"

class ComparisonClass {
public:
    bool operator() (SimulateTimeEvents a, SimulateTimeEvents b) {
        return a.time > b.time;
    }
};

class BankSimulation {
public:
    int arrivalTime;
    int duration;
    int countPeople = 0;
    int avgTime;

//    HealthTracker(double theWeight, double theFatPercent);
//    double getWeight() const;
//    void setWeight(double theWeight);
//    double getFatPercent() const;
//    void setFatPercent(double fatPercent);

    std::priority_queue<SimulateTimeEvents, std::vector<SimulateTimeEvents>, ComparisonClass> lineQueue;
    std::ifstream data;
    void fillQueue();
    virtual ~BankSimulation() { };
};
#endif //BANKSIMULATION_BANKSIMULATION_H
