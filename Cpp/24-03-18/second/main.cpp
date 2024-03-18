#include <fstream>
#include <iostream>

using namespace std;

int main()
{
    ofstream fout;
    fout.open("test.txt");
    fout << "Hello, World!";
    fout.close();
}