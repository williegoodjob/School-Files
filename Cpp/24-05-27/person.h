#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string>

using namespace std;
class person
{
    friend bool operator==(person a, person b);
    friend bool operator==(person a, int b);
    friend bool operator>(person a, person b);
    friend bool operator>(person a, int b);
    friend bool operator<(person a, person b);
    friend bool operator<(person a, int b);
    friend bool operator>=(person a, person b);
    friend bool operator>=(person a, int b);
    friend bool operator<=(person a, person b);
    friend bool operator<=(person a, int b);

    friend person operator++(person &a, int);
    friend person &operator++(person &a);
    friend person operator--(person &a, int);
    friend person &operator--(person &a);

    string name;
    int age;
    int sex;

public:
    person(string a, int b = 18, int c = 0)
    {
        name = a;
        age = b;
        sex = c;
    }
    void operator=(person a)
    {
        name = a.name;
        age = a.age;
        sex = a.sex;
    }
    void showName()
    {
        cout << name << endl;
    }
    void showAll()
    {
        cout << "�ڥs" << name << "���~" << age << "��" << endl;
        if (sex == 0)
            cout << "�ڬO�k��" << endl;
        else if (sex == 1)
            cout << "�ڬO�k��" << endl;
        else
            cout << "�ʧO����" << endl;
    }
};

bool operator==(person a, person b)
{
    return a.age == b.age;
}

bool operator==(person a, int b)
{
    return a.age == b;
}

bool operator>(person a, person b)
{
    return a.age > b.age;
}

bool operator>(person a, int b)
{
    return a.age > b;
}

bool operator<(person a, person b)
{
    return a.age < b.age;
}

bool operator>=(person a, person b)
{
    return a.age >= b.age;
}

bool operator>=(person a, int b)
{
    return a.age >= b;
}
bool operator<=(person a, person b)
{
    return a.age <= b.age;
}
bool operator<=(person a, int b)
{
    return a.age <= b;
}
person operator++(person &a, int)
{
    person temp = a;
    a.age++;
    return temp;
}

person &operator++(person &a)
{
    a.age++;
    return a;
}

person operator--(person &a, int)
{
    person temp = a;
    a.age--;
    return temp;
}

person &operator--(person &a)
{
    a.age--;
    return a;
}

#endif