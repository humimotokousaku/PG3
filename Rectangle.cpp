#include "Rectangle.h"
#include <stdio.h>

Rectangle::Rectangle() {
	width_ = 20;
	height_ = 30;
	printf("‹éŒ`‚Ìî•ñ\n");
	printf("c:%d\n", height_);
	printf("‰¡:%d\n\n", width_);
}

Rectangle::~Rectangle() {

}

void Rectangle::size() {
	// –ÊÏ‚ğ‹‚ß‚é(c x ‰¡)
	areaResult_ = width_ * height_;

	printf("‹éŒ`‚Ì–ÊÏ‚ğŒvZ\n");
	printf("®:%d * %d\n\n",width_,height_);
}

void Rectangle::draw() {
	printf("‹éŒ`‚Ì–ÊÏ‚Í%.0f\n\n", areaResult_);
}