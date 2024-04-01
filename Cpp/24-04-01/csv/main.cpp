#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include <iomanip>
using namespace std;

struct Student
{
    string name;
    string id;
    string score;
};

int main()
{
    ifstream fin;
    string line;
    vector<Student> StudentList;
    fin.open("data.csv");
    if (!fin)
    {
        cout << "檔案開啟失敗" << endl;
        return 1;
    }
    cout << "檔案開啟完成" << endl;
    
    while (getline(fin, line))
    {
        Student student;
        stringstream ss(line);
        getline(ss, student.name, ',');
        getline(ss, student.id, ',');
        getline(ss, student.score, ',');
        StudentList.push_back(student);
    }
    fin.close();
    cout << "檔案索引完成" << endl;
    while (1)
    {
        cout << endl
             << "請輸入要找的姓名:";
        string name;
        bool flag = false;
        cin >> name;
        for (int i = 0; i < StudentList.size(); i++)
        {
            if (StudentList[i].name == name)
            {
                cout << StudentList[i].name << "的成績是" << StudentList[i].score << endl;
                flag = true;
            }
        }
        if (!flag)
            cout << "查無此人" << endl;
    }
    return 0;
}