#pragma once
#include "Human.h"

class Japanese : public Human
{
public:
	Japanese();
	~Japanese();
	void Talk() override;
};

