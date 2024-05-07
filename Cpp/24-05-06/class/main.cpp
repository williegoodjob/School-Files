#include <iostream>

using namespace std;

struct personS
{
    string name, id;
    float one, two, avg;
    personS(string n, string i)
    {
        name = n;
        id = i;
    }
};

class personC
{
    string name, id;
    float one, two, avg;

};

typedef struct personS PS;
typedef class personC PC;

int main()
{
    struct personS peter;
    class personC mary;
    PS john;
    PC tom;

    return 0;
}