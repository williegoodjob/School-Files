#ifndef BMI_H
#define BMI_H

#define RED "\033[31m"
#define BLUE "\033[34m"
#define RESET "\033[0m"

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
// #include <vector>

using namespace std;

class bmi
{
    string name, result;
    string infile, outfile;
    ifstream in;
    float height, weight, BMI;
    friend bool operator>(float value, const bmi &b);
    friend bool operator<(float value, const bmi &b);
    // friend ofstream &operator<<(ofstream &os, const bmi &b);
    // friend ifstream &operator>>(ifstream &is, bmi &b);
    friend ofstream &operator<<(ofstream &os, const bmi &b);
    friend ifstream &operator>>(ifstream &is, bmi &b);
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
    bmi(string infile, string outfile)
    {
        CsvDecode csv(infile);
        this->infile = infile;
        this->outfile = outfile;
        vector<vector<string>> data;
        csv.decode(',');
        data = csv.get_data();
        ofstream out(outfile);
        for (auto row : data)
        {
            name = row[0];
            height = stof(row[1]);
            weight = stof(row[2]);
            calculateBMI();
            calculateResult();
        }
        out.close();
        cout << "BMI資料已寫入" << outfile << endl;
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

ofstream &operator<<(ofstream &os, const bmi &b)
{
    os << b.name << "你身高" << b.height << "CM, 體重" << b.weight << "KG, BMI=" << std::fixed << std::setprecision(1) << b.BMI << ",判定" << b.result << endl;
    return os;
}

istream &operator>>(ifstream &is, bmi &b)
{
    string line;
    while (getline(is, line, ','))
    {
        stringstream ss(line);
        
    }
    return is;
}

#endif