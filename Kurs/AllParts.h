#pragma once

class Gloves {
public:
	virtual int getArmor() = 0;
	virtual int getShield() = 0; 
	virtual int getSpeed() = 0;
private:
	int armor;
	int shield;
	int speed;
};

class Armour {
public:
	virtual int getArmor() = 0;
	virtual int getShield() = 0;
	virtual int getSpeed() = 0;
	virtual int getBonus() = 0;
private:
	int bonus;
	int armor;
	int shield;
	int speed;
};

class Shoes {
public:
	virtual int getArmor() = 0;
	virtual int getShield() = 0;
	virtual int getSpeed() = 0;
private:
	int armor;
	int shield;
	int speed;
};

class Helment {
public:
	virtual int getArmor() = 0;
	virtual int getShield() = 0;
	virtual int getSpeed() = 0;
private:
	int armor;
	int shield;
	int speed;
};

class Pants {
public:
	virtual int getArmor() = 0;
	virtual int getShield() = 0;
	virtual int getSpeed() = 0;
private:
	int armor;
	int shield;
	int speed;
};

class GearSets {
public:
	virtual Gloves *createGloves() = 0;
	virtual Armour *createArmour() = 0;
	virtual Shoes *createShoes() = 0;
	virtual Helment *createHelment() = 0;
	virtual Pants *createPants() = 0;
};
