#ifndef BMI_H
#define BMI_H

#define RED "\033[31m"
#define BLUE "\033[34m"
#define RESET "\033[0m"
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

class bmi
{
    string name, result;
    float height, weight, BMI;
    friend bool operator>(float value, const bmi &b);
    friend bool operator<(float value, const bmi &b);
    friend ostream &operator<<(ostream &os, const bmi &b);
    friend istream &operator>>(istream &is, bmi &b);
    void calculateBMI()
    {
        BMI = weight / pow(height / 100, 2);
        calculateResult();
    }
    void calculateResult()
    {
        if (BMI < 18.5)
            result = "過輕";
        else if (BMI < 24)
            result = "正常範圍";
        else if (BMI < 27)
            result = "過重";
        else if (BMI < 30)
            result = "輕度肥胖";
        else if (BMI < 35)
            result = "中度肥胖";
        else
            result = "重度肥胖";
    }

public:
    bmi()
    {
        height = -1;
        weight = -1;
        name = "NO_NAME";
    }

    bmi(float h, float w, string n = "NO_NAME")
    {
        height = h;
        weight = w;
        name = n;
    }
    void showBMI()
    {
        calculateBMI();
        cout << "Name: " << name << " ; BMI: " << BMI << endl;
    }
    void showResult()
    {
        calculateResult();
        cout << result << endl;
    }
    void setHeight(float h)
    {
        height = h;
    }
    void setWeight(float w)
    {
        weight = w;
    }
};

bool operator>(float value, const bmi &b)
{
    return value > b.BMI;
}
bool operator<(float value, const bmi &b)
{
    return value < b.BMI;
}

ostream &operator<<(ostream &os, const bmi &b)
{
    os << b.name << "你身高" << b.height << "CM, 體重" << b.weight << "KG, BMI=" << setprecision(1) << b.BMI << ",判定" << b.result << endl;
    cout << setprecision(0) << RESET;
    return os;
}

istream &operator>>(istream &is, bmi &b)
{
    cout << RED << "請輸入你的姓名: " << BLUE;
    is >> b.name;
    cout << RED << "你的身高(CM): " << BLUE;
    is >> b.height;
    cout << RED << "你的體重(KG): " << BLUE;
    is >> b.weight;
    b.calculateBMI();
    cout.setf(ios::fixed);
    cout << setprecision(1);
    cout << RED << "你的BMI=" << b.BMI << endl;
    cout << setprecision(0);
    return is;
}

#endif