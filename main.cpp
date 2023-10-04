#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void CorrectAnswer(void) {
	printf("正解!!\n");
}

void WrongAnswer(void) {
	printf("不正解\n");
}

int main() {
	// サイコロの目を決定する
	unsigned int currentTime = time(nullptr);
	srand(currentTime);
	int dice = rand() % 6 - 0;

	void (*answer)();

	//answer = 
	return 0;
}