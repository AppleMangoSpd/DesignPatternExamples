#pragma once
#include "Observer.h"

class Notifier;

// player class
class Player :public Observer
{
public:
	Player();
	~Player();
	void onDamage(int src_value);
	void LevelUp(int src_value);
	void Reinforce(int src_value);
	void ScoreUp(int src_value);

	void Update();

	void CurrentSpec();

	virtual void onNotify(EVENT event) override;
private:
	int _hp;
	int _lvl;
	int _score;
	int _reinforceCount;
	Notifier* _notifier;
};