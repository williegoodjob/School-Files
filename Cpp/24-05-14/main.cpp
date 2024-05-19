#include "bmi.h"
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    class BMI peter;
    ifstream myFileIn("bmi1.dat"); // name,height,weight
    ofstream myFileOut("bmi2.dat"); // Peter你身高170cm，體重80kg，BMI=27.6.，判定輕度肥胖
    
    myFileIn>>peter;
    myFileOut<<peter;
    
    myFileIn.close();
    myFileOut.close();
 
    return 0;
}