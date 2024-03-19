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
    cout << "請問您的姓名:";
    cin >> name;
    cout << "請問您出生哪年(民國):";
    cin >> year;
    fout << name << "出生民國" << year ;
    year += 1911;
    fout << "年，今年" << 1900 + ltm->tm_year - year << "歲。";
    fout.close();
    cout << "檔案已經輸出到age.txt" << endl;
    return 0;
}