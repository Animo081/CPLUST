#pragma once
#include "AllParts.h"

class Backup
{
public:
	Backup(Armour *armour, Gloves *gloves, Pants *pants, Helment *helment, Shoes *shoes) {
		/*this->default_hp = hp;
		this->default_mana = mana;
		this->default_stamina = stamina;
		this->default_speed = speed;
		this->default_shield = shield;
		this->armor = armor;*/
		this->armour = armour;
		this->gloves = gloves;
		this->pants = pants;
		this->helment = helment;
		this->shoes = shoes;
	}
	Armour *getArmour() {
		return armour;
	}
	Gloves *getGloves() {
		return gloves;
	}
	Pants *getPants() {
		return pants;
	}
	Helment *getHelment() {
		return helment;
	}
	Shoes *getShoes() {
		return shoes;
	}
private:
	/*int default_hp;
	int default_mana;
	int default_stamina;
	int default_speed;
	int default_shield;
	int armor;*/

	Armour *armour;
	Gloves *gloves;
	Pants *pants;
	Helment *helment;
	Shoes *shoes;
};

