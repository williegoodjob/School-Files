#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    int weight, height;
    float w, h;
    float BMI;
    cout << "BMI計算器" << endl;
    cout << "請輸入身高(cm): ";
    cin >> height;
    cout << "請輸入體重(kg):";
    cin >> weight;
    w = (float)weight;
    h = (float)height;
    h = h / 100;
    BMI = w / pow(h, 2);
    cout << setiosflags(ios::fixed) << setprecision(2);
    cout << "BMI=" << BMI << endl;
    if (BMI < 18.5)
    {
        cout << "體重過輕" << endl;
    }
    else if (BMI >= 18.5 && BMI < 24)
    {
        cout << "正常範圍" << endl;
    }
    else if (BMI >= 24 && BMI < 27)
    {
        cout << "過重" << endl;
    }
    else if (BMI >= 27 && BMI < 30)
    {
        cout << "輕度肥胖" << endl;
    }
    else if (BMI >= 30 && BMI < 35)
    {
        cout << "中度肥胖" << endl;
    }
    else if (BMI >= 35)
    {
        cout << "重度肥胖" << endl;
    }
    return 0;
}