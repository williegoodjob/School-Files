#include <iostream>
#include <iomanip>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <random>
#include <ctime>
#include <cstdlib>

using namespace std;

struct Student
{
    string Name;
    string Id;
    string Email;
};

int main()
{
    ifstream fin;
    string line;
    vector<Student> StudentList;
    fin.open("../../randomName/test.csv");
    if (!fin)
    {
        cout << "檔案開啟失敗" << endl;
        return 1;
    }
    cout << "檔案開啟完成" << endl;
    while (getline(fin, line))
    {
        Student studentT;
        stringstream sT(line);
        getline(sT, studentT.Name, ',');
        getline(sT, studentT.Id, ',');
        getline(sT, studentT.Email, ',');
        StudentList.push_back(studentT);
    }
    fin.close();
    cout << "檔案索引完成，共有" << StudentList.size() << "筆" << endl;
    int number;
    srand(time(0));
    number = rand() % StudentList.size();
    cout << "隨機選擇的學生為：" << StudentList[number].Name << endl;
    return 0;
}