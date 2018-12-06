#pragma once

#include "AllCreatures.h"

class CityVivern : public Vivern {
public:
	CityVivern() {
		hp = 100;
	}
	int getHP() {
		return hp;
	}
	void setHP(int hp) {
		this->hp = hp;
	}
private:
	int hp;
};

class CityGreevil : public Greevil {
public:
	CityGreevil() {
		hp = 100;
	}
	int getHP() {
		return hp;
	}
	void setHP(int hp) {
		this->hp = hp;
	}
private:
	int hp;
};

class CityHydra : public Hydra {
public:
	CityHydra() {
		hp = 100;
	}
	int getHP() {
		return hp;
	}
	void setHP(int hp) {
		this->hp = hp;
	}
private:
	int hp;
};

class ForestVivern : public Vivern {
public:
	ForestVivern() {
		hp = 150;
	}
	int getHP() {
		return hp;
	}
	void setHP(int hp) {
		this->hp = hp;
	}
private:
	int hp;
};

class ForestGreevil : public Greevil {
public:
	ForestGreevil() {
		hp = 150;
	}
	int getHP() {
		return hp;
	}
	void setHP(int hp) {
		this->hp = hp;
	}
private:
	int hp;
};

class ForestHydra : public Hydra {
public:
	ForestHydra() {
		hp = 150;
	}
	int getHP() {
		return hp;
	}
	void setHP(int hp) {
		this->hp = hp;
	}
private:
	int hp;
};
class DesertVivern : public Vivern {
public:
	DesertVivern() {
		hp = 200;
	}
	int getHP() {
		return hp;
	}
	void setHP(int hp) {
		this->hp = hp;
	}
private:
	int hp;
};

class DesertGreevil : public Greevil {
public:
	DesertGreevil() {
		hp = 200;
	}
	int getHP() {
		return hp;
	}
	void setHP(int hp) {
		this->hp = hp;
	}
private:
	int hp;
};

class DesertHydra : public Hydra {
public:
	DesertHydra() {
		hp = 200;
	}
	int getHP() {
		return hp;
	}
	void setHP(int hp) {
		this->hp = hp;
	}
private:
	int hp;
};

class CityCreatures : public BiomCreatures {
	Vivern *createVivern() {
		return new CityVivern;
	}
	Greevil *createGreevil() {
		return new CityGreevil;
	}
	Hydra *createHydra() {
		return new CityHydra;
	}
};

class ForestCreatures : public BiomCreatures {
	Vivern *createVivern() {
		return new ForestVivern;
	}
	Greevil *createGreevil() {
		return new ForestGreevil;
	}
	Hydra *createHydra() {
		return new ForestHydra;
	}
};

class DesertCreatures : public BiomCreatures {
	Vivern *createVivern() {
		return new DesertVivern;
	}
	Greevil *createGreevil() {
		return new DesertGreevil;
	}
	Hydra *createHydra() {
		return new DesertHydra;
	}
};

class createCreatures {
public:
	CityCreatures *createCityCreatures() {
		return new CityCreatures();
	}
	ForestCreatures *createForestCreatures() {
		return new ForestCreatures();
	}
	DesertCreatures *createDesertCreatures() {
		return new DesertCreatures();
	}
};