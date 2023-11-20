#include <stdio.h>
#include <windows.h>
#include <time.h>
#include <stdlib.h>
#include <functional>

// 指定した秒数処理を止める
void SetTimeout(int waitTime) {
	Sleep(1000 * waitTime);
};

int main() {
	// 乱数の初期値を生成
	srand((unsigned int)time(nullptr));

	// 結果発表用の変数
	std::function<void(int, int)> result = [&](int selectAnswer, int waitTime) {
		printf("正解は...?\n");
		// 3秒間処理を停止
		SetTimeout(waitTime);

		// ランダムでサイコロの目を決定
		int diceNum = rand() % 6 + 1;

		// 正解のサイコロ
		int answerDiceNum = diceNum % 2;
		// 予想したサイコロ
		int selectDiceNum = selectAnswer % 2;

		// 偶数なら丁
		if (answerDiceNum == 0) {
			printf("丁!\n");
			SetTimeout(1.5f);
		}// 奇数なら半
		else if (answerDiceNum != 0) {
			printf("半!\n");
			SetTimeout(1.5f);
		}
		// どちらも同じ数なら正解
		if (selectDiceNum == answerDiceNum) {
			printf("正解!!!\n\n");
		}
		else {
			printf("不正解!!!\n\n");
		}
	};

	// 入力した予想
	int selectAnswer;

	printf("サイコロは丁( 2 )、半( 1 )どっちだ\n\n");
	while (1) {
		printf("丁( 2 )、半( 1 )どちらかを入力\n");
		printf("予想:");
		scanf_s("%d", &selectAnswer);

		// 結果発表
		result(selectAnswer, 3);
	}

	return 0;
}