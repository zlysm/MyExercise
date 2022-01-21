#include<stdio.h>

int main(void) {
	//定义枚举
	enum DAY {
		MON = 1, TUE, WED, THU, FRI, SAT, SUN
	};

	//使用
	enum DAY day = THU;
	printf("%d", day);

	return 0;
}