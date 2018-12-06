#pragma once

#include <iostream>
#include "BiomCreature.h"

class Location{
public:
	virtual Vivern *getVivern() = 0;
	virtual Greevil *getGreevil() = 0;
	virtual Hydra *getHydra() = 0;
private:
};

class City :public Location {
public:
	City() {
		cityCreatures = new CityCreatures();
	};
	Vivern *getVivern() {
		return cityCreatures->createVivern();
	};
	Greevil *getGreevil() {
		return cityCreatures->createGreevil();
	};
	Hydra *getHydra() {
		return cityCreatures->createHydra();
	};
private:
	BiomCreatures *cityCreatures;
};

class Forest : public Location {
public:
	Forest() {
		forestCreatures = new ForestCreatures();
	}
	Vivern *getVivern() {
		return forestCreatures->createVivern();
	}
	Greevil *getGreevil() {
		return forestCreatures->createGreevil();
	}
	Hydra *getHydra() {
		return forestCreatures->createHydra();
	}
private:
	BiomCreatures *forestCreatures;
};

class Desert : public Location {
public:
	Desert() {
		desertCreatures = new DesertCreatures();
	}
	Vivern *getVivern() {
		return desertCreatures->createVivern();
	}
	Greevil *getGreevil() {
		return desertCreatures->createGreevil();
	}
	Hydra *getHydra() {
		return desertCreatures->createHydra();
	}
private:
	BiomCreatures *desertCreatures;
};

class Factory {
public:
	virtual Location *createLocation() = 0;
};

class cityFactory : public Factory {
	Location *createLocation() {
		return new City();
	}
};

class forestFactory : public Factory {
	Location *createLocation() {
		return new Forest();
	}
};

class desertFactory : public Factory {
	Location *createLocation() {
		return new Desert();
	}
};

Location *foo(Factory *value) {
	return value->createLocation();
}

Vivern *getViverno(Location *location) {
	return location->getVivern();
}

Hydra *getHydroid(Location *location) {
	return location->getHydra();
}

Greevil *getGriavil(Location *location) {
	return location->getGreevil();
}

