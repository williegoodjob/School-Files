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
        cout << "tome�Pmary�ۦP�~��!" << endl;
    else if (tom > mary)
        cout << "tome��mary�~�֤j!" << endl;
    else if (tom < mary)
        cout << "tome��mary�~�֤p!" << endl;

    if (peter > 18)
        cout << "peter�w�g���~!" << endl;
    else
        cout << "peter�����~!" << endl;
    return 0;
}