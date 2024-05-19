#include <iostream>
#include <fstream>
#include <string>
#include <cmath>

using namespace std;

class bmi
{
    string name, result;
    float height, weight, BMI;
    friend bool operator>(float value, const bmi &b);
    friend bool operator<(float value, const bmi &b);
    friend istream& operator>>(istream& is, bmi& b);
    friend ostream& operator<<(ostream& os, const bmi& b);
    
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
    
    friend istream& operator>>(istream& is, bmi& b)
    {
        string line[3];
        getline(is, line[0], ','); // name
        getline(is, line[1], ','); // height
        getline(is, line[2]); // weight
        b.name = line[0];
        b.height = stof(line[1]);
        b.weight = stof(line[2]);
        b.calculateBMI();
        return is;
    }
    
    friend ostream& operator<<(ostream& os, const bmi& b)
    {
        os << b.name << "你身高" << b.height << "cm，體重" << b.weight << "kg，BMI=" << b.BMI << "，判定" << b.result;
        return os;
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
