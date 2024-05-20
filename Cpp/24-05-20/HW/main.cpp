#include <iostream>
#include <fstream>
#include "score.h"

using namespace std;

int main(int argc, char **argv)
{
    ifstream in("test.dat");
    ofstream out("final.dat");
    score peter(80, 70), mary, tom;
    cin >> mary;
    in >> tom;
    cout << peter;
    mary = peter + 30;
    cout << "mary=" << mary << endl;
    out << peter + tom + mary;
    return 0;
}