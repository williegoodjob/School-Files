#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>

using namespace std;

struct Number
{
    int num;
    bool iP;
    bool N;
};

int main()
{
    ifstream fin("quiz.dat");
    if (!fin.is_open())
    {
        cout << "Error: File open failed!!" << endl;
        return 1;
    }
    vector<Number> NList;
    string line;
    while (getline(fin, line))
    {
        int TNum = stoi(line);
        bool TiP = TNum % 2 == 0;
        bool TN = TNum < 0;
        Number Tlist;
        Tlist.num = TNum;
        Tlist.iP = TiP;
        Tlist.N = TN;
        NList.push_back(Tlist);
    }
    int sum = 0;
    bool first = 1;
    for (const auto &d : NList)
    {
        if (d.iP)
        {
            sum += d.num;
            if (!first && !d.N)
            {
                cout << "+";
            }
            cout << d.num;
            first = 0;
        }
    }
    cout << "=" << sum;
    return 0;
}
