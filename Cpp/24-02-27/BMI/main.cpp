#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    int weight, height;
    float w, h;
    float BMI;
    cout << "BMI�p�⾹" << endl;
    cout << "�п�J����(cm): ";
    cin >> height;
    cout << "�п�J�魫(kg):";
    cin >> weight;
    w = (float)weight;
    h = (float)height;
    h = h / 100;
    BMI = w / pow(h, 2);
    cout << setiosflags(ios::fixed) << setprecision(2);
    cout << "BMI=" << BMI << endl;
    if (BMI < 18.5)
    {
        cout << "�魫�L��" << endl;
    }
    else if (BMI >= 18.5 && BMI < 24)
    {
        cout << "���`�d��" << endl;
    }
    else if (BMI >= 24 && BMI < 27)
    {
        cout << "�L��" << endl;
    }
    else if (BMI >= 27 && BMI < 30)
    {
        cout << "���תέD" << endl;
    }
    else if (BMI >= 30 && BMI < 35)
    {
        cout << "���תέD" << endl;
    }
    else if (BMI >= 35)
    {
        cout << "���תέD" << endl;
    }
    return 0;
}