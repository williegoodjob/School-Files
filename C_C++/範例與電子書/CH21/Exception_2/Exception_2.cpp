#include <cstdlib>
#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
    try
    {
       int x, y, result ;
       cout << "�п�J�Q���� x�G" ;
       cin >> x;
       cout << "�п�J  ���� y�G" ;
       cin >> y; 
       if (y==0) throw (0) ;  // �Y����y����0�A�h��X���0 
       //if (y==0) throw ("���Ƥ��i���s") ;//�Y����y����0�A�h��X�r��`�� 
       result = x / y;
       cout << "x / y = " << result;
    }
    catch(int ex)                // �Y��X��ƫ��O�|���榹�϶� 
    {
       cout << "���ͨҥ~�A���Ƥ��i�� " << ex ;
    }
    catch(const char *ex)         // �Y��X�r��`�ȷ|���榹�϶� 
    {
       cout << "���ͨҥ~�A���~�T����" << ex ;
    }
    cout << endl << endl;
    system("PAUSE");
    return 0;
}
