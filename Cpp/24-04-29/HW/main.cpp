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

void sort(vector<pm25> &data,bool isAcending);

int main()
{
    ifstream fin("work.csv");
    if (!fin.is_open())
    {
        cout << "Error: File open failed!!" << endl;
        return 1;
    }
    vector<pm25> data;
    string line;
    while (getline(fin, line))
    {
        istringstream ss(line);
        pm25 temp;
        string tempP;
        getline(ss, temp.site, ',');
        getline(ss, temp.county, ',');
        getline(ss, tempP, ',');
        getline(ss, temp.dataCreationDate, ',');
        getline(ss, temp.itemUnit, ',');
        temp.pm25 = stoi(tempP);
        data.push_back(temp);
    }
    fin.close();
    sort(data, 0);
    cout << left << setw(8) << "Site" << setw(5) << "PM2.5" << endl;
    for (const auto &d : data)
    {
        cout << left << setw(8) << d.site << setw(5) << d.pm25 << endl;
    }
    return 0;
}

void sort(vector<pm25> &data,bool isAcending)
{
    for (int i=data.size()-1; i>0; i--)
    {
        for (int j=0; j<i; j++)
        {
            if ((data[j].pm25 > data[j+1].pm25 && isAcending) || (data[j].pm25 < data[j+1].pm25 && !isAcending))
            {
                pm25 temp = data[j];
                data[j] = data[j+1];
                data[j+1] = temp;
            }
        }
    }
}