#include "PM2_5.h"

int main()
{
    PM25Data data;
    data.loadData("work.csv");
    data.sortData(0);
    data.printData();
    return 0;
}
