#include <stdio.h>
#include <windows.h>
#include <time.h>
#include <stdlib.h>

bool IsAnswer(int diceAnswer, int selectAnswer) {
	// 正解なら
	if (diceAnswer == selectAnswer) {
		return true;
	}// 不正解なら
	else {
		return false;
	}
}

char Answer(bool isAnswer) {
	if (isAnswer) {
		return printf("正解");
	}
	else {
		return printf("不正解");
	}
}

int main() {
	char (*pfunc)(bool) = Answer;

	// 入力した数字を入れる
	int selectNum{};
	printf("1~6の数字を入力してください:");
	scanf_s("%d", &selectNum);

	// サイコロの目をランダムで決定する
	srand((unsigned int)time(nullptr));
	int dice = rand() % 6 + 1;

	pfunc(dice,selectNu);

	return 0;
}