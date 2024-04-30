#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream file("test.dat");
    int a = 10;
    if (!file.is_open())
    {
        cout << "File not found" << endl;
        return 1;
    }
    file >> a;
    cout << "a=" << a << endl;
    return 0;
}