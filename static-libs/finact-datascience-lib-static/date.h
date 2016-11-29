#ifndef DATE_H_INCLUDED
#define DATE_H_INCLUDED

#include <iostream>
#include <string>
#include <sstream>
#include <list>

using namespace std;

class Date {
    private:
        list<int> monthDaysRanges = {28,29,30,31};
        list<int> yearDayRanges = {360, 365, 366};
        const int yearMonths = 12;
        list<string> monthsNamesEN = {"January","February","March","April","May","June",
        "July","August","September","October","November","December"};
        list<string> monthsNamesES = {"Enero","Febrero","Marzo","Abril","Mayo","Junio",
        "Julio","Agosto","Septiembre","Octubre","Noviembre","Diciembre"};
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
        list<string> getMonths( string );
};

#endif // DATE_H_INCLUDED
