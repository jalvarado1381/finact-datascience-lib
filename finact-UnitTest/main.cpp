#include <iostream>
#include <string>
#include <sstream>
#include <list>

#include <date.h>
#include <day.h>

using namespace std;


int main()
{
    Date d;
    cout << d.getDate() << endl;
<<<<<<< HEAD
    Date d1 = Date(14,12,1981);
    for ( auto i : d1.getMonths("ES"))
        cout << i + " ";
=======
    Date d1 = Date(13,12,1981);
>>>>>>> 10ae9f1581aacda319234e3307fa83c33d2363ca
    cout << endl;
    for ( auto i : d1.getMonths("EN") )
        cout << i + " ";

    Day dy0 = Day();
    cout << dy0.getDay();
    Day dy1 = Day(38);
    Day dy2 = Day(15);

    cout << dy0.getDay() << endl;
    cout << dy1.getDay();

    string nombre = "Juan";

    string apellido = "Alvarado";
    int e = 35;
    int &e1 = &e;
    int *edad = &e;
    *edad=19;

    string apellido2 = std::string("Perez");

    cout << endl << nombre << " " << &apellido << " " << apellido2
         << " " << e;


    return 0;
}
