#include <cstdlib>
#include <iostream>
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
   PrintOut(container1);        	//�L�Xcontainer1�e�� 
   
   vector<int>::iterator ptr;   	//�ŧi���쾹
   //�P�_container1�e�����O�_�� 6 
   ptr = find(container1.begin(), container1.end(), 6);
   if(ptr==container1.end()){
      cout << "�e�����S�� 6\n" ;                          
   }else{
      cout << "�e������ 6\n"   ;
   }
   
   int ary2[]={7,4};
   //�Nary2�}�C��Jcontainer2�e�� 
   vector<int> container2(ary2, ary2+2);
   //�P�_container1�e�����O�_�s�b�Pcontainer2�e���ۦP�����q 
   ptr=search(container1.begin(), container1.end(), 
      container2.begin(), container2.end());

   if(ptr==container1.end()){
      cout << "�e�����S�� 7,4\n";                       
   }else{
      cout << "�e������ 7,4\n";
   }
   cout << "\n";
   system("PAUSE");
   return 0;
}
