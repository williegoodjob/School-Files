#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include <iomanip>
using namespace std;

int main()
{
    ifstream fin;
    string line;
    vector<string> data;
    fin.open("data.csv");
    if (!fin)
    {
        cout << "檔案開啟失敗" << endl;
        return 1;
    }
    while (getline(fin, line))
    {
        data.push_back(line);
    }
    fin.close();

    for (int i = 0; i < data.size(); i++)
    {
        cout << data[i] << endl;
    }
    
    for (int i = 0; i < data.size(); i++)
    {
        if (data[i].find("臺南") != string::npos)
        {
        cout << "---------------------------------" << endl;
            stringstream ss(data[i]);
            string item;
            while (getline(ss, item, ','))
            {
                cout << item << endl;
            }
        }
    }
    return 0;
}