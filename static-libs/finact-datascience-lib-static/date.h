#ifndef DATE_H_INCLUDED
#define DATE_H_INCLUDED

#include <iostream>
#include <string>
#include <sstream>
#include <list>
#include <vector>
#include <map>
#include <iterator>

#include "day.h"
#include "month.h"

using namespace std;

class Date {
    private:
        list<int> monthDaysRanges = {28,29,30,31};
        list<int> yearDayRanges = {360, 365, 366};
        const int monthsPerYear = 12;

        std::map  < int, list<string>, less< int > > months;

        list<string>  monthsNumber = {"1","2","3","4","5","6","7","8","9","10","11","12"};
        list<string>  monthsNames= {"January","February","March","April","May","June",
            "July","August","September","October","November","December"};

        std::vector< list<string> > dayNames = {
            {"1","Monday"},
            {"2","Tuesday"},
            {"3","Wednesday"},
            {"4","Thursday"},
            {"5","Friday"},
            {"6","Saturday"},
            {"7","Sunday"}
        };

//        Day d;
  //      Month m;

        Day day;
        Month month;
        int year;

        void initializeDate();
        void initializeMonths();
        bool validateDay(int);
        bool validateMonth(int);
        bool validateYear(int);

    public:
        Date();
        Date( int d, int m, int y);

        void setDay( int d );
        void setMonth( int m );
        void setYear( int y );
        int getDay();
        int getMonth();
        int getYear();
        /*string getDate(){
            std::ostringstream ss;
            ss << getDay() << "/" << getMonth() << "/" << getYear() << endl;
            string date = ss.str();
            return date;
        }*/
        void setDate(int d, int m, int y);
        string getDate();
        list<string> getMonths( string );
};

#endif // DATE_H_INCLUDED
