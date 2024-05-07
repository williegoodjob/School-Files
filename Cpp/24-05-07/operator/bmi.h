#ifndef BMI_H
#define BMI_H

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class bmi
{
    string name;
    float height, weight, BMI;

public:
    bmi(float h, float w, string n = "NO_NAME")
    {
        height = h;
        weight = w;
        name = n;
    }
    void showBMI()
    {
        BMI = weight / pow(height / 100, 2);
        cout << "Name: " << name << " ; BMI: " << BMI << endl;
    }
    void showResult()
    {
        if (BMI < 18.5)
            cout << "過輕" << endl;
        else if (BMI < 24)
            cout << "正常範圍" << endl;
        else if (BMI < 27)
            cout << "過重" << endl;
        else if (BMI < 30)
            cout << "輕度肥胖" << endl;
        else if (BMI < 35)
            cout << "中度肥胖" << endl;
        else
            cout << "重度肥胖" << endl;
    }
    void setHeight(float h)
    {
        height = h;
    }
    void setWeight(float w)
    {
        weight = w;
    }

    friend bool operator>(float value, const bmi &b)
    {
        return b.BMI > value;
    }
    friend bool operator<(float value, const bmi &b)
    {
        return b.BMI < value;
    }
};

#endif