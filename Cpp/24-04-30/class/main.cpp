#include <iostream>
#include "myobj.h"

using namespace std;

int main()
{
    cout << "Enter number of students: ";
    int n;
    cin >> n;
    myObj obj(n);
    obj.batchInput();
    obj.batchOutput();
    return 0;
}