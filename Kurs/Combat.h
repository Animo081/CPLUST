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
		std::cout << "� ��� � ����� ����� �������" << std::endl;
		while (vivern->getHP() > 0) {
			std::cout << "��� ����� ������?" << std::endl;
			std::cout << "1)�������" << std::endl;
			std::cout << "2)������ ��������" << std::endl;
			std::cout << "3)�������� �������� (+25 � �������)" << std::endl;
			std::cout << "4)�������� �������� (���� ������ �������� �������� �� ����� �����)" << std::endl;
			std::cout << "0)������" << std::endl;
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
		std::cout << "������ ���������� �������, ��� � �����" << std::endl;
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
		std::cout << "� ��� � ����� ����� �����" << std::endl;
		while (greevil->getHP() > 0) {
			std::cout << "��� ����� ������?" << std::endl;
			std::cout << "1)�������" << std::endl;
			std::cout << "2)������ ��������" << std::endl;
			std::cout << "3)�������� �������� (+25 � �������)" << std::endl;
			std::cout << "4)�������� �������� (���� ������ �������� �������� �� ����� �����)" << std::endl;
			std::cout << "0)������" << std::endl;
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
		std::cout << "����� ��������� �������, ��� ��� �����" << std::endl;
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
		std::cout << "� ��� � ����� ����� �����" << std::endl;
		while (hydra->getHP() > 0) {
			std::cout << "��� ����� ������?" << std::endl;
			std::cout << "1)�������" << std::endl;
			std::cout << "2)������ ��������" << std::endl;
			std::cout << "3)�������� �������� (+25 � �������)" << std::endl;
			std::cout << "4)�������� �������� (���� ������ �������� �������� �� ����� �����)" << std::endl;
			std::cout << "0)������" << std::endl;
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
		std::cout << "������ ���������� �������, ��� � �����" << std::endl;
	};
private:
	Strategy *strategy;
};
