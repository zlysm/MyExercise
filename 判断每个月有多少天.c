#include<stdio.h>

int days_of_month(int month, int year);
int is_Leap(int year);
int is_Leap_res;

int main(void) {
	int year, month;

	printf("Please enter the year and month (separated by space): \n");
	scanf_s("%d %d", &year, &month);

	//表驱动法
	printf("总共%d天\n", days_of_month(month, year));
	return 0;
}

//返回每个月的天数，根据is_Leap函数
int days_of_month(int month, int year) {

	is_Leap_res = is_Leap(year);

	int day_ARRAY[12] = { 31, (is_Leap_res == 1) ? 29 : 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	return day_ARRAY[month - 1];
}

/**
* @params year 传入年份
* @return is_Leap_res 如果是1，就是闰年，0是平年
*/
int is_Leap(int year) {

	if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
		return is_Leap_res = 1;
	}
	else {
		return is_Leap_res = 0;
	}
}
