#include <iostream> //Comment about the header file

using namespace std; //Comment about the namespace

int sum(int a,int b); //Comment about the function

int main() //Comment about the main function
{
    cout << "Hello world!" << endl; //Comment about the output
    cout << "Sum: 5+6=" << sum(5,6) << endl; //Comment about the output
    return 0; //Comment about the return value
}

int sum(int a,int b){ //Comment about the function
    return a+b; //Comment about the return value
}