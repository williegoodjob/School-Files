#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    int height, weight;
    float BMI;
    cout << "�п�J����(cm):";
    cin >> height;
    cout << "�п�J�魫(kg):";
    cin >> weight;
    float Hm = height / 100.0;
    BMI = weight / (Hm * Hm);
    cout << setiosflags(ios::fixed) << setprecision(1);
    cout << "BMI = " << BMI << endl;
    return 0;
}