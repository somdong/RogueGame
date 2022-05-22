#include "M_Goblin.h"
#include <iostream>
M_Goblin::M_Goblin()
{
	cout << "고블린 생성자" << endl;
}

M_Goblin::~M_Goblin()
{
	cout << "고블린 소멸자" << endl;
}

void M_Goblin::Move()
{
	cout << "고블린 이동" << endl;
}
