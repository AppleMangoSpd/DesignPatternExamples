#pragma once
#include <iostream>
#include "Builder.h"

class BasicFriendlyBuilder : public Builder
{
private:
	std::string _friendlyName{ "Basic Friend" };
	std::string _friendlyWeapon{ "Shield" };
public:
	virtual void ConstructName(INpc* src_npc) override;
	virtual void ConstructWeapon(INpc* src_npc) override;
};

