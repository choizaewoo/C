#include <stdio.h>
int main()
{
	int inputData;
	FILE *fp;
	fp = fopen("input.txt","r");
	printf("�Է°�: ");
	while(fscanf(fp,"%d", &inputData) != -1)
	{
		printf("%d", inputData);
	 } 
	fclose(fp);
	return 0;
 } 
 
 //���� ������ � ������ �����ϰ� �ݺ����� ����� ���� ������, ���� ���Ͽ� �󸶳� �����Ͱ� ������� �𸣹Ƿ� while���� ���� fscanf
 //�� ����� -1�� �ƴ� ������ �ݺ��ϴ� ������� �����ϸ� ������ ������ �����͸� �о�´�. 
 
