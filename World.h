#pragma once
#include <vector>
class Character;

using namespace std;

class World
{
public:
	World();
	virtual ~World();

	void Term(); // 터미네이트, 종료하다

	virtual void Init();
	virtual void Tick();
	virtual void Render();

	vector<Character*> MyCharacter;
	
};

