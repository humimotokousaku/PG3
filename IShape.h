#pragma once
class IShape
{
public:
	IShape() = default;
	~IShape() = default;
	// �ʐς����߂�
	virtual void size() = 0;
	// �ʐς̒l��\��
	virtual void draw() = 0;
protected:
	// �ʐ�
	float areaResult_;
};

