#include "bmi.h"
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    class bmi peter;
    ifstream myFileIn("bmi1.dat"); 
    ofstream myFileOut("bmi2.dat"); 
    
    myFileIn>>peter;
    myFileOut<<peter;
    
    myFileIn.close();
    myFileOut.close();
 
    return 0;
}
 