#include "CsvDecode.h"
#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>

using namespace std;

struct student
{
    string name;
    string email;
    float one = 0;
    float two = 0;
    float avg = 0;
};

int main()
{
    CsvDecode csv("score.csv");
    if (csv.decode(','))
    {
        cout << "Error reading file" << endl;
        return 1;
    }
    vector<vector<string>> data = csv.get_data();
    vector<student> StudentList;
    float a, b;
    for (auto const &row : data)
    {
        student temp;
        temp.name = row[0];
        temp.email = row[1];
        try
        {
            temp.one = stof(row[2]);
        }
        catch (std::invalid_argument &){}
        try
        {
            temp.two = stof(row[3]);
        }
        catch (std::invalid_argument &){}
        
        temp.avg = (temp.one + temp.two) * 0.5;
        StudentList.push_back(temp);
    }

    sort(StudentList.begin(), StudentList.end(), [](const student &a, const student &b) { return a.avg > b.avg; });
    
    ofstream file("out.csv");
    file << "名次,姓名,學號,實作,選擇,期中" << endl;
    cout << "名次"<<setw(10)<<"姓名"<<setw(10)<<"學號"<<setw(10)<<"實作"<<setw(10)<<"選擇"<<setw(10)<<"期中" << endl;
    int i = 1;
    for (const auto &s : StudentList)
    {
        file << i++ << "," << s.name << "," << s.email << "," << s.one << "," << s.two << "," << s.avg << endl;
        cout << i-1 << setw(10) << s.name << setw(10) << s.email << setw(10) << s.one << setw(10) << s.two << setw(10) << s.avg << endl;
    }
    file.close();
    return 0;
}
