#include <iostream>
#include <fstream>
#include <conio.h>

using namespace std;

bool ckdigit(string s);
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
    string s;
    while (!file.eof())
    {
        file >> s;
        if (ckdigit(s))
        {
            out << stoi(s) + 11 << endl;
        }else{
            out << s << endl;
        }
    }
    file.close();
    out.close();
    return 0;
}

bool ckdigit(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (!isdigit(s[i]))
        {
            return false;
        }
    }
    return true;
}
