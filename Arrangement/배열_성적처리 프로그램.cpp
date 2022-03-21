#include <stdio.h>
#define MAX 20

int main()
{
	
	// score[학생번호][과목번호] => 모든 점수 저장
	int score[21][10] = {0};
	
	// sum[학생번호] => 학생번호 별 과목총점
	int sum[21] = {0};
	
	// ave[학생번호] => 학생번호 별 과목 평균
	int ave[21] = {0};
	
	// subjectAve[과목번호] => 과목 별 평균
	int subjectAve[10]; 
	
	int studentCount = 0;
	
	printf("학생 수 입력 : ");
	scanf("%d", &studentCount);
	
	for( int index = 0; index < studentCount; index++){
		printf("koposw%d 학생의 점수 3개를 차례대로 입력하세요:", index);
		scanf("%d %d %d", &score[0][0], &score[0][1], &score[0][2]);	

	}
	
	
	return 0;
}
