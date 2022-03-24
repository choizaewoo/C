#include <stdio.h>
int main()
{
	int inputData=0;
	int resultData=0;
	FILE *fp;
	fp = fopen("input.txt","r");//input.txt파일을 읽기모드로 열기를 수행한다.
	resultData = fscanf(fp,"%d",&inputData); //fscanf를 통해 fp에서 지정한 파일input.txt에서 정수 값 하나를 받아와서 inputData변수에 저장한다. 또한 fscanf동작의 수행 결과는 resultData에 저장한다. 
	printf("결과:%d\n",resultData); //fscanf를 통해 파일을 읽어온 결과를 출력. 여기서는 파일 내용이 아닌 fcanf 수행결과를 출력하는 것으로 input.txt 파일에 아무 값이 없어 정수를 받아올 수 없기 때문에 오류의 -1 의미가 출력됨
	printf("입력값:%d\n",inputData); //input.txt 파일에서 불러온 정수 값을 출력한다. 실제로 받아온 값이 없어 초깃값 0이 출력된다.
	fclose(fp);//파일을 사용한 file 변수 fp를 닫아준다
	return 0;
}



