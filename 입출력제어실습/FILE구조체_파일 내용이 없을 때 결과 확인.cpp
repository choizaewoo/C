#include <stdio.h>
int main()
{
	int inputData=0;
	int resultData=0;
	FILE *fp;
	fp = fopen("input.txt","r");//input.txt������ �б���� ���⸦ �����Ѵ�.
	resultData = fscanf(fp,"%d",&inputData); //fscanf�� ���� fp���� ������ ����input.txt���� ���� �� �ϳ��� �޾ƿͼ� inputData������ �����Ѵ�. ���� fscanf������ ���� ����� resultData�� �����Ѵ�. 
	printf("���:%d\n",resultData); //fscanf�� ���� ������ �о�� ����� ���. ���⼭�� ���� ������ �ƴ� fcanf �������� ����ϴ� ������ input.txt ���Ͽ� �ƹ� ���� ���� ������ �޾ƿ� �� ���� ������ ������ -1 �ǹ̰� ��µ�
	printf("�Է°�:%d\n",inputData); //input.txt ���Ͽ��� �ҷ��� ���� ���� ����Ѵ�. ������ �޾ƿ� ���� ���� �ʱ갪 0�� ��µȴ�.
	fclose(fp);//������ ����� file ���� fp�� �ݾ��ش�
	return 0;
}



