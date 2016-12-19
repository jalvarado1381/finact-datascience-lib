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
    list<string> monthsNamesEN = {"January","February","March","April","May","June",
            "July","August","September","October","November","December"};
    list<string> monthsNamesES = {"Enero","Febrero","Marzo","Abril","Mayo","Junio",
            "Julio","Agosto","Septiembre","Octubre","Noviembre","Diciembre"};
    void initializeMonths(){

        std::list< list<string> > monthsList = {
            {"1","January","Jan","Enero"},
            {"2","February","Feb","Febrero"},
            {"3","March","Mar","Marzo"},
            {"4","April","Apr","Abril"},
            {"5","May","May","Mayo"},
            {"6","June","Jun","Junio"},
            {"7","July","Jul","Julio"},
            {"8","August","Aug","Agosto"},
            {"9","September","Sep","Septiembre"},
            {"10","October","Oct","Octubre"},
            {"11","November","Nov","Noviembre"},
            {"12","December","Dec","Diciembre"}
        };

        int n = 1;

        for (auto i = monthsNamesES.cbegin(); i != monthsNamesES.cend(); ++i){
            cout << *i << endl;
            ++n;
        };

    }

    public:
        Month();

};

#endif
