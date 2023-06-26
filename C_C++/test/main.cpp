#include <iostream>

using namespace std;

int sum(int,int);

int main()
{
    cout << "Hello world!" << endl;
    cout << "Sum: 5+6=" << sum(5,6) << endl;
    return 0;
}

int sum(int a,int b){
    return a+b;
}