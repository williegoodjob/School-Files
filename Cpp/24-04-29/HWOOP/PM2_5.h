#ifndef PM2_5_H
#define PM2_5_H
#endif

#include <iostream>
#include <iomanip>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>

using namespace std;

struct pm25
{
    string site;
    string county;
    int pm25;
    string dataCreationDate;
    string itemUnit;
};

class PM25Data
{
private:
    vector<pm25> data;
public:
    PM25Data();
    PM25Data(const string &filename);
    void loadData(const string &filename);
    void sortData(bool isAscending);
    void printData() const;
};