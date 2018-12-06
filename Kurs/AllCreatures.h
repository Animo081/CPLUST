#pragma once
class Vivern {
public:
	virtual int getHP() = 0;
	virtual void setHP(int) = 0;
};

class Greevil {
public:
	virtual int getHP() = 0;
	virtual void setHP(int) = 0;
};

class Hydra {
public:
	virtual int getHP() = 0;
	virtual void setHP(int) = 0;
};

class BiomCreatures {
public:
	virtual Vivern *createVivern() = 0;
	virtual Greevil *createGreevil() = 0;
	virtual Hydra *createHydra() = 0;
};
