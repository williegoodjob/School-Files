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
        cout << "�ɮ׶}�ҥ���" << endl;
        return 1;
    }
    cout << "�ɮ׶}�ҧ���" << endl;
    
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
    cout << "�ɮׯ��ާ���" << endl;
    while (1)
    {
        cout << endl
             << "�п�J�n�䪺�m�W:";
        string name;
        bool flag = false;
        cin >> name;
        for (int i = 0; i < StudentList.size(); i++)
        {
            if (StudentList[i].name == name)
            {
                cout << StudentList[i].name << "�����Z�O" << StudentList[i].score << endl;
                flag = true;
            }
        }
        if (!flag)
            cout << "�d�L���H" << endl;
    }
    return 0;
}