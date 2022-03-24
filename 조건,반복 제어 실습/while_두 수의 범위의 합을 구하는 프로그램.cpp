#include<stdio.h>

int main()

{
	int i=1;
	int end; //마지막 값을 받을 변수 
	int sum= 0;
    
	printf("2개의 정수 입력:");
	scanf("%d %d, &i, &end");
	
	while(i<=end){
		
		if(i != end){ //조건식 마지막 값이면 = , 그렇지 않으면 + 
			
			printf("%d + ", i);
		}
		else{
			printf("%d = ", i);
			
		}
		sum = sum + i;
		i++;
	}
	 printf("%d\n", sum);
 
 
 	return 0;
}

