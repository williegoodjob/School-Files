#include "bmi.h"
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    class BMI peter;
    ifstream myFileIn("bmi1.dat"); // name,height,weight
    ofstream myFileOut("bmi2.dat"); // Peter�A����170cm�A�魫80kg�ABMI=27.6.�A�P�w���תέD
    
    myFileIn>>peter;
    myFileOut<<peter;
    
    myFileIn.close();
    myFileOut.close();
 
    return 0;
}