#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream fout;
    fout.open("age.txt");
    string name;
    int year;
    cout << "請問您的姓名:";
    cin >> name;
    cout << "請問您出生哪年(民國):";
    cin >> year;
    fout << name << "出生民國" << year << "年，今年" << 113 - year << "歲。";
    fout.close();
    cout << "檔案已經輸出到age.txt" << endl;
    return 0;
}