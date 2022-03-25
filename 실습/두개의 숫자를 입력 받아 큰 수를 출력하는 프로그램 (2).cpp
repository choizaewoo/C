#include <stdio.h>

int main()
// 두 개의 숫자를 입력 받아 큰 수를 출력하는 프로그램 작성
{

    int a, b, c, d, e;
    int max,min;

	printf("숫자 A 입력:");
	scanf("%d", &a);
	
	printf("숫자 B 입력:");
	scanf("%d", &b);
	
	printf("숫자 C 입력:");
	scanf("%d", &c);
	
	printf("숫자 D 입력:");
	scanf("%d", &d);
	
	printf("숫자 E 입력:");
	scanf("%d", &e);
		
		max = a;
		min = a;
		
		//최대 판별 별
		if( b > max){
		    max = b;
				
		}
		if( c > max){
			max = c;
		}
		if( d > max){
			max = d;
		}
		if( e > max){
			max = e;
		}
		
	   printf("최대값은 %d 입니다.", max);	



	   //최소 판 
		if( b < min){
			max = b;
		}
		if( c < min){
			max = c;
		}
		if( d < min){
			max = d;
		}
		if( e < min){
			max = e;
		}
		
		printf("최소값은 %d 입니다.", min);
     return 0;
     
 }
