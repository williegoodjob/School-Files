#include <iostream>
#include <string>

using namespace std;

class person
{
public:
    string name;
    int age;
    int sex;
    
};

class teacher : public person
{
public:
    string school;
};

class student : public person
{
public:
    string student_id;
    string school;
};

int main()
{
    person peter;
    student mary;
    peter.name = "Peter";
    peter.age = 17;
    peter.sex = 1;

    mary.school = "STUST";
    mary.name = "Mary";
    mary.sex=0;
    mary.age = 16;
    mary.student_id = "5g4b0011";

    return 0;
}
