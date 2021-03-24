#include "BasicFriendlyBuilder.h"
#include "INpc.h"

void BasicFriendlyBuilder::ConstructName(INpc * src_npc)
{
	src_npc->SetName(_friendlyName);
}

void BasicFriendlyBuilder::ConstructWeapon(INpc * src_npc)
{
	src_npc->SetWeapon(_friendlyWeapon);
}
