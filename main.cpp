#include <stdio.h>
#include "Human.h"
#include "Japanese.h"
#include "Chinese.h"

int main() {
	printf("ポリモーフィズムの例:言語の違い\n\n");

	Human *human[2];
	// 日本人
	human[0] = new Japanese();
	human[0]->Talk();
	// 中国人
	human[1] = new Chinese();
	human[1]->Talk();

	// 解放処理
	for (int i = 0; i < 2; i++) {
		delete human[i];
	}

	return 0;
}