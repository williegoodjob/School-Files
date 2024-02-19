#include <cstdlib>
#include <iostream>
#include <list>
using namespace std;

template <class T>
void PrintOut(T& container);

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	list<int> container;

	cout << "�N 3, 4 ��Ӥ������Jlist�e�����̫᭱...\n";
	container.push_back (3);
	container.push_back (4);
	PrintOut(container);

	cout << "�Nlist�e�����̫e���������R��...\n";
	container.erase (container.begin ());
	PrintOut(container);

    cout << "�N 5 ������Jlist�e�����̫᭱...\n";
	container.insert  (container.end(), 5);
	PrintOut(container);

	cout << "�N 6,7 ��Ӥ������Jlist�e�����̫e��...\n";
	container.push_front (6);
	container.push_front (7);
	PrintOut(container);

	cout << "�Nlist�e�����������i��ѻ��W�Ƨ�...\n";
    container.sort ();
	PrintOut(container);

	cout << "��list�e�����̫e���u�X��Ӥ���...\n";
	container.pop_front ();
	container.pop_front ();
	PrintOut(container);

	cout << "��list�e�����������M��...\n";
	container.clear ();
	PrintOut(container);

	cout << "list�e������ " << container.size () << " �Ӥ���\n";
	cout << "list�e�����̤j�i�s�� " << container.max_size () << " �Ӥ���\n\n";
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
        list<int>::iterator ptr;
		 cout << "�e��������Ƭ��G";
        for(ptr=container.begin();ptr!=container.end();ptr++)
        {
            cout << *ptr << " ";
        }
        cout << "\n\n";
    }
}

