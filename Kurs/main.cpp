#include "SDL.h"
#include "God.h"

#include "iostream"
#include<clocale>

void startGame(God *controller) {
	int action;
	bool dangerous = true;
	while (dangerous) {
		std::cout << "Действия:" << std::endl;
		std::cout << "1)Исследовать" << std::endl;
		std::cout << "0)Драпать" << std::endl;
		std::cin >> action;
		switch (action) {
		case 1: {
			controller->move();
			break;
		}
		case 0: {
			dangerous = false;
			break;
		}
		default:
			std::cout << "Попробуем ещё раз" << std::endl;
			break;
		}
	}
}

int main(int argc, char *argv[]) {
	setlocale(LC_CTYPE, "");

	God *controller = new God();
	bool quit = false;
	int menu;
	int location;

	std::cout << "Добро пожаловать в стартовую локацию" << std::endl;

	while (!quit) {
		std::cout << "Выберите действие:" << std::endl;
		std::cout << "1)На поиски приключений" << std::endl;
		std::cout << "0)Покинуть игровую площадку" << std::endl;
		std::cin >> menu;
		switch (menu){
			case 0: {quit = true; break; }
			case 1: {
				std::cout << "Перечень опасных мест:" << std::endl;
				std::cout << "1)Город" << std::endl;
				std::cout << "2)Лес" << std::endl;
				std::cout << "3)Пустыня" << std::endl;
				std::cout << "0)Остаться дома" << std::endl;
				std::cin >> location;
				switch (location){
					case 1: {
						controller->setLocation(location);
						startGame(controller);
						break;
					}
					case 2: {
						controller->setLocation(location);
						startGame(controller);
						break;
					}
					case 3: {
						controller->setLocation(location);
						startGame(controller);
						break;
					}
					default: {
						std::cout << "Лучше будет вернуться" << std::endl;
						break;
					}
				}
				break;
			}
			default: {
				std::cout << "Путник позволяет себе слишком многое" << std::endl;
				break;
			}	
		}
	}

	controller->makeBackup();

	return 0;
}