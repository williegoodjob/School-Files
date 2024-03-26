#include <iostream>

int max(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }   
}

int main() {
    int a = 10;
    int b = 20;
    int c = 10;
    int d = 60;
    std::cout << "max: " << max(a, max(b, max(c, d))) << std::endl;
    return 0;
}