#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <string>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;
template<class T>
T abs1(T);			// �ŧiabs1���˪��禡�A�ëŧiT�����O�N�W


int main(int argc, char** argv) {
   int i;
   double d;
   cout << "  �п�J�@�Ӿ�� i�G" ;
   cin >> i;
   cout << "�п�J�@�ӯB�I�� d�G";
   cin >> d;
   cout << "i ������ȡG" << abs1(i)<< endl;
   cout << "d ������ȡG" << abs1(d) << endl;
   system("PAUSE");
   return 0;
}

//�w�qabs1�˪��禡���D��A�ǤJ�ζǦ^����ƫ��O���N�WT
template<class T>
T abs1(T a)	
{
   if(a<0)
   {
      a=-(a);
   }
   return a;
}
