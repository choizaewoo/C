#include <stdio.h>
int main()
{
	int linuxScore, javaScore, cScore;
	FILE *fp;
	fp = fopen("input.txt","r");
	printf("������\t�ڹ�\tC���\n");
	while(fscanf(fp,"%d,%d,%d", &linuxScore, &javaScore, &cScore)!=-1);
	{
		printf("%d\t%d\t%d\n", linuxScore, javaScore, cScore);
	}
	fclose(fp);
	return 0;
}
 
 //csvȮ���� ���·� ������ �ۼ��ϰ� �Ǹ�, excel���� �ҷ����ų� �����ϰ� ������ �� �ִ�. 
 //excel���� �����͸� �Է��ϰ� cvs(��ǥ�� ����)���� �����ϸ� ���� input.csv�� ����
 //�޸��� �����Ͽ� �����Ͱ� ����Ǹ�, �̸� �б� ���ؼ��� %d,%d,%d�� ���� fscanf�Է¼��Ŀ� 
 //�޸��� �־��ָ� ���������� �ҷ����Ⱑ �ȴ�. 
 
 //csv�� ������ �� �޸��� �ʼ�.
 
  
