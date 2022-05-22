#include "World.h"
#include "Player.h"
#include "M_Goblin.h"
#include "M_Slime.h"
#include "M_WildBoar.h"

World::World()
{
	//Init();
}

World::~World()
{
	Term();
}


void World::Term()
{
	for (size_t i = 0; i < MyCharacter.size(); ++i)
	{
		delete MyCharacter[i];
	}

}
void World::Init()
{
	//Map Load
	MyCharacter.push_back(new Player);
	MyCharacter.push_back(new M_Goblin);
	MyCharacter.push_back(new M_Slime);
	MyCharacter.push_back(new M_WildBoar);
}

void World::Tick()
{
	//All Monster
	for (size_t i = 0; i < MyCharacter.size(); ++i)
	{
		MyCharacter[i]->Move();
	}
}

void World::Render()
{
}
