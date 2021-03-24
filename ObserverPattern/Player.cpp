#include "Player.h"
#include "Notifier.h"
#include <iostream>

Player::Player()
{
	_notifier = new Notifier();
	_notifier->addObserver(this);
}

Player::~Player()
{
	_notifier->removeObserver(this);
	delete _notifier;
}

void Player::onDamage(int src_value)
{
	_hp -= src_value;

	if (_hp <= 0)
	{
		// 옵저버들에게 이벤트 발송.
		_notifier->notify(EVENT::PlayerDeath);
	}
}

void Player::LevelUp(int src_value)
{
	this->_lvl += src_value;
	this->CurrentSpec();
	if (_lvl >= 3)
	{
		_notifier->notify(EVENT::PlayerLv3);
	}
}

void Player::Reinforce(int src_value)
{
	this->_reinforceCount += src_value;
	this->CurrentSpec();
	if (_reinforceCount >= 5)
	{
		_notifier->notify(EVENT::PlayerReinforce5);
	}
}

void Player::ScoreUp(int src_value)
{
	this->_score += src_value;
	this->CurrentSpec();
	if (_score >= 100)
	{
		_notifier->notify(EVENT::PlayerScore100);
	}
}

void Player::Update()
{

}

void Player::CurrentSpec()
{
	std::cout << "현재 플레이어 점수 : " << this->_score << std::endl;
	std::cout << "현재 플레이어 레벨 : " << this->_lvl << std::endl;
	std::cout << "현재 플레이어 강화 : " << this->_reinforceCount << std::endl;
}

void Player::onNotify(EVENT event)
{
	switch (event)
	{
	case PlayerScore100:
		std::cout << "업적 1 완료" << std::endl;
		break;
	case PlayerDeath:
		std::cout << "플레이어 사망" << std::endl;
		break;
	case PlayerLv3:
		std::cout << "업적 2 완료" << std::endl;
		break;
	case PlayerReinforce5:
		std::cout << "업적 3 완료" << std::endl;
		break;
	default:
		break;
	}
}
