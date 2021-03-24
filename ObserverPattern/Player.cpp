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
		// �������鿡�� �̺�Ʈ �߼�.
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
	std::cout << "���� �÷��̾� ���� : " << this->_score << std::endl;
	std::cout << "���� �÷��̾� ���� : " << this->_lvl << std::endl;
	std::cout << "���� �÷��̾� ��ȭ : " << this->_reinforceCount << std::endl;
}

void Player::onNotify(EVENT event)
{
	switch (event)
	{
	case PlayerScore100:
		std::cout << "���� 1 �Ϸ�" << std::endl;
		break;
	case PlayerDeath:
		std::cout << "�÷��̾� ���" << std::endl;
		break;
	case PlayerLv3:
		std::cout << "���� 2 �Ϸ�" << std::endl;
		break;
	case PlayerReinforce5:
		std::cout << "���� 3 �Ϸ�" << std::endl;
		break;
	default:
		break;
	}
}
