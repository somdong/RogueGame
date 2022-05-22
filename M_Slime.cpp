#include "M_Slime.h"
#include <iostream>

using namespace std;


M_Slime::M_Slime()
{
	cout << "슬라임 생성자" << endl;
}

M_Slime::~M_Slime()
{
	cout << "슬라임 소멸자" << endl;
}

void M_Slime::Move()
{
	cout << "슬라임 이동" << endl;
}
