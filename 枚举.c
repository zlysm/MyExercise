#include<stdio.h>

int main(void) {
	//����ö��
	enum DAY {
		MON = 1, TUE, WED, THU, FRI, SAT, SUN
	};

	//ʹ��
	enum DAY day = THU;
	printf("%d", day);

	return 0;
}