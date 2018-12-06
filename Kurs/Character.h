#pragma once

#include "Backup.h"
#include "AllParts.h"
#include <iostream>
#include <string>

class Character
{
public:
	Character() {
		hp = 100;
		default_hp = hp;
		mana = 100;
		default_mana = mana;
		stamina = 100;
		default_stamina = stamina;
		speed = 20;
		default_speed = speed;
		shield = 0;
		default_shield = shield;
		armor = 0;
		default_armor = armor;
	};
	void setSet(GearSets *gear) {
		hp = default_hp;
		mana = default_mana;
		stamina = default_stamina;
		speed = default_speed;
		shield = default_shield;
		armor = default_armor;
		this->armour = gear->createArmour();
		armor += this->armour->getArmor();
		shield += this->armour->getShield();
		speed += this->armour->getSpeed();
		switch (this->armour->getBonus()) {
			case 1: {
				hp += 100;
				break;
			}
			case 2: {
				mana += 100;
				break;
			}
			case 3: {
				stamina += 100;
				break;
			}
		}
		this->gloves = gear->createGloves();
		armor += this->gloves->getArmor();
		shield += this->gloves->getShield();
		speed += this->gloves->getSpeed();
		this->helment = gear->createHelment();
		armor += this->helment->getArmor();
		shield += this->helment->getShield();
		speed += this->helment->getSpeed();
		this->pants = gear->createPants();
		armor += this->pants->getArmor();
		shield += this->pants->getShield();
		speed += this->pants->getSpeed();
		this->shoes = gear->createShoes();
		armor += this->shoes->getArmor();
		shield += this->shoes->getShield();
		speed += this->shoes->getSpeed();
	}
	void setHP(int hp) {
		this->hp += hp;
	}
	int getHP() {
		return hp;
	}
	Backup *snapshot() {
		return new Backup(armour,gloves,pants,helment,shoes);
	}
	void restore(Backup *backup) {
		this->armour = backup->getArmour();
		this->gloves = backup->getGloves();
		this->helment = backup->getHelment();
		this->pants = backup->getPants();
		this->shoes = backup->getShoes();
	}
private:
	std::string action;
	
	int hp;
	int default_hp;
	int mana;
	int default_mana;
	int stamina;
	int default_stamina;
	int speed;
	int default_speed;
	int shield;
	int default_shield;
	int armor;
	int default_armor;

	Armour *armour;
	Gloves *gloves;
	Pants *pants;
	Helment *helment;
	Shoes *shoes;
};
