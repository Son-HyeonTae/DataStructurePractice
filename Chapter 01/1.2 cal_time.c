#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// ����ð� ����
int main(void)
{
	// typedef long clock_t  *clock() �Լ� ����
	clock_t start, stop;
	double duration;

	start = clock(); 
	for (int i = 0; i < 1000000; i++);
	stop = clock();
	
	// �켱���� : (double) > /
	duration = (double) (stop - start) / CLOCKS_PER_SEC;
	printf("����ð��� %f���Դϴ�.\n", duration);
	return 0;
}
// output : ����ð��� 0.003000���Դϴ�.