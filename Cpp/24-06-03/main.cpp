#include <iostream>

using namespace std;

class complex
{
    float real;
    float imaginary;

public:
    complex(float r = 0, float i = 0)
    {
        real = r;
        imaginary = i;
    }
    void setReal(float a)
    {
        real = a;
    }
    void setImaginary(float a)
    {
        imaginary = a;
    }
    void show()
    {
        if (imaginary >= 0)
            cout << real << "+" << imaginary << "j" << endl;
        else
            cout << real << imaginary << "j" << endl;
    }
    void operator =(complex a)
    {
        real = a.real;
        imaginary = a.imaginary;
    }
    bool operator ==(complex a)
    {
        if (real == a.real && imaginary == a.imaginary)
            return true;
        else
            return false;
    }
    bool operator !=(complex a)
    {
        if (real != a.real || imaginary != a.imaginary)
            return true;
        else
            return false;
    }
    bool operator >(complex a)
    {
        if (real > a.real)
            return true;
        else if (real == a.real && imaginary > a.imaginary)
            return true;
        else
            return false;
    }
    bool operator <(complex a)
    {
        if (real < a.real)
            return true;
        else if (real == a.real && imaginary < a.imaginary)
            return true;
        else
            return false;
    }

        
};
 
int main()
{
    complex a(15),b(15, 20);
    if (a == b)
        cout << "a與b相同!" << endl;
    else 
        cout << "a與b不同!" << endl;
    return 0;
}
