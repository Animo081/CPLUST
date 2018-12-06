#pragma once

#include <iostream>
#include "AllParts.h"


class DefaultGloves : public Gloves {
public:
	DefaultGloves() {
		armor = 10;
		shield = 10;
		speed = 10;
	}
	int getArmor() {
		return armor;
	}
	int getShield() {
		return shield;
	}
	int getSpeed() {
		return speed;
	}
private:
	int armor;
	int shield;
	int speed;
};

class DefaultArmour : public Armour {
public:
	DefaultArmour() {
		armor = 10;
		shield = 10;
		speed = 10;
		bonus = 1;
	}
	int getArmor() {
		return armor;
	}
	int getShield() {
		return shield;
	}
	int getSpeed() {
		return speed;
	}
	int getBonus() {
		return bonus;
	}
private:
	int bonus;
	int armor;
	int shield;
	int speed;
};

class DefaultShoes : public Shoes {
public:
	DefaultShoes() {
		armor = 10;
		shield = 10;
		speed = 10;
	}
	int getArmor() {
		return armor;
	}
	int getShield() {
		return shield;
	}
	int getSpeed() {
		return speed;
	}
private:
	int armor;
	int shield;
	int speed;
};

class DefaultHelment :public Helment {
public:
	DefaultHelment() {
		armor = 10;
		shield = 10;
		speed = 10;
	}
	int getArmor() {
		return armor;
	}
	int getShield() {
		return shield;
	}
	int getSpeed() {
		return speed;
	}
private:
	int armor;
	int shield;
	int speed;
};

class DefaultPants :public Pants {
public:
	DefaultPants() {
		armor = 10;
		shield = 10;
		speed = 10;
	}
	int getArmor() {
		return armor;
	}
	int getShield() {
		return shield;
	}
	int getSpeed() {
		return speed;
	}
private:
	int armor;
	int shield;
	int speed;
};

class ShivaGloves : public Gloves {
public:
	ShivaGloves() {
		armor = 25;
		shield = 50;
		speed = 15;
	}
	int getArmor() {
		return armor;
	}
	int getShield() {
		return shield;
	}
	int getSpeed() {
		return speed;
	}
private:
	int armor;
	int shield;
	int speed;
};

class ShivaArmour : public Armour {
public:
	ShivaArmour() {
		armor = 25;
		shield = 50;
		speed = 15;
		bonus = 2;
	}
	int getArmor() {
		return armor;
	}
	int getShield() {
		return shield;
	}
	int getSpeed() {
		return speed;
	}
	int getBonus() {
		return bonus;
	}
private:
	int bonus;
	int armor;
	int shield;
	int speed;
};

class ShivaShoes : public Shoes {
public:
	ShivaShoes() {
		armor = 25;
		shield = 50;
		speed = 15;
	}
	int getArmor() {
		return armor;
	}
	int getShield() {
		return shield;
	}
	int getSpeed() {
		return speed;
	}
private:
	int armor;
	int shield;
	int speed;
};

class ShivaHelment :public Helment {
public:
	ShivaHelment() {
		armor = 25;
		shield = 50;
		speed = 15;
	}
	int getArmor() {
		return armor;
	}
	int getShield() {
		return shield;
	}
	int getSpeed() {
		return speed;
	}
private:
	int armor;
	int shield;
	int speed;
};

class ShivaPants :public Pants {
public:
	ShivaPants() {
		armor = 25;
		shield = 50;
		speed = 15;
	}
	int getArmor() {
		return armor;
	}
	int getShield() {
		return shield;
	}
	int getSpeed() {
		return speed;
	}
private:
	int armor;
	int shield;
	int speed;
};

class DagonGloves : public Gloves {
public:
	DagonGloves() {
		armor = 50;
		shield = 25;
		speed = 20;
	}
	int getArmor() {
		return armor;
	}
	int getShield() {
		return shield;
	}
	int getSpeed() {
		return speed;
	}
private:
	int armor;
	int shield;
	int speed;
};

class DagonArmour : public Armour {
public:
	DagonArmour() {
		armor = 50;
		shield = 25;
		speed = 20;
		bonus = 3;
	}
	int getArmor() {
		return armor;
	}
	int getShield() {
		return shield;
	}
	int getSpeed() {
		return speed;
	}
	int getBonus() {
		return bonus;
	}
private:
	int bonus;
	int armor;
	int shield;
	int speed;
};

class DagonShoes : public Shoes {
public:
	DagonShoes() {
		armor = 50;
		shield = 25;
		speed = 20;
	}
	int getArmor() {
		return armor;
	}
	int getShield() {
		return shield;
	}
	int getSpeed() {
		return speed;
	}
private:
	int armor;
	int shield;
	int speed;
};

class DagonHelment :public Helment {
public:
	DagonHelment() {
		armor = 50;
		shield = 25;
		speed = 20;
	}
	int getArmor() {
		return armor;
	}
	int getShield() {
		return shield;
	}
	int getSpeed() {
		return speed;
	}
private:
	int armor;
	int shield;
	int speed;
};

class DagonPants :public Pants {
public:
	DagonPants() {
		armor = 50;
		shield = 25;
		speed = 20;
	}
	int getArmor() {
		return armor;
	}
	int getShield() {
		return shield;
	}
	int getSpeed() {
		return speed;
	}
private:
	int armor;
	int shield;
	int speed;
};

class DefaultSet : public GearSets {
	Gloves *createGloves() {
		return new DefaultGloves;
	}
	Armour *createArmour() {
		return new DefaultArmour;
	}
	Shoes *createShoes() {
		return new DefaultShoes;
	}
	Helment *createHelment() {
		return new DefaultHelment;
	}
	Pants *createPants() {
		return new DefaultPants;
	}
};

class ShivaSet : public GearSets {
	Gloves *createGloves() {
		return new ShivaGloves;
	}
	Armour *createArmour() {
		return new ShivaArmour;
	}
	Shoes *createShoes() {
		return new ShivaShoes;
	}
	Helment *createHelment() {
		return new ShivaHelment;
	}
	Pants *createPants() {
		return new ShivaPants;
	}
};

class DagonSet : public GearSets {
	Gloves *createGloves() {
		return new DagonGloves;
	}
	Armour *createArmour() {
		return new DagonArmour;
	}
	Shoes *createShoes() {
		return new DagonShoes;
	}
	Helment *createHelment() {
		return new DagonHelment;
	}
	Pants *createPants() {
		return new DagonPants;
	}
};

class createParts {
public:
	DefaultSet *createDefaultSet() {
		return new DefaultSet();
	}
	ShivaSet *createShivaSet() {
		return new ShivaSet();
	}
	DagonSet *createDagonSet(){
		return new DagonSet();
	}
};