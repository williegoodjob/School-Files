#include "bmi.h"

typedef class bmi B;
int main()
{
    class bmi peter(170, 135, "peter");
    B mary(160, 48);

    if (35 < peter)
        cout << "重度肥胖" << endl;
    if (18.5 > peter)
        cout << "體重過輕" << endl;
    return 0;
}