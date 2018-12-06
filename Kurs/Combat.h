#pragma once

#include "AllCreatures.h"
#include "Strategy.h"

class Combat{
public:
private:
};

class VivernCombat : public Combat {
public:
	VivernCombat(Vivern *vivern, Character *character) {
		int choise;
		bool fbaff = false;
		bool sbaff = false;
		std::cout << "К вам в гости зашла виверна" << std::endl;
		while (vivern->getHP() > 0) {
			std::cout << "Что будем делать?" << std::endl;
			std::cout << "1)Драться" << std::endl;
			std::cout << "2)Сосать здоровье" << std::endl;
			std::cout << "3)Наложить усиление (+25 к лечению)" << std::endl;
			std::cout << "4)Наложить усиление (цель теряет половину здоровья во время атаки)" << std::endl;
			std::cout << "0)Бежать" << std::endl;
			std::cin >> choise;
			switch (choise){
			case 0: { 
				strategy = new RunStrategy();
				strategy->fight(vivern,character);
				break;
			}
			case 1: {
				if (fbaff && sbaff) {
					 //strategy = new DrainDamageFightStrategy;
				}
				else if (fbaff) {
					 strategy = new DrainFightStrategy;
				}
				else if (sbaff){
					strategy = new DamageFightStrategy;
				}else
					strategy = new FightStrategy();
				strategy->fight(vivern, character);
				fbaff = false;
				sbaff = false;
				break;
			}
			case 2: {
				if (fbaff && sbaff) {
					//strategy = new DrainDamageVampireStrategy;
				}
				else if (fbaff) {
					strategy = new DrainVampireStrategy;
				}
				else if (sbaff) {
					strategy = new DamageVampireStrategy;
				}
				else
					strategy = new VampireStrategy();
				strategy->fight(vivern, character);
				fbaff = false;
				sbaff = false;
				break;
			}
			case 3: {
				fbaff = true;
				break;
			}
			case 4: {
				sbaff = true;
				break;
			}
			}
		}
		std::cout << "Гостья передавала приветы, ждём её снова" << std::endl;
	};
private:
	Strategy *strategy;
};

class GreevilCombat : public Combat {
public:
	GreevilCombat(Greevil *greevil, Character *character) {
		int choise;
		bool fbaff = false;
		bool sbaff = false;
		std::cout << "К вам в гости зашёл грявл" << std::endl;
		while (greevil->getHP() > 0) {
			std::cout << "Что будем делать?" << std::endl;
			std::cout << "1)Драться" << std::endl;
			std::cout << "2)Сосать здоровье" << std::endl;
			std::cout << "3)Наложить усиление (+25 к лечению)" << std::endl;
			std::cout << "4)Наложить усиление (цель теряет половину здоровья во время атаки)" << std::endl;
			std::cout << "0)Бежать" << std::endl;
			std::cin >> choise;
			switch (choise) {
			case 0: {
				strategy = new RunStrategy();
				strategy->fight(greevil, character);
				break;
			}
			case 1: {
				if (fbaff && sbaff) {
					//strategy = new DrainDamageFightStrategy;
				}
				else if (fbaff) {
					strategy = new DrainFightStrategy;
				}
				else if (sbaff) {
					strategy = new DamageFightStrategy;
				}
				else
					strategy = new FightStrategy();
				strategy->fight(greevil, character);
				fbaff = false;
				sbaff = false;
				break;
			}
			case 2: {
				if (fbaff && sbaff) {
					//strategy = new DrainDamageVampireStrategy;
				}
				else if (fbaff) {
					strategy = new DrainVampireStrategy;
				}
				else if (sbaff) {
					strategy = new DamageVampireStrategy;
				}
				else
					strategy = new VampireStrategy();
				strategy->fight(greevil, character);
				fbaff = false;
				sbaff = false;
				break;
			}
			case 3: {
				fbaff = true;
				break;
			}
			case 4: {
				sbaff = true;
				break;
			}
			}
		}
		std::cout << "Гость передавал приветы, ждём его снова" << std::endl;
	};
private:
	Strategy *strategy;
};

class HydraCombat : public Combat {
public:
	HydraCombat(Hydra *hydra, Character *character) {
		int choise;
		bool fbaff = false;
		bool sbaff = false;
		std::cout << "К вам в гости зашла гидра" << std::endl;
		while (hydra->getHP() > 0) {
			std::cout << "Что будем делать?" << std::endl;
			std::cout << "1)Драться" << std::endl;
			std::cout << "2)Сосать здоровье" << std::endl;
			std::cout << "3)Наложить усиление (+25 к лечению)" << std::endl;
			std::cout << "4)Наложить усиление (цель теряет половину здоровья во время атаки)" << std::endl;
			std::cout << "0)Бежать" << std::endl;
			std::cin >> choise;
			switch (choise) {
			case 0: {
				strategy = new RunStrategy();
				strategy->fight(hydra, character);
				break;
			}
			case 1: {
				if (fbaff && sbaff) {
					//strategy = new DrainDamageFightStrategy;
				}
				else if (fbaff) {
					strategy = new DrainFightStrategy;
				}
				else if (sbaff) {
					strategy = new DamageFightStrategy;
				}
				else
					strategy = new FightStrategy();
				strategy->fight(hydra, character);
				fbaff = false;
				sbaff = false;
				break;
			}
			case 2: {
				if (fbaff && sbaff) {
					 //strategy = new DrainDamageVampireStrategy;
				}
				else if (fbaff) {
					strategy = new DrainVampireStrategy;
				}
				else if (sbaff) {
					strategy = new DamageVampireStrategy;
				}
				else
					strategy = new VampireStrategy();
				strategy->fight(hydra, character);
				fbaff = false;
				sbaff = false;
				break;
			}
			case 3: {
				fbaff = true;
				break;
			}
			case 4: {
				sbaff = true;
				break;
			}
			}
		}
		std::cout << "Гостья передавала приветы, ждём её снова" << std::endl;
	};
private:
	Strategy *strategy;
};
