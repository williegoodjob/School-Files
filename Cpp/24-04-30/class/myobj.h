#ifndef MYOBJ_H
#define MYOBJ_H

#include <iostream>

class myObj
{
private:
    struct student
    {
        std::string name;
        std::string id;
        float one;
        float two;
        float avg;
    };
    int n;
    student *studentslist;
public:
    myObj(int n){
        this->n = n;
        this->studentslist = new student[n];
    }
    ~myObj(){
        delete[] studentslist;
    }
    void batchInput()
    {
        for (int i = 0; i < n; i++)
        {
            std::cout << "Enter student name: ";
            std::cin >> studentslist[i].name;
            std::cout << "Enter student id: ";
            std::cin >> studentslist[i].id;
            std::cout << "Enter student first score: ";
            std::cin >> studentslist[i].one;
            std::cout << "Enter student second score: ";
            std::cin >> studentslist[i].two;
            studentslist[i].avg = (studentslist[i].one + studentslist[i].two) * 0.5;
        }
    }
    void batchOutput()
    {
        std::cout << "========== Output ==========" << std::endl;
        for (int i = 0; i < n; i++)
        {
            std::cout << "Student name: " << studentslist[i].name << std::endl;
            std::cout << "Student id: " << studentslist[i].id << std::endl;
            std::cout << "Student first score: " << studentslist[i].one << std::endl;
            std::cout << "Student second score: " << studentslist[i].two << std::endl;
            std::cout << "Student average score: " << studentslist[i].avg << std::endl;
        }
    }
    void setStudent(int n){
            std::cout << "Enter student name: ";
            std::cin >> studentslist[n].name;
            std::cout << "Enter student id: ";
            std::cin >> studentslist[n].id;
            std::cout << "Enter student first score: ";
            std::cin >> studentslist[n].one;
            std::cout << "Enter student second score: ";
            std::cin >> studentslist[n].two;
            studentslist[n].avg = (studentslist[n].one + studentslist[n].two) * 0.5;
    }
    void getStudent(int n){
            std::cout << "Student name: " << studentslist[n].name << std::endl;
            std::cout << "Student id: " << studentslist[n].id << std::endl;
            std::cout << "Student first score: " << studentslist[n].one << std::endl;
            std::cout << "Student second score: " << studentslist[n].two << std::endl;
            std::cout << "Student average score: " << studentslist[n].avg << std::endl;
    }
};
#endif