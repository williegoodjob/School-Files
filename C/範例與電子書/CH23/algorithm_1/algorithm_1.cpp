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
   vector<int> container1(10);
   //�Ncontainer1[0]~container1[9]���w��1  
   fill(container1.begin(), container1.end(), 1);
   PrintOut(container1);
    
   int ary[]={2,2,2,2,2};
   //�Ncontainer2[0]~container2[4]���w��2  
   vector<int> container2(ary, ary+5);
   //�Ncontainer2[0]~container2[4]������container1[3]~container1[7] 
   copy(container2.begin(), container2.end(), container1.begin()+3);
   PrintOut(container1);
   
   vector<int>::iterator ptr;
   //�Ncontainer1�e�����t1���������� 
   ptr = remove(container1.begin(), container1.end(), 1);
   container1.erase(ptr, container1.end());
   PrintOut(container1);
   //�Ncontainer1[0]~container1[1]������ƥѭ쥻��2�令3  
   replace(container1.begin(), container1.begin()+2, 2, 3);
   PrintOut(container1);
  
   system("PAUSE");
   return 0;
}
