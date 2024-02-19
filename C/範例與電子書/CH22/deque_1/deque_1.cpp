#include <cstdlib>
#include <iostream>
#include <deque>
using namespace std;

template <class T>
void PrintOut(T& container);

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
   deque<int> container(2);
   container[0]=1;
   container[1]=2;
   PrintOut(container);

	cout << "�N 3, 4 ��Ӥ������Jdeque�e�����̫᭱...\n";
	container.push_back (3);
	container.push_back (4);
	PrintOut(container);
	cout << "�Ndeque�e�����̫e���������R��...\n";
	container.erase (container.begin ());
	PrintOut(container);

   cout << "�N 5 ������Jdeque�e�����̫᭱...\n";
	container.insert  (container.end(), 5);
	PrintOut(container);

	cout << "�N 6,7 ��Ӥ������Jdeque�e�����̫e��...\n";
	container.push_front (6);
	container.push_front (7);
	PrintOut(container);

	cout << "��deque�e�����̫e���u�X��Ӥ���...\n";
	container.pop_front ();
	container.pop_front ();
	PrintOut(container);

	cout << "��deque�e�����̫᭱�u�X��Ӥ���...\n";
	container.pop_back ();
	container.pop_back ();
	PrintOut(container);


	cout << "deque�e������ " << container.size () << " �Ӥ���\n";
	cout << "deque�e�����̤j�i�s�� " << container.max_size () << " �Ӥ���\n\n";
    system("PAUSE");	
	return 0;
}

template <class T>
void PrintOut(T& container)
{
    if(container.empty())
    {
        cout << "�e������";
    }
    else
    {
        deque<int>::iterator ptr;
		 cout << "�e��������Ƭ��G";
         for(ptr=container.begin();ptr!=container.end();ptr++)
         {
             cout << *ptr << " ";
         }
         cout << "\n\n";
     }
 }

