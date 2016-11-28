#ifndef DATE_H_INCLUDED
#define DATE_H_INCLUDED

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class Date {
    private:
        int day, month, year;
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
};

#endif // DATE_H_INCLUDED
