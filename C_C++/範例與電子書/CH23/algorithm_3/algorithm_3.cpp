#include <cstdlib>
#include <iostream>
#include <functional>
#include <algorithm>
#include <vector>
using namespace std;
//PrintOut�ΨӦL�X�e���������� 
void PrintOut(vector<int>& container)
{
    if(container.empty())
    {
        cout << "�e������";
    }
    else
    {
        vector<int>::iterator ptr;
		 cout << "�e��������Ƭ��G";
        for(ptr=container.begin();ptr!=container.end();ptr++)
        {
            cout << *ptr << "  ";
        }
        cout << "\n\n";
    }
}


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
   int ary1[]={1,5,6,7,4,10,9};
   //�Nary1�}�C��Jcontainer1�e��    
   vector<int> container1(ary1, ary1+7);
   cout << "���ƧǡG\n";
   PrintOut(container1);
   cout << "�Ѥp��j�Ƨ�\n";
   //�Hless<int>��ư����W�Ƨ� 
   sort(container1.begin(), container1.end(), less<int>());   
   PrintOut(container1);
   cout << "�Ѥj��p�Ƨ�\n";
   //�Hgreater<int>��ư�����Ƨ� 
   sort(container1.begin(), container1.end(), greater<int>());   
   PrintOut(container1);
   system("PAUSE");
   return 0;
}
