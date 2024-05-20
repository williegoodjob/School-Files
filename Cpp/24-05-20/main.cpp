#include <iostream>
using namespace std;

class score
{
    friend score &operator+(score &a, score &b);
    friend score &operator+(score &a, int b);
    friend score &operator+(int a, score &b);
    friend istream &operator>>(istream &a, score &b);
    friend ostream &operator<<(ostream &a, score &b);
    int math;
    int computer;
    int total;

public:
    score(int a = 0, int b = 0)
    {
        math = a;
        computer = b;
        total = math + computer;
    }
    void operator=(score &a)
    {
        math = a.math;
        computer = a.computer;
        total = a.total;
    }
};

score &operator+(score &a, score &b)
{
    score temp;
    temp.math = a.math + b.math;
    temp.computer = a.computer + b.computer;
    temp.total = temp.math + temp.computer;
    return temp;
}

score &operator+(score &a, int b)
{
    score temp;
    temp.math = a.math + b;
    temp.computer = a.computer + b;
    temp.total = temp.math + temp.computer;
    return temp;
}

score &operator+(int a, score &b)
{
    score temp;
    temp.math = a + b.math;
    temp.computer = a + b.computer;
    temp.total = temp.math + temp.computer;
    return temp;
}

istream &operator>>(istream &a, score &b)
{
    a >> b.math >> b.computer;
    b.total = b.math + b.computer;
    return a;
}

ostream &operator<<(ostream &a, score &b)
{
    a << "Math: " << b.math << " Computer: " << b.computer << " Total: " << b.total << endl;
    return a;
}

int main(int argc, char **argv)
{
    score peter(10, 20), mary, tom;
    cout << peter;
    cin >> mary;
    mary = peter + 30;
    cout << mary;
    tom = mary + peter;
    cout << tom << endl;
    cout << peter + tom + mary;

    return 0;
}