#pragma once
#include "Monster.h"
class M_Slime : public Monster
{
public:
	M_Slime();
	virtual ~M_Slime();

	void Move() override;
};

