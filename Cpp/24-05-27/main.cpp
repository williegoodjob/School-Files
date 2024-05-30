#include <iostream>
#include <string>
#include "person.h"

using namespace std;

int main()
{
    person tom("Tom", 30, 1), peter("Peter", 15, 1), mary("Mary");
    tom--;
    ++mary;
    if (tom == mary)
        cout << "tome與mary相同年齡!" << endl;
    else if (tom > mary)
        cout << "tome比mary年齡大!" << endl;
    else if (tom < mary)
        cout << "tome比mary年齡小!" << endl;

    if (peter > 18)
        cout << "peter已經成年!" << endl;
    else
        cout << "peter未成年!" << endl;
    return 0;
}