#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <io.h>
#define LEN 100

using namespace std;

int main(int argc, char** argv) {
	FILE *fptr;
	char fpath[LEN] ;
	int fno, fsize;
	char ch;
	try{
		// ��J�ɮ׸��|�ë��w��fpath�r���}�C 
		printf("�п�J�n�}���ɮת�������|���ɦW�G");
		gets(fpath);		
		fptr=fopen(fpath, "r");  //�H���ɤ覡�}�ɨöǦ^�ɮ׫���fptr	
		if(fptr==NULL) {   // �ɮ׫��жǦ^NULL�A�h��X���0 
			throw (0) ;
		}
		fno=fileno(fptr);		//���o�ɮץN�X 
		fsize=filelength(fno);  //���o�ɮפj�p 
		printf("\n%s �}�ɧ���, �ɮפj�p %d Bytes\n", fpath, fsize);
		printf("%s ����ɤ��e�p�U\n", fpath);
		// �L�X�ɮפ��Ҧ���� 
		while((ch=fgetc(fptr))!=EOF) {
    		printf("%c", ch);
		}
		fclose(fptr);
	}catch(int ex){   // �Y��X��ƫ��O�|���榹�϶��A��ܶ}�ɥ��� 
		printf("\n�}�ɥ���, %s �i�ण�s�b\n", fpath);
		fclose(fptr);	
	}
	cout << endl;
	system("PAUSE");
	return 0;
}
