#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
//�L�X�}�C��� 
template<class T1, class T2>        
void printAry(T1 *ary, T2 ary_size)
{
    T2 i;
    for(i=0;i<ary_size; i++)
    {
        cout << ary[i] << "  ";
    }
}

//��w�ƧǪk 
template<class T1, class T2>
void sortAry(T1 *ary, T2 ary_size)
{
 	T2 i, j;
	T1 t;
  for(i=ary_size-2;i>=0;i--)
	{
		for(j=0;j<=i;j++)
		{
			if(ary[j]>ary[j+1])
			{
				t=ary[j];
				ary[j]=ary[j+1];
				ary[j+1]=t;
			}
		}
	}
}

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
   cout << "-��w�Ʈ�k(�Ѥp��j�Ƨ�)-\n";
	// �ŧiidata��ư}�C�æs��5�Ӫ��
	int idata[]={51, 32, 6, 4, 99};	 
	// �L�X��ư}�C�Ƨǫe�αƧǫ� 
	cout << "  ��ƱƧǫe�G";
	printAry(idata, 5);
	cout << endl;
	sortAry(idata, 5);
	cout << "  ��ƱƧǫ�G"; 
	printAry(idata, 5);
	cout << "\n\n" ;

	// �ŧifdata�B�I�ư}�C�æs��5�Ӫ��              
	double fdata[]={3.2, 7.3, 11.32, 0.55, 98.3, 1.99};   
	// �L�X�B�I�ư}�C�Ƨǫe�αƧǫ� 
	cout << "�B�I�ƱƧǫe�G";
	printAry(fdata, 6);
	cout << endl;
	sortAry(fdata, 6);
	cout << "�B�I�ƱƧǫ�G"; 
	printAry(fdata, 6);	
	cout << "\n\n" ;

	string sdata[]={"peter", "tom", "david", "mary"};
	// ��ܦr��}�C�Ƨǫe�αƧǫ� 
	cout << "  �r��Ƨǫe�G";
	printAry(sdata, 4);
	cout << endl;
	sortAry(sdata, 4);
	cout << "  �r��Ƨǫ�G"; 
	printAry(sdata, 4);	
   printf("\n\n");
   system("PAUSE");
   return 0;
} 
