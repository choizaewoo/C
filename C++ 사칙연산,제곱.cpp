#include <stdio.h>
#include <math.h>  //pow(), sqrt() �Լ��� ���ǵ� ����
 
int plus(int a, int b){

	int result;
	result = a + b;
	return result;
}

int minus(int a, int b){
	int result;
	result = a - b;
	return result;
}

float div(int a, int b){
	int result;
	result = (float)a / (float)b;
	return result;
}

int mul(int a, int b){
	int result;
	result = a* b;
	return result;
}

int powA(int a, int b){
	int result = 1;
	for(int index =0; index < b; index++){
		result *= a;
	}
	return result;
	
}



int main(){
	int returnData;
	returnData = powA(2,0);
	printf("%d", returnData);
	return 0;
}

