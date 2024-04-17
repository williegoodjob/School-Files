#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

int main()
{
    ifstream ifn("test.txt");
    if (!ifn.is_open())
    {
        cout << "file open error!!" << endl;
        return 1;
    }
    string Temp;
    int sum = 0;
    while (getline(ifn, Temp))
    {
        istringstream ss(Temp);
        string Name;
        string Num;
        getline(ss, Name, ',');
        getline(ss, Num, ',');
        cout << Name << endl
             << Num << endl;
        sum += stoi(Num);
    }
    cout << "Á`¦@ " << sum << endl;

    return 0;
}
