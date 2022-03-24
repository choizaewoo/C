#include <stdio.h>
int main()
{
	FILE *fp;
	fp = fopen("output.txt", "w");
	fprintf(fp,"제이름은 홍길동 이고, 나이는 20살 입니다.");
	fclose(fp);
	return 0;
} 

// "w" 모드는 파일을 새롭게 작성하여 저장하는 방식
// "a" 모드는 추가모드로 기존에 파일이 있는 경우 그 뒤에서부터 내용이 추가되어 작성된다. 
