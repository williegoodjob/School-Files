#include <iostream>

using namespace std;

typedef struct student
{
    string name;
    string id;
    float one, two, avg;
    void input()
    {
        cout << "Name: ";
        cin >> name;
        cout << "ID: ";
        cin >> id;
        cout << "Score 1: ";
        cin >> one;
        cout << "Score 2: ";
        cin >> two;
        avg = (one + two) * 0.5;
    }
    void show()
    {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Score 1: " << one << endl;
        cout << "Score 2: " << two << endl;
        cout << "Average: " << avg << endl;
    }
} myObj;

int main()
{
    myObj s;
    s.input();
    s.show();
    return 0;
}