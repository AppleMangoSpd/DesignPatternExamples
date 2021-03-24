#pragma once

class INpc;

class Builder
{
public:
	virtual void ConstructName(INpc* src_npc) {};
	virtual void ConstructWeapon(INpc* src_npc) {};
};
