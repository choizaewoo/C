#include <stdio.h>
#define MAX 20

int main()
{
	
	// score[�л���ȣ][�����ȣ] => ��� ���� ����
	int score[21][10] = {0};
	
	// sum[�л���ȣ] => �л���ȣ �� ��������
	int sum[21] = {0};
	
	// ave[�л���ȣ] => �л���ȣ �� ���� ���
	int ave[21] = {0};
	
	// subjectAve[�����ȣ] => ���� �� ���
	int subjectAve[10]; 
	
	int studentCount = 0;
	
	printf("�л� �� �Է� : ");
	scanf("%d", &studentCount);
	
	for( int index = 0; index < studentCount; index++){
		printf("koposw%d �л��� ���� 3���� ���ʴ�� �Է��ϼ���:", index);
		scanf("%d %d %d", &score[0][0], &score[0][1], &score[0][2]);	

	}
	
	
	return 0;
}
