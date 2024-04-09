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

void sort(vector<pm25> &data);

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
    sort(data);
    cout << left << setw(8) << "Site" << setw(5) << "PM2.5" << endl;
    for (int i = 0; i < data.size(); i++)
    {
        cout << left << setw(8) << data[i].site << setw(5) << data[i].pm25 << endl;
    }
    return 0;
}

void sort(vector<pm25> &data)
{
    for (int i = 0; i < data.size(); i++)
    {
        for (int j = i + 1; j < data.size(); j++)
        {
            if (data[i].pm25 < data[j].pm25)
            {
                swap(data[i], data[j]);
            }
        }
    }
}