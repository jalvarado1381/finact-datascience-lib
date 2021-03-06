#include "date.h"
#include <string>


        Date::Date(){
            /*list<int> monthDaysRanges = {28,29,30,31};
            list<int> yearDayRanges = {360, 365, 366};
            monthsNumber = {"1","2","3","4","5","6","7","8","9","10","11","12"};
            monthsNamesEN = {"January","February","March","April","May","June",
            "July","August","September","October","November","December"};
            monthsNamesES = {"Enero","Febrero","Marzo","Abril","Mayo","Junio",
            "Julio","Agosto","Septiembre","Octubre","Noviembre","Diciembre"};
            monthsList.push_back(monthsNumber);
            monthsList.push_back(monthsNamesEN);
            monthsList.push_back(monthsNamesES);*/
            initializeMonths();
            initializeDate();
            setDay(1), setMonth(1), setYear(1);
        }

        Date::Date( int d, int m, int y){
            initializeDate();
            setDay(d), setMonth(m), setYear(y);
        }

        void Date::initializeDate(){
            string  monthsNumber[] = {"1","2","3","4","5","6","7","8","9","10","11","12"};
            string monthsNames[] = {"January", "February", "March", "April", "May", "June",
            "July", "August", "September", "October", "November", "December"};
            /*for (int i = 0; i < 12; ++i){
                Date::months.insert(make_pair(monthsNamesEN[i], monthsNamesES[i]));
            }*/
        }
        void Date::initializeMonths(){
            std::list< list<string> > monthsList = {
                {"1", "January", "Jan"},
                {"2", "February", "Feb"},
                {"3", "March", "Mar"},
                {"4", "April", "Apr"},
                {"5", "May", "May"},
                {"6", "June", "Jun"},
                {"7", "July", "Jul"},
                {"8", "August", "Aug"},
                {"9", "September", "Sep"},
                {"10", "October", "Oct"},
                {"11", "November", "Nov"},
                {"12", "December", "Dec"}
            };

            int n = 1;

            n = 1;
            for (auto i = monthsList.cbegin(); i != monthsList.cend(); ++i){
                Date::months.insert(make_pair(n, *i));
                //cout << *i << endl;
                ++n;
            };
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
