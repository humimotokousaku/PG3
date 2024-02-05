#include <stdio.h>
#include <windows.h>
#include <time.h>
#include <stdlib.h>

using PFunc = void (*)(int);

// サイコロの目をランダムで決定
int RandomDice() {
	int result = rand() % 6 + 1;
	return result;
}

// 答え
void Answer(int selectAnswer) {
	int diceResult = RandomDice();
	// 偶数なら丁
	if (diceResult % 2 == 0) {
		printf("丁!\n");
		Sleep(1000 * 1.5f);
	}// 奇数なら半
	else if (diceResult % 2 != 0) {
		printf("半!\n");
		Sleep(1000 * 1.5f);
	}

	// どちらも同じ数なら正解
	if (selectAnswer == 1 && diceResult % 2 != 0) {
		printf("正解!!!\n\n");
	}
	else if (selectAnswer == 2 && diceResult % 2 == 0) {
		printf("正解!!!\n\n");
	}
	else {
		printf("不正解!!!\n\n");
	}
}

void SetTimeout(PFunc p,int waitTime, int selectAnswer) {
	printf("正解は...\n");
	Sleep(1000 * waitTime);
	p(selectAnswer);
}

int main() {
	// サイコロの目をランダムで決定する
	srand((unsigned int)time(nullptr));
	// 関数ポインタ
	PFunc pfunc = Answer;
	// 入力した予想
	int selectAnswer;

	printf("サイコロは丁( 2 )、半( 1 )どっちだ\n\n");
	while (1) {
		printf("丁( 2 )、半( 1 )どちらかを入力\n");
		printf("予想:");
		scanf_s("%d", &selectAnswer);

		SetTimeout(pfunc, 3, selectAnswer);
	}

	return 0;
}