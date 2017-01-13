#ifndef MONTH_H_INCLUDED
#define MONTH_H_INCLUDED

#include <iostream>
#include <string>
#include <list>

using namespace std;

class Month{
private:
    string m = "";
    list<string>  monthsNumber = {"1","2","3","4","5","6","7","8","9","10","11","12"};
    list<string> monthsNames= {"January","February","March","April","May","June",
            "July","August","September","October","November","December"};

    std::list< list<string> > monthsList;

public:
        Month();
        void setMonth( std::string );
        void setMonth( int );
        std::string getMonth();
        int getMonthNumber();
};

#endif
