//
// Created by Hayden Donofrio on 9/1/18.
//

#ifndef LAB01_SORT_H
#define LAB01_SORT_H

#include "algorithm.h"
#include <vector>
#include <string>
//this is the overall class for implementing sorts based off enums
//it inherits from algorithm and uses all sort types
class sort: public algorithm {
public:
    sort() = default;
    void load(const char*, const char *);
    void execute();
    void display();
    void stats(unsigned int);
    void select(sorts);
    void save(const char*);
    void configure();
private:
    static std::string algoType;
    static int dataSize;
    static std::string dataType;
    std::vector<int> data;
    algorithm::sorts sortType;

};


#endif //LAB01_SORT_H
