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
        cout << "�ɮ׶}�ҥ���" << endl;
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
    cout << "---------------------------------" << endl;
    // �M����
    for (int i = 0; i < data.size(); i++)
    {
        if (data[i].find("���") != string::npos)
        {
            cout << data[i] << endl;
        }
    }
    return 0;
}