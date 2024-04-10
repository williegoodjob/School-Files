#include "PM2_5.h"

PM25Data::PM25Data()
{
}

PM25Data::PM25Data(const string &filename)
{
    loadData(filename);
}

void PM25Data::loadData(const string &filename)
{
    ifstream fin(filename);
    if (!fin.is_open())
    {
        cout << "Error: File open failed!!" << endl;
    }
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
}

void PM25Data::sortData(bool isAscending)
{
    for (int i = data.size() - 1; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if ((data[j].pm25 > data[j + 1].pm25 && isAscending) || (data[j].pm25 < data[j + 1].pm25 && !isAscending))
            {
                pm25 temp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = temp;
            }
        }
    }
}

void PM25Data::printData() const
{
    cout << left << setw(8) << "Site" << setw(5) << "PM2.5" << endl;
    for (const auto &d : data)
    {
        cout << left << setw(8) << d.site << setw(5) << d.pm25 << endl;
    }
}
