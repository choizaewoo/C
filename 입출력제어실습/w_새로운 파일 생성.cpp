#include <stdio.h>
int main()
{
	FILE *fp;
	fp = fopen("output.txt", "w");
	fprintf(fp,"���̸��� ȫ�浿 �̰�, ���̴� 20�� �Դϴ�.");
	fclose(fp);
	return 0;
} 

// "w" ���� ������ ���Ӱ� �ۼ��Ͽ� �����ϴ� ���
// "a" ���� �߰����� ������ ������ �ִ� ��� �� �ڿ������� ������ �߰��Ǿ� �ۼ��ȴ�. 
