//
// Created by Hayden Donofrio on 9/1/18.
//

#ifndef LAB01_SORT_H
#define LAB01_SORT_H

#include "algorithm.h"
#include <vector>

//this is the overall class for implemnting sorts based off enums
class sort: public algorithm {
public:
    sort() = default;
    void load(const char*);
    void execute();
    void display();
    void stats();
    void select(sorts);
    void save(const char*);
    void configure();

private:
    std::vector<int> data;
    algorithm::sorts sortType;
};


#endif //LAB01_SORT_H
