#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
 		int data[5];	/* �ŧidata�}�C�A�ΨӦs��ϥΪ̩ҿ�J��5�Ӿ�� */
		int n, i, j, t;
		printf("== ��w�Ʈ�k(�Ѥp��j�Ƨ�)==\n\n");
		printf("...�гs���J���Ӽƭ�(��ƶ��Ť@��)...\n\n");
		/*��J�Ƨǫe�����*/
		printf(" �Ƨǫe�G");
		for(i=0;i<5;i++) /* �ϥΪ̿�J����Ʒ|�̧Ǧs��bdata[0]~data[4] */
		{
			scanf("%d", &n);
			data[i]=n;
		}
		/*��w�ƧǪk*/
		for(i=3;i>=0;i--)
		{
			for(j=0;j<=i;j++)
			{
				if(data[j]>data[j+1])
			{
					t=data[j];			/*�洫���*/
					data[j]=data[j+1];
					data[j+1]=t;
				}
			}
		}
		/*�L�X�Ƨǫ᪺���*/
		printf("\n �Ƨǫ�G");
		for(i=0;i<5;i++)
		{
			printf("%d ", data[i]);
		}
	printf("\n\n");
	system("PAUSE");	
return 0;
}
