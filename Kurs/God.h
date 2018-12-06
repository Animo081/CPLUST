#pragma once
#include "GearSet.h"
#include "AllParts.h"
#include "Character.h"
#include "Location.h"
#include "Combat.h"

#include <iostream>

class God
{
public:
	God() {
		sets = new createParts();
		defSet = sets->createDefaultSet();
		shivSet = sets->createShivaSet();
		dagSet = sets->createDagonSet();
		character = new Character();
		character->setSet(defSet);

		backuped = false;
	};
	void setLocation(int location) {
		switch (location) {
		case 1: {
			cityFactory city;
			ptr = &city;
			break;
		}
		case 2: {
			forestFactory forest;
			ptr = &forest;
			break;
		}
		case 3: {
			desertFactory desert;
			ptr = &desert;
			break;
		}
		}
		getto = foo(ptr);
	};
	void makeBackup() {
		backuped = true;
		backup = character->snapshot();
		chappe = new Character();
		chappe->setSet(shivSet);
		chappe->restore(backup);
	};
	void move() {
		int event = std::rand() % 7 + 1;
		switch (event){
			case 1: {
				combat = new VivernCombat(getViverno(getto),character);
				break;
			}
			case 2: {
				combat = new GreevilCombat(getGriavil(getto),character);
				break;
			}
			case 3: {
				combat = new HydraCombat(getHydroid(getto),character);
				break;
			}
			case 4: {
				std::cout << "Вы нашли предмет" << std::endl;
				break;
			}
			case 5: {
				std::cout << "Вы ещё не умирали" << std::endl;
				break;
			}
			case 6: {
				std::cout << "Пусто" << std::endl;
				break;
			}
			case 7: {
				std::cout << "Пусто" << std::endl;
				break;
			}
		}
	}
private:
	bool backuped;

	Factory *ptr;
	Location *getto;
	Character *character;
	Character *chappe;
	createParts *sets;
	Backup *backup;
	GearSets *defSet;
	GearSets *shivSet;
	GearSets *dagSet;
	Combat *combat;
};