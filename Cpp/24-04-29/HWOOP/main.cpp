#include "PM2_5.h"

int main()
{
    PM25Data data("work.csv");
    data.sortData(0);
    data.printData();
    return 0;
}