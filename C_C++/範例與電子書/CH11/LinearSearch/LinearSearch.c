#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	/* count�w�]-1��ܥ����ŦX��ơAsearch_num�����d�ߪ���� */
	int data[5];  
	/* count>0��}�C���ĴX�Ӹ�� */
	int i, search_num, count=-1, *ptr; 
	ptr=data;                   /* ptr����}�C���_�l��m */
	printf(" =======  �`�Ƿj�M�k ======= \n");
	printf("  ----   �гs���J���Ӽƭ� ---\n");
	printf("\n");
	for(i=0;i<5;i++)
		{
		printf("�п�J��%d�ӭ� : ",i+1);
		scanf("%d", ptr+i);/* ��J�ȩ�Jptr�ҫ��}�C��i�Ӥ��� scanf_s()VC++  */
		}
		printf("\n");
		printf(" �п�J�j�M���ƭȡG");
		scanf("%d", &search_num);  /* ��J�d�߭ȡA scanf_s()VC++  */
		for(i=0;i<5;i++)
		{
			if (*(ptr+i)==search_num) /* �ˬdptr�ҫ��}�C�����O�_�P�d�߭Ȭ۵�*/
			{
				count=i; break;
		}
	}
	printf(" ========================\n");
	if(count==-1)                   /* �P�_�O�_������� */
	{
		printf(" �S���o�ӼƦr -> %d \n", search_num);
	}
	else
	{
		printf(" %d �O�� %d �ӼƦr !  \n", search_num, (count+1));
	}
	system("PAUSE");	
	return 0;
}
