#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream fout;
    fout.open("age.txt");
    string name;
    int year;
    cout << "�аݱz���m�W:";
    cin >> name;
    cout << "�аݱz�X�ͭ��~(����):";
    cin >> year;
    fout << name << "�X�ͥ���" << year << "�~�A���~" << 113 - year << "���C";
    fout.close();
    cout << "�ɮפw�g��X��age.txt" << endl;
    return 0;
}