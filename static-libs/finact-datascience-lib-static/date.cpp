#include "date.h"


       Date::Date(){
            day = setDay(0), setMonth(month )= 0, setYear(year) = 0;
        }
        Date::Date( int d, int m, int y){
            day = setDay(d), month = setMonth(m), year = setYear(y);
        }
        void Date::setDay( int d ){
            day = d;
        }
        void Date::setMonth( int m ){
            month = m;
        }
        void Date::setYear( int y ){
            year = y;
        }
        void Date::setDate(int d, int m, int y){
            setDay(d);
            setMonth(m);
            setYear(y);
        }
        int Date::getDay(){
            return day;
        }
        int Date::getMonth(){
            return month;
        }
        int Date::getYear(){
            return year;
        }

        string Date::getDate(){
            string d = to_string(getDay());
            string m = to_string(getMonth());
            string y = to_string(getYear());
            string date = d + "/" + m + "/" + y;
            return date;
        }
