#include <iostream>
#include <fstream>
#include <ctime>

using namespace std;

int main()
{
    ofstream fout;
    fout.open("age.txt");
    string name;
    time_t now = time(0);
    tm *ltm = localtime(&now);
    int year;
    cout << "�аݱz���m�W:";
    cin >> name;
    cout << "�аݱz�X�ͭ��~(����):";
    cin >> year;
    fout << name << "�X�ͥ���" << year ;
    year += 1911;
    fout << "�~�A���~" << 1900 + ltm->tm_year - year << "���C";
    fout.close();
    cout << "�ɮפw�g��X��age.txt" << endl;
    return 0;
}