#include "day.h"


Day::Day(){
    setDay();
}

Day::Day( int d ){
    setDay(d);
}

void Day::setDay(){
    monthDay = 1;
}

void Day::setDay( string d ){
    cout << d << endl;
    int d1 = 0;
    if (d1 > 0 && d1 < 31 ){
        monthDay = d1;
    }
    else{
        cerr << "Invalid day number:" << " "<< d  << "\n"
             <<"The day should have a value between 1 and 31.";
    }
}

int Day::getDay(){
    return monthDay;
}

