#include <stdio.h>
#include "Comparator.h"

int main() {
	// 比較する数値のの組み合わせ
	Comparator<int, int> comparator1(1, 1);
	Comparator<int, float> comparator2(1, 1.5f);
	Comparator<int, double> comparator3(1, 1.6);
	Comparator<float, float> comparator4(1.5f, 1.5f);
	Comparator<float, double> comparator5(1.5f, 1.6);
	Comparator<double, double> comparator6(1.6, 1.6);

	// それぞれの結果を表示
	printf("<int, int>       %d", comparator1.Min<int>());
	printf("<int, float>     %f", comparator2.Min<float>());
	printf("<int, double>    %lf", comparator3.Min<double>());
	printf("<float, float>   %f", comparator4.Min<float>());
	printf("<float, double>  %lf", comparator5.Min<double>());
	printf("<double, double> %lf", comparator6.Min<double>());

	return 0;
}