//
//  Created by 张益铭 on 03/19/22.
//  Copyright © 2022 张益铭. All Rights Reserved.
//

#include <iostream>
using namespace std;
const int MAX = 51;
char a[MAX][MAX];

void picture(int, int);

int main(void)
{
	int length;
	int init = 1;
	cin >> length;

	for (int i = 1; i <= length; i++) {
		for (int j = 1; j <= length; j++) {
			a[i][j] = ' ';  //初始化
		}
	}
	picture(init, length);
	for (int i = 1; i <= length; i++) {
		for (int j = 1; j <= length; j++) {
			cout << a[i][j];
		}
		cout << endl;
	}

	return 0;
}

void picture(int init, int length) {
	if (length <= 0) {
		return;
	}

	//将边框改为*
	for (int i = init; i <= init + length - 1; i++) {
		a[init][i] = '*';
	}
	for (int i = init; i <= init + length - 1; i++) {
		a[i][init] = '*';
	}
	for (int i = init; i <= init + length - 1; i++) {
		a[init + length - 1][i] = '*';
	}
	for (int i = init; i <= init + length - 1; i++) {
		a[i][init + length - 1] = '*';
	}
	picture(init + 2, length - 4);  //循环下一层“回”图形
}
