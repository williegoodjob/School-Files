#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int score[11]={0};	/*score[0]�ٲ�����, �O��10������*/
	int p[22]={0};		/*p[0]�ٲ�����, �O���C�y����, �̦h��21�y*/

	/* g:����, j:�C�y����, sum:�O�ֲy�`�� */
	/* ballnum:�ثe�O�ӧ����ĴX�y, keyin:��J�C�y������ */
	int g=0, j=0, sum=0, ballnum=0, keyin=0;

	/* �̧ǿ�J10�������� */
	for(g=1;g<=10; g++)
	{
		ballnum++;
		j++;
		printf(" �� %2d ���� %2d �y�G", g, ballnum);
		scanf("%d", &keyin);
		p[j]=keyin;
		if(p[j]==10)
		{
			if(g==10)
			{
				ballnum++;
				j++;
            	printf(" �� %2d ���� %2d �y�G", g, ballnum);
				scanf("%d", &keyin);
				p[j]=keyin;
				ballnum++;
				j++;
				printf(" �� %2d ���� %2d �y�G", g, ballnum);
				scanf("%d", &keyin);
				p[j]=keyin;
				break;
			}
			else
			{
				ballnum=0;
				continue;
			}
		}
		else
		{
			ballnum++;
			j++;
			printf(" �� %2d ���� %2d �y�G", g, ballnum);
			scanf("%d", &keyin);
			p[j]=keyin;
			if(p[j-1]+p[j]==10 && g==10 )
			{
				ballnum++;
				j++;
				printf(" �� %2d ���� %2d �y�G", g, ballnum);
				scanf("%d", &keyin);
				p[j]=keyin;
				continue;
			}
			else					
			{
				ballnum=0;
				continue;
			}
		}
	}

	/*�p��C�����o��*/
	for(g=1, j=1; g<=10; g++)
	{
		if(p[j]==10)
		{
			score[g]=p[j]+p[j+1]+p[j+2];
			j++;
		}
		else if(p[j]+p[j+1]==10)
		{
			score[g]=p[j]+p[j+1]+p[j+2];
			j+=2;
		}
		else
		{
			score[g]=p[j]+p[j+1];
			j+=2;
		}
	}
	printf("\n");
	printf(" ====================\n");

	/*�L�X�C�����o���A�H�έp��O�ֲy���`��*/
	for(g=1; g<=10; g++)
	{
		printf(" �� %2d �����ơG%d\n", g, score[g]);
		sum+=score[g];
	}
	printf(" ====================\n");

	/*�L�X�O�ֲy���`��*/
	printf(" �O�ֲy�`���G %d\n\n", sum);

	system("PAUSE");
	return 0;
}
