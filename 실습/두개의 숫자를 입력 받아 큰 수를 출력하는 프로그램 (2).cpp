#include <stdio.h>

int main()
// �� ���� ���ڸ� �Է� �޾� ū ���� ����ϴ� ���α׷� �ۼ�
{

    int a, b, c, d, e;
    int max,min;

	printf("���� A �Է�:");
	scanf("%d", &a);
	
	printf("���� B �Է�:");
	scanf("%d", &b);
	
	printf("���� C �Է�:");
	scanf("%d", &c);
	
	printf("���� D �Է�:");
	scanf("%d", &d);
	
	printf("���� E �Է�:");
	scanf("%d", &e);
		
		max = a;
		min = a;
		
		//�ִ� �Ǻ� ��
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
		
	   printf("�ִ밪�� %d �Դϴ�.", max);	



	   //�ּ� �� 
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
		
		printf("�ּҰ��� %d �Դϴ�.", min);
     return 0;
     
 }
