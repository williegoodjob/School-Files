#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    float height, weight, BMI;
    cout << "�п�J����(cm):";
    cin >> height;
    cout << "�п�J�魫(kg):";
    cin >> weight;
    height /= 100;
    BMI = weight / (height * height);
    cout << setiosflags(ios::fixed) << setprecision(1);
    cout << "BMI = " << BMI << endl;
    return 0;
}