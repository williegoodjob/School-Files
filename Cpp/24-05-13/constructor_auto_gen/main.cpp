#include <iostream>
using namespace std;
 
class test{
   int value;
public:
     test (){
        value=10;
     }
     void show ();
};
void test::show(){
    cout << value << endl;
}