#include <cstdlib>
#include <iostream>
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
    typedef map<string, Book, less<string> >  my_map ;
    // map �e�� ����������Ȭ�Book���O���� 
	my_map container;
	container.insert
	(my_map::value_type("py001", Book("py001","Python��¦���׽�", 400)));
	container.insert
	(my_map::value_type("cs001", Book("cs001","Visual C#��¦���׽�", 540)));
	container.insert
	(my_map::value_type("cs002", Book("cs002","Visual C#�{���]�p�g��",680)));
	// �Nmap �e�����Ҧ�����P����ܥX��
	// �Ȭ�Book���O����A�̧���ܸӪ���Name�PPrice�ݩ� 
	my_map::iterator ptr;
	cout << "�Ѹ�\t�ѦW\t\t\t���\n";
	cout << "=====================================\n";
	for (ptr=container.begin (); ptr!=container.end(); ptr++){
		cout << ptr->first << "\t" << ptr->second.Name << "\t" << ptr->second.Price<< "\n";
	}
	cout << "\n";
	// �N�d�ߪ��Ѹ����w��bkid�r�� 
	string bkid;
	cout << "�п�J���d�ߪ��Ѹ��G" ; 
	cin >> bkid;
	
	//�ϥ�map�e����find()��k����i��d�� 
	ptr = container.find(bkid);
	if(ptr==container.end()){
		cout << "�d�L�Ѹ� " << bkid << " �����y���" << endl; 
	}else{
		cout << "�Ѹ��G" << ptr->second.Id << endl;
		cout << "�ѦW�G" << ptr->second.Name << endl;
		cout << "����G" << ptr->second.Price << endl;
	}
	cout << endl;	
	system("PAUSE");
    return 0;
}

