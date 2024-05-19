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
            result = "�L��";
        else if (BMI < 24)
            result = "���`�d��";
        else if (BMI < 27)
            result = "�L��";
        else if (BMI < 30)
            result = "���תέD";
        else if (BMI < 35)
            result = "���תέD";
        else
            result = "���תέD";
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
        os << b.name << "�A����" << b.height << "cm�A�魫" << b.weight << "kg�ABMI=" << b.BMI << "�A�P�w" << b.result;
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
