#pragma once
class Strategy
{
public:
	virtual void fight(Vivern *vivern, Character *character) = 0;
	virtual void fight(Hydra *hydra, Character *character) = 0;
	virtual void fight(Greevil *greevil, Character *character) = 0;
};

class FightStrategy : public Strategy {
public:
	FightStrategy() {
		damage = 20;
	}
	void fight(Vivern *vivern, Character *character) {
		vivern->setHP(vivern->getHP() - damage);
		std::cout << "Monster hp = " << vivern->getHP() << std::endl;
	}
	void fight(Hydra *hydra, Character *character) {
		hydra->setHP(hydra->getHP() - damage);
		std::cout << "Monster hp = " << hydra->getHP() << std::endl;
	}
	void fight(Greevil *greevil, Character *character) {
		greevil->setHP(greevil->getHP() - damage);
		std::cout << "Monster hp = " << greevil->getHP() << std::endl;
	}
private:
	int damage;
};

class DrainFightStrategy : public FightStrategy {
public:
	DrainFightStrategy() {
		heal = 25;
	}
	void drain(Character *character) {
		character->setHP(heal);
	}
	void fight(Vivern *vivern, Character *character) {
		drain(character);
		FightStrategy::fight(vivern, character);
	}
	void fight(Hydra *hydra, Character *character) {
		drain(character);
		FightStrategy::fight(hydra, character);
	}
	void fight(Greevil *greevil, Character *character) {
		drain(character);
		FightStrategy::fight(greevil, character);
	}
private:
	int heal;
};

class DamageFightStrategy :public FightStrategy {
public:
	void hpLoss(Vivern *vivern) {
		vivern->setHP(vivern->getHP() - (vivern->getHP()/2));
	}
	void hpLoss(Hydra *hydra) {
		hydra->setHP(hydra->getHP() - (hydra->getHP() / 2));
	}
	void hpLoss(Greevil *greevil) {
		greevil->setHP(greevil->getHP() - (greevil->getHP() / 2));
	}
	void fight(Vivern *vivern, Character *character) {
		hpLoss(vivern);
		FightStrategy::fight(vivern, character);
	}
	void fight(Hydra *hydra, Character *character) {
		hpLoss(hydra);
		FightStrategy::fight(hydra, character);
	}
	void fight(Greevil *greevil, Character *character) {
		hpLoss(greevil);
		FightStrategy::fight(greevil, character);
	}
};

class DrainDamageFightStrategy : public DrainFightStrategy, public DamageFightStrategy {
public:
	void fight(Vivern *vivern, Character *character) {
		DrainFightStrategy::drain(character);
		DamageFightStrategy::hpLoss(vivern);
		FightStrategy::fight(vivern, character);
	}
	void fight(Hydra *hydra, Character *character) {
		DrainFightStrategy::drain(character);
		DamageFightStrategy::hpLoss(hydra);
		FightStrategy::fight(hydra, character);
	}
	void fight(Greevil *greevil, Character *character) {
		DrainFightStrategy::drain(character);
		DamageFightStrategy::hpLoss(greevil);
		FightStrategy::fight(greevil, character);
	}
};

class VampireStrategy : public Strategy {
public:
	VampireStrategy() {
		damage = 15;
		heal = 10;
	}
	void fight(Vivern *vivern, Character *character) {
		vivern->setHP(vivern->getHP() - damage);
		std::cout << "Monster hp = " << vivern->getHP() << std::endl;
		character->setHP(heal);
		std::cout << "Hero hp = " << character->getHP() << std::endl;
	}
	void fight(Hydra *hydra, Character *character) {
		hydra->setHP(hydra->getHP() - damage);
		std::cout << "Monster hp = " << hydra->getHP() << std::endl;
		character->setHP(heal);
		std::cout << "Hero hp = " << character->getHP() << std::endl;
	}
	void fight(Greevil *greevil, Character *character) {
		greevil->setHP(greevil->getHP() - damage);
		std::cout << "Monster hp = " << greevil->getHP() << std::endl;
		character->setHP(heal);
		std::cout << "Hero hp = " << character->getHP() << std::endl;
	}
private:
	int damage;
	int heal;
};

class DrainVampireStrategy : public VampireStrategy {
public:
	DrainVampireStrategy() {
		heal = 25;
	}
	void drain(Character *character) {
		character->setHP(heal);
	}
	void fight(Vivern *vivern, Character *character) {
		drain(character);
		VampireStrategy::fight(vivern, character);
	}
	void fight(Hydra *hydra, Character *character) {
		drain(character);
		VampireStrategy::fight(hydra, character);
	}
	void fight(Greevil *greevil, Character *character) {
		drain(character);
		VampireStrategy::fight(greevil, character);
	}
private:
	int heal;
};

class DamageVampireStrategy :public VampireStrategy {
public:
	void hpLoss(Vivern *vivern) {
		vivern->setHP(vivern->getHP() - (vivern->getHP() / 2));
	}
	void hpLoss(Hydra *hydra) {
		hydra->setHP(hydra->getHP() - (hydra->getHP() / 2));
	}
	void hpLoss(Greevil *greevil) {
		greevil->setHP(greevil->getHP() - (greevil->getHP() / 2));
	}
	void fight(Vivern *vivern, Character *character) {
		hpLoss(vivern);
		VampireStrategy::fight(vivern, character);
	}
	void fight(Hydra *hydra, Character *character) {
		hpLoss(hydra);
		VampireStrategy::fight(hydra, character);
	}
	void fight(Greevil *greevil, Character *character) {
		hpLoss(greevil);
		VampireStrategy::fight(greevil, character);
	}
};

class DrainDamageVampireStrategy : public DrainVampireStrategy, public DamageVampireStrategy {
public:
	void fight(Vivern *vivern, Character *character) {
		DrainVampireStrategy::drain(character);
		DamageVampireStrategy::hpLoss(vivern);
		VampireStrategy::fight(vivern, character);
	}
	void fight(Hydra *hydra, Character *character) {
		DrainVampireStrategy::drain(character);
		DamageVampireStrategy::hpLoss(hydra);
		VampireStrategy::fight(hydra, character);
	}
	void fight(Greevil *greevil, Character *character) {
		DrainVampireStrategy::drain(character);
		DamageVampireStrategy::hpLoss(greevil);
		VampireStrategy::fight(greevil, character);
	}
};

class RunStrategy : public Strategy {
	void fight(Vivern *vivern, Character *character) {
		vivern->setHP(0);
	}
	void fight(Hydra *hydra, Character *character) {
		hydra->setHP(0);
	}
	void fight(Greevil *greevil, Character *character) {
		greevil->setHP(0);
	}
};