#pragma once
#include <vector>
class Character;

using namespace std;

class World
{
public:
	World();
	virtual ~World();

	void Term(); // �͹̳���Ʈ, �����ϴ�

	virtual void Init();
	virtual void Tick();
	virtual void Render();

	vector<Character*> MyCharacter;
	
};

