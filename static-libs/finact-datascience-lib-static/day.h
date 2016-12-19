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
    std::vector< list<string> > dayNames = {
            {"1","Monday","Lunes"},
            {"2","Tuesday","Martes"},
            {"3","Wednesday","Miercoles"},
            {"4","Thursday","Jueves"},
            {"5","Friday","Viernes"},
            {"6","Saturday","Sabado"},
            {"7","Sunday","Domingo"}
    };

    int weekDayNum;
    string weekDayName;
    int monthDay; //day of the month 1-31

public:
    Day();
    Day(int);
    void setDay();
    void setDay(int);
    int getDay();

};
#endif
