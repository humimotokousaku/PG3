#include <stdio.h>
#include <windows.h>
#include <time.h>
#include <stdlib.h>


typedef int (*PFunc)();

// サイコロの目をランダムで決定
int RandomDice() {
	int result = rand() % 6 + 1;
	return result;
}

// 答え
void Answer(PFunc p, int selectAnswer) {
	printf("正解は...?\n");
	// 3秒間処理を停止
	Sleep(3000);

	// 正解のサイコロ
	int answerNum = p() % 2;
	// 予想したサイコロ
	int selectNum = selectAnswer % 2;

	// 偶数なら丁
	if (answerNum == 0) {
		printf("丁!\n");
		Sleep(1500);
	}// 奇数なら半
	else if(answerNum != 0){
		printf("半!\n");
		Sleep(1500);
	}

	// どちらも同じ数なら正解
	if (selectNum == answerNum) {
		printf("正解!!!\n\n");
	}
	else {
		printf("不正解!!!\n\n");
	}
}


int main() {
	// サイコロの目をランダムで決定する
	srand((unsigned int)time(nullptr));
	// 関数ポインタ
	PFunc pfunc = &RandomDice;
	// 入力した予想
	int selectAnswer;

	printf("サイコロは丁( 2 )、半( 1 )どっちだ\n\n");
	while (1) {
		printf("丁( 2 )、半( 1 )どちらかを入力\n");
		printf("予想:");
		scanf_s("%d", &selectAnswer);

		// 結果発表
		Answer(pfunc, selectAnswer);
	}

	return 0;
}