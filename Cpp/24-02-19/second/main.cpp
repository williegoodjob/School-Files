#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main()
{
    int n;
    cout << "請輸入一個整數:";
    cin >> n;
    cout << "n的開根號是" << setiosflags(ios::fixed) << setprecision(3) << sqrt(n) << endl;
    cout << "n的3次方是" <<setiosflags(ios::fixed) << setprecision(0) << pow(n, 3) << endl;
}