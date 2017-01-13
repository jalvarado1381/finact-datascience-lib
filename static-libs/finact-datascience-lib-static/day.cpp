#include "day.h"


Day::Day(){
    setDay();
}

Day::Day( int d ){
    setDay(d);
}

void Day::setDay(){
    day = 1;
}

void Day::setDay( int d ){
    int d = 0;
    if (d >= 1 && d <= 31 ){
        day = d;
    }
    else{
        cerr << "Invalid day number:" << " " << d  << "\n"
             <<"The day should have a value between 1 and 31.";
    }
}

int Day::getDay(){
    return monthDay;
}

