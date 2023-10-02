#include <cstdlib>
#include <iostream>
#include <string>
#include <set>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
template <class T>
void PrintOut(T& container);

int main(int argc, char** argv) {
	string name[]={"Peter", "John", "Tom", "Mary"};
	set<string, less<string> > container(name, name+4);
	PrintOut(container);

	string input_name;
	cout << "��set�e�������J��ơG";
	cin >> input_name;
	container.insert(input_name);
	PrintOut(container);

	string s_name;
	cout << "�п�J�n�M�䪺�m�W�G";
	cin >> s_name;
    set<string>::iterator ptr;
	ptr = container.find (s_name);
	if (ptr==container.end()){
		cout << "set�e�����S��" << s_name << "\n";
	}else{
		cout << "set�e������" << s_name << "\n";
	}
    cout << "\n";
	cout << "set�e������ " << container.size () << " �Ӥ���\n";
	cout << "set�e�����̤j�i�s�� " << container.max_size () << " �Ӥ���\n\n";
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
        set<string>::iterator ptr;
		 cout << "�e��������Ƭ��G";
        for(ptr=container.begin();ptr!=container.end();ptr++)
        {
            cout << *ptr << " ";
        }
        cout << "\n\n";
    }
}

