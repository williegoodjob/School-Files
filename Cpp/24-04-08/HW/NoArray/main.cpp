#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <ctime>
#include <cstdlib>
using namespace std;
int GetLineCount(ifstream &fin, int &index);
string GetRandomName(ifstream &fin, int index);
int main()
{
    ifstream fin("../../randomName/test.csv");
    int index = 0, randNum = 0;
    if (!fin.is_open())
    {
        cout << "Error: File open failed!!" << endl;
        return 1;
    }
    GetLineCount(fin, index);
    srand(time(0));
    randNum = rand() % index;
    cout << "隨機選擇的學生為：" << GetRandomName(fin, randNum) << endl;
    return 0;
}
int GetLineCount(ifstream &fin, int &index)
{
    string line;
    while (getline(fin, line))
    {
        index++;
    }
    fin.clear();
    fin.seekg(0);
}

string GetRandomName(ifstream &fin, int index)
{
    string line;
    istringstream ss;
    for (int i = 1; i <= index; i++)
    {
        getline(fin, line);
        if (i == index)
        {
            ss.str(line);
            string name;
            getline(ss, name, ',');
            return name;
        }
    }
}
