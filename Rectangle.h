#pragma once
#include "IShape.h"

class Rectangle : public IShape
{
public:
	Rectangle();
	~Rectangle();
	void size() override;
	void draw() override;
private:
	// 横幅
	int width_;
	// 縦幅
	int height_;
};

