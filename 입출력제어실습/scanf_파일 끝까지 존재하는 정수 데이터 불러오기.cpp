#include <stdio.h>
int main()
{
	int inputData;
	FILE *fp;
	fp = fopen("input.txt","r");
	printf("입력값: ");
	while(fscanf(fp,"%d", &inputData) != -1)
	{
		printf("%d", inputData);
	 } 
	fclose(fp);
	return 0;
 } 
 
 //파일 내용이 몇개 있을지 예상하고 반복문을 사용할 수도 있지만, 보통 파일에 얼마나 데이터가 저장될지 모르므로 while문을 통해 fscanf
 //의 결과가 -1이 아닐 때까지 반복하는 방법으로 구현하면 파일의 끝까지 데이터를 읽어온다. 
 
