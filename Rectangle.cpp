#include "Rectangle.h"
#include <stdio.h>

Rectangle::Rectangle() {
	width_ = 20;
	height_ = 30;
	printf("��`�̏��\n");
	printf("�c:%d\n", height_);
	printf("��:%d\n\n", width_);
}

Rectangle::~Rectangle() {

}

void Rectangle::size() {
	// �ʐς����߂�(�c x ��)
	areaResult_ = width_ * height_;

	printf("��`�̖ʐς��v�Z\n");
	printf("��:%d * %d\n\n",width_,height_);
}

void Rectangle::draw() {
	printf("��`�̖ʐς�%.0f\n\n", areaResult_);
}