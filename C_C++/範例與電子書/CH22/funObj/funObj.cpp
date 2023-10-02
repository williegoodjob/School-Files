#include <cstdlib>
#include <iostream>
#include <functional>
#include <string>
#include <map>
using namespace std;

//�w�qBook���y���O�A�����O��Id�BName�BPrice�ݩ�
//Book���O���غc���i�H�]�w Id�BName�BPrice�ݩʪ���� 
class Book{
	public:
	  string Id, Name;
	  int Price;
	  Book(string _id, string _name, int _price ){
	  	Id=_id;
	  	Name=_name;
	  	Price=_price;
	  }
};

int main(int argc, char** argv)
{	
    //�ϥ�greater<string>�禡����A�G������ȥѤj��p�Ƨ�
    typedef map<string, Book, greater<string> >  my_map ;
	my_map container;
	container.insert
	(my_map::value_type("py001", Book("py001","Python��¦���׽�", 400)));
	container.insert
	(my_map::value_type("cs001", Book("cs001","Visual C#��¦���׽�", 540)));
	container.insert
	(my_map::value_type("cs002", Book("cs002","Visual C#�{���]�p�g��",680)));
	// �Nmap �e�����Ҧ�����P����ܥX��
	// �Ȭ�Book���O����A�̧���ܸӪ���Name�PPrice�ݩ� 
	// �L�X��Ѥj��p�ƧǪ����G 
	my_map::iterator ptr;
	cout << "�Ѹ�\t�ѦW\t\t\t���\n";
	cout << "=====================================\n";
	for (ptr=container.begin (); ptr!=container.end(); ptr++){
		cout << ptr->first << "\t" << ptr->second.Name << "\t" << ptr->second.Price<< "\n";
	}
	system("PAUSE");
	return 0;
}

