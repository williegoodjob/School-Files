#include <iostream>
#include <fstream>
// #include <algorithm>
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

// bool compareByScore(Student a, Student b);
vector<Student> bubbleSort(vector<Student> StudentList, bool isAsc);

int main()
{
    ifstream fin;
    string line;
    vector<Student> StudentList;
    fin.open("0401score.csv");
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
    // sort(StudentList.begin(), StudentList.end(), compareByScore);
    StudentList = bubbleSort(StudentList, 0);
    for (int i = 0; i < StudentList.size(); i++)
    {
        cout << setw(10) << StudentList[i].name << setw(8) << StudentList[i].id << setw(6) << StudentList[i].score << endl;
    }

    return 0;
}

// bool compareByScore(Student a, Student b)
// {
//     return stof(a.score) > stof(b.score);
// }

vector<Student> bubbleSort(vector<Student> StudentList, bool isAsc)
{
    for (int i = 0; i < StudentList.size(); i++)
    {
        for (int j = 0; j < StudentList.size() - i - 1; j++)
        {
            if (isAsc)
            {
                if (stof(StudentList[j].score) > stof(StudentList[j + 1].score))
                {
                    swap(StudentList[j], StudentList[j + 1]);
                }
            }
            else
            {
                if (stof(StudentList[j].score) < stof(StudentList[j + 1].score))
                {
                    swap(StudentList[j], StudentList[j + 1]);
                }
            }
        }
    }
    return StudentList;
}