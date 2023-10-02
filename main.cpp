#include <stdio.h>

template <typename Type>
Type Min(Type a, Type b) {
	return a < b ? a : b;
}

template <>
char Min<char>(char a, char b) {
	printf("char:  数字以外は代入できません\n");
	return '\0';
}

int main() {
	// int型
	printf("int:   %d\n", Min<int>(100, 200));
	// float型
	printf("float: %f\n", Min<float>(10.5f, 20.3f));
	// double型
	printf("double:%lf\n", Min<double>(20.5555f, 30.3333f));
	// char型
	Min<char>('i', 'o');

	return 0;
}