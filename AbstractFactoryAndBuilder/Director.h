#pragma once

class Builder;
class INpc;

class Director
{
public:
	Builder* _builder;

	INpc* _returnNpc;

public:
	Director() {};
	Director(Builder* builder);

	void SetNpc(INpc* targetNpc);

	void SetNpcBuilder(Builder* builder);

	void ConstructNpc();
	
	INpc* GetNpc() const;
};

