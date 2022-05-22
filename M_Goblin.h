#pragma once
#include "Monster.h"

class M_Goblin : public Monster
{
public:
	M_Goblin();
	virtual ~M_Goblin();

	void Move() override;
};

