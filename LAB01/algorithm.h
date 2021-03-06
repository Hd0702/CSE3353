//
// Created by Hayden Donofrio on 9/1/18.
//

#ifndef LAB01_ALGORITHM_H
#define LAB01_ALGORITHM_H
 /*this class is the pure virtual class that sort implements from
 * I made it pure virtual for easy expandability for a possible search in lab2
 */
class algorithm {
public:
    enum sorts {Bubble = 0, Merge = 1, Insertion = 2};
    //Takes a filename as and can read input data file
    virtual void load(const char *, const char *) = 0;
    //Executes the search algorithm
    virtual void execute() = 0;
    //Prints solution to screen
    virtual void display() = 0;
    //Prints algorithm name, execution time and number of records analyzed to screen
    virtual void stats(unsigned int) = 0;
    //enum or int or id passed as input and loads corresponding algorithm to interface
    virtual void select(sorts) = 0;
    //Saves solution to file path given as input
    virtual void save(const char *) = 0;
    //Future expandability
    virtual void configure() = 0;
};
#endif //LAB01_ALGORITHM_H
