#include "Circle.h"
#include <stdio.h>

Circle::Circle() {
	radius_ = 20;
	printf("�~�̏��\n");
	printf("���a:%d\n\n", radius_);
}

Circle::~Circle() {

}

void Circle::size() {
	// �~����
	const float PI = 3.14f;
	// �ʐς����߂�(�c x ���@x �~����)
	areaResult_ = radius_ * radius_ * PI;

	printf("�~�̖ʐς��v�Z\n");
	printf("��:%d * %d * 3.14\n\n", radius_, radius_);
}

void Circle::draw() {
	printf("�~�̖ʐς�%.2f\n\n", areaResult_);
}