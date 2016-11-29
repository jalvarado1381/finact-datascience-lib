#include "date.h"
#include <string>


        Date::Date(){
            setDay(0), setMonth(0), setYear(0);
        }
        Date::Date( int d, int m, int y){
            setDay(d), setMonth(m), setYear(y);
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

        bool Date::validateDay(int d ){
            //monthDaysRanges.
        }
        bool Date::validateMonth(int m ){}
        bool Date::validateYear(int y){}

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

        list<string> Date::getMonths( string i ){
            if (i =="ES"){
                return Date::monthsNamesES;}
            else if (i == "EN"){
                return Date::monthsNamesEN;}
            else
                {list<string> a; return a;}
        }
