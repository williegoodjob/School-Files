#include "bmi.h"

typedef class bmi B;
int main()
{
    bmi peter(170, 60, "Peter");
    B mary(160,48);
    peter.showBMI();
    peter.setHeight(175);
    peter.showBMI();
    peter.showResult();
    mary.setWeight(85);
    mary.showResult();
    mary.showBMI();
    return 0;
}