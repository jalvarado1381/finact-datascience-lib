// The functions contained in this file are pretty dummy
// and are included only as a placeholder. Nevertheless,
// they *will* get included in the static library if you
// don't remove them :)
//
// Obviously, you 'll have to write yourself the super-duper
// functions to include in the resulting library...
// Also, it's not necessary to write every function in this file.
// Feel free to add more files in this project. They will be
// included in the resulting library.

// A function adding two integers and returning the result

#include "date.h"

int SampleAddInt(int i1, int i2)
{
    return i1 + i2;
}

// A function doing nothing ;)
void SampleFunction1()
{
    // insert code here
}

// A function always returning zero
int SampleFunction2()
{
    // insert code here

    return 0;
}

int main(){
    Date d;
    Date d1 = Date(13, 12, 1981);
    d.getDate();
    d1.getDate();

    return 0;
}