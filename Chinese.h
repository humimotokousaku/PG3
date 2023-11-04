#pragma once
#include "Human.h"

class Chinese: public Human
{
public:
	Chinese();
	~Chinese();
	void Talk() override;
};

