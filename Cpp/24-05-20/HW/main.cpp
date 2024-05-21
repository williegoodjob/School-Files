#include <iostream>
#include <fstream>
#include "score.h"

using namespace std;

int main(int argc, char **argv)
{
 score peter(70,65),mary,tom;
    ifstream in("test.dat");
    ofstream out("final.dat");
    cin>>mary;
    cout<<mary;
    in>>tom;
    cout<<tom<<endl;
    cout<<peter+tom+mary;
    in.close();
    out.close();
    return 0;
}