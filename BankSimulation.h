//
// Created by Stanley Razumov on 2019-04-18.
//

#ifndef BANKSIMULATION_BANKSIMULATION_H
#define BANKSIMULATION_BANKSIMULATION_H


#include <queue>          // std::queue
#include <cstdlib>
#include <fstream>
#include <iostream>


class BankSimulation {
private:
    int order;
    int time;
    int countPeople;
    int avgTime;
public:
//    HealthTracker(double theWeight, double theFatPercent);
//    double getWeight() const;
//    void setWeight(double theWeight);
//    double getFatPercent() const;
//    void setFatPercent(double fatPercent);

    std::queue<int> lineQueue;
    std::ifstream data;
    void fillQueue();
    virtual ~BankSimulation() { };
};
#endif //BANKSIMULATION_BANKSIMULATION_H
