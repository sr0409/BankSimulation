//
// Created by debian on 2019-04-20.
//

#ifndef BANKSIMULATION_SIMULATETIMEEVENTS_H
#define BANKSIMULATION_SIMULATETIMEEVENTS_H




class SimulateTimeEvents {
public:
    bool typeIsArrival;
    int personNum;
    int time;
    SimulateTimeEvents (bool typeIsArrival, int personNum, int time) : typeIsArrival(typeIsArrival), personNum(personNum), time(time){

    }
};


#endif //BANKSIMULATION_SIMULATETIMEEVENTS_H
