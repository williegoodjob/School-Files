#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
   	char miname[50];
	int price;
	double discount;
	cout << "�п�J�־��W�١G";
	gets(miname);  
	cout << "�п�J����G";
	cin >> price;
	cout << "�п�J�馩�G";
	cin >> discount;
	cout << "\n===�L�X��Ʀp�U===\n";
	cout << miname	<< "�O�@��n�־�~\n";
	cout << " ����G"<< price	<< "\n";
	cout << " �馩�G"<< discount << "\n";
	cout << " �`���G"<< price * discount << "\n";
   	system("PAUSE");
  	return 0;
}

