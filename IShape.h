#pragma once
class IShape
{
public:
	IShape() = default;
	~IShape() = default;
	// 面積を求める
	virtual void size() = 0;
	// 面積の値を表示
	virtual void draw() = 0;
protected:
	// 面積
	float areaResult_;
};

