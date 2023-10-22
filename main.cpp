#include <stdio.h>

// 一般的な賃金体系
int GeneralWage(int workTime) {
	return 1072 * workTime;
}

// 再帰的な賃金体系
int RecursiveWage(int preHourlyWage, int workTime) {
	if (workTime <= 0) {
		return 0;
	}
	if (workTime == 1) {
		return 100;
	}

	int hourlyWage = preHourlyWage * 2 - 50;
	return hourlyWage + RecursiveWage(hourlyWage,workTime - 1);
}

int main() {
	// 労働時間
	int workTime{};

	while (1) {
		printf("労働時間を入力:");
		scanf_s("%d", &workTime);

		// 働いてない場合ループを抜ける
		if (workTime < 0) {
			break;
		}

		printf("一般的な賃金体系の給料:%d\n", GeneralWage(workTime));
		printf("再帰的な賃金体系の給料:%d\n\n", RecursiveWage(100, workTime));
	}

	return 0;
}