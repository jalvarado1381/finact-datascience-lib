//Juan Alvarado
// Class day is used to define the object to be used by the class Date
#ifndef DAY_H_INCLUDED
#define DAY_H_INCLUDED

#include <iostream>
#include <string>
#include <sstream>
#include <list>
#include <vector>
#include <map>
#include <iterator>

using namespace std;

class Day{

private:
    int day; //day of the month 1-31

public:
    Day();
    Day(int);
    void setDay();
    void setDay(int);
    int getDay();

};
#endif
