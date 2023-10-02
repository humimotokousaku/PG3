#include <stdio.h>

int Recursive(int n) {
	if (n >= 2) {
		return 0;
	}
	if (n == 1) {
		return (100+ 0 * Recursive(n + 1));
	}
	return ((Recursive(n + 1) * 2) - 50);
}

int main() {
	int n = 1;
	int result;

	result = Recursive(n);
	printf("%dの階乗 = %d\n", n, result);

	return 0;
}