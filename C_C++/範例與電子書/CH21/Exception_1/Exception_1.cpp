#include <cstdlib>
#include <iostream>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
   int x, y, result ;
   cout << "�п�J�Q���� x�G" ;
   cin >> x;
   cout << "�п�J  ���� y�G" ;
   cin >> y; 
   result = x / y;			// �Y����y����0�A�h�|���Ͱ���ɴ����ҥ~
   cout << "x / y = " << result << endl;
   system("PAUSE");
   return 0;

}
