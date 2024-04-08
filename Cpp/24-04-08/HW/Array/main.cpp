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
        cout << "�ɮ׶}�ҥ���" << endl;
        return 1;
    }
    cout << "�ɮ׶}�ҧ���" << endl;
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
    cout << "�ɮׯ��ާ����A�@��" << StudentList.size() << "��" << endl;
    int number;
    srand(time(0));
    number = rand() % StudentList.size();
    cout << "�H����ܪ��ǥͬ��G" << StudentList[number].Name << endl;
    return 0;
}