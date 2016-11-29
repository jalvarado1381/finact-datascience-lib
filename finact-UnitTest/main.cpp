#include <iostream>
#include <string>
#include <sstream>
#include <list>

#include <date.h>

using namespace std;


int main()
{
    Date d;
    cout << d.getDate() << endl;
    Date d1 = Date(-13,12,1981);
    for ( auto i : d1.getMonths("ES"))
        cout << i + " ";
    cout << endl;
    for ( auto i : d1.getMonths("EN") )
        cout << i + " ";

    return 0;
}
