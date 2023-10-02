#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;
inline int getmin(int, int);
inline double getmin(double, double);
inline char getmin(char, char);

int main(int argc, char** argv) {
	int n1, n2;
	cout << "�п�J��Ӿ�ơG" ;
	cin >> n1 >> n2;
	cout << n1 << " �P " << n2 << " �����̤p�Ƭ� " << getmin(n1, n2) << "\n\n";
	
	double d1, d2;
	cout << "�п�J��ӯB�I�ơG" ;
	cin >> d1 >> d2;
	cout << d1 << " �P " << d2 << " �����̤p�Ƭ� " << getmin(d1, d2) << "\n\n";

	char c1, c2;
	cout << "�п�J��Ӧr���G" ;
	cin >> c1 >> c2;
	cout << c1 << " �P " << c2 << " �����̤p�r���� " << getmin(c1, c2) << "\n\n";

	system("PAUSE");
	return 0;
}

inline int getmin(int a, int b){
	return a<b ? a : b;
}

inline double getmin(double a, double b){
	return a<b ? a : b;
}

inline char getmin(char a, char b){
	return a<b ? a : b;
}
