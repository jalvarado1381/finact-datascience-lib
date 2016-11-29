#include "date.h"
#include <string>


        Date::Date(){
            setDay(1), setMonth(1), setYear(1);
            monthsNumber = {"1","2","3","4","5","6","7","8","9","10","11","12"};
            monthsNamesEN = {"January","February","March","April","May","June",
            "July","August","September","October","November","December"};
            monthsNamesES = {"Enero","Febrero","Marzo","Abril","Mayo","Junio",
            "Julio","Agosto","Septiembre","Octubre","Noviembre","Diciembre"};
            monthsList.push_back(monthsNumber);
            monthsList.push_back(monthsNamesEN);
            monthsList.push_back(monthsNamesES);
        }
        Date::Date( int d, int m, int y){
            setDay(d), setMonth(m), setYear(y);
        }
        void Date::setDay( int d ){
            if ( validateDay(d) ){
                day = d;
            }
            else{
                cerr << "Invalid day number (" << d << ")." <<endl;
                exit(-1);
            }
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
            bool value = false;
            if ( d > 0 )
                for (auto i : monthDaysRanges){
                    if (d <= i ){
                        value = true;
                        break;
                    }
                    else
                        continue;
                }
            return value;
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
