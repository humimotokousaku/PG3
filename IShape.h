#pragma once
class IShape
{
public:
	IShape() = default;
	~IShape() = default;
	// –ÊÏ‚ğ‹‚ß‚é
	virtual void size() = 0;
	// –ÊÏ‚Ì’l‚ğ•\¦
	virtual void draw() = 0;
protected:
	// –ÊÏ
	float areaResult_;
};

