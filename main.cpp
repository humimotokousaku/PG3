#include <stdio.h>

int Recursive(int n) {
	if (n <= 1) {
		return (1);
	}

	return (n * Recursive(n - 1) - 50);
}

int main() {
	int n = 3;
	int result;

	result = Recursive(n);
	printf("%dの階乗 = %d\n", n, result);

	return 0;
}