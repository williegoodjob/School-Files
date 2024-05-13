#include <iostream>
#include <string>

using namespace std;

class test{
    string str;
    friend ostream &operator<<(ostream &os, const test &t);
    friend istream &operator>>(istream &is, test &t);
public:
    test(string s = "None"){
        str = s;
    };
};

ostream &operator<<(ostream &os, const test &t){
    os << t.str;
    return os;
}

istream &operator>>(istream &is, test &t){
    is >> t.str;
    return is;
}

int main(){
    test t;
    cout << "Enter a string: ";
    cin >> t;
    cout << t << endl;
    return 0;
}