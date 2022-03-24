//학생 점수를 입력 받아서 처리
//점수에 따른 등급 출력하기
 

#include <stdio.h>
int main()
{
	int score;
	char grade;
	
	//학생 점수 입력
	printf("학생 점수 입력:") ;
	scanf("%d", &score);
	
	//등급 처리
	if(score>=90 && score<=100)
	{
		grade = 'A';
	} 
	else if(score >=80 && score<90)
	{
		grade = 'B';
	}
	else if(score >=70 && score<80)
	{
		grade = 'C';
	}
	else if(score >=60 && score<70)
	{
		grade = 'D';
	}
	else{
		grade = 'F';
	}
	
	printf("학생점수: %d\n",score);
	printf("등급: %c\n",grade);
	return 0;
	
	
	
}
