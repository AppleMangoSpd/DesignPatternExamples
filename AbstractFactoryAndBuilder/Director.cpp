#include "Director.h"
#include "Builder.h"

Director::Director(Builder * builder)
{
	SetNpcBuilder(builder);
}

void Director::SetNpc(INpc * targetNpc)
{
	_returnNpc = targetNpc;
}

void Director::SetNpcBuilder(Builder * builder)
{
	_builder = builder;
}

void Director::ConstructNpc()
{
	_builder->ConstructName(_returnNpc);
	_builder->ConstructWeapon(_returnNpc);
}

INpc * Director::GetNpc() const
{
	return _returnNpc;
}
