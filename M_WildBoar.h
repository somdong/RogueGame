#pragma once
#include "Monster.h"
class M_WildBoar : public Monster
{
public:
	M_WildBoar();
	virtual ~M_WildBoar();

	void Move() override;
};

