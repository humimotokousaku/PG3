#include <stdio.h>
#include <thread>

void CurrentThreadDisplay(const char* thread) {
	printf("%s\n", thread);
}

int main() {
	// スレッドの番号
	const char* thread[3] = {
		"thread1",
		"thread2",
		"thread3"
	};
	// マルチスレッド
	std::thread th1(CurrentThreadDisplay, thread[0]);
	th1.join();

	std::thread th2(CurrentThreadDisplay, thread[1]);
	th2.join();

	std::thread th3(CurrentThreadDisplay, thread[2]);
	th3.join();

	return 0;
}