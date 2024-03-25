#include <iostream>
#include <fstream>
#include <conio.h>

using namespace std;

int main()
{
    fstream file;
    fstream out;
    file.open("data.txt", ios::in);
    out.open("out.txt", ios::out);
    if (!file)
    {
        cout << "File open error" << endl;
        exit(1);
    }
    int i;
    while (!file.eof())
    {
        file >> i;
        out << i+11 << endl;
    }
    file.close();
    out.close();
    return 0;
}