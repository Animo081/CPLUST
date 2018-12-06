#include "SDL.h"
#include "God.h"

#include "iostream"
#include<clocale>

void startGame(God *controller) {
	int action;
	bool dangerous = true;
	while (dangerous) {
		std::cout << "��������:" << std::endl;
		std::cout << "1)�����������" << std::endl;
		std::cout << "0)�������" << std::endl;
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
			std::cout << "��������� ��� ���" << std::endl;
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

	std::cout << "����� ���������� � ��������� �������" << std::endl;

	while (!quit) {
		std::cout << "�������� ��������:" << std::endl;
		std::cout << "1)�� ������ �����������" << std::endl;
		std::cout << "0)�������� ������� ��������" << std::endl;
		std::cin >> menu;
		switch (menu){
			case 0: {quit = true; break; }
			case 1: {
				std::cout << "�������� ������� ����:" << std::endl;
				std::cout << "1)�����" << std::endl;
				std::cout << "2)���" << std::endl;
				std::cout << "3)�������" << std::endl;
				std::cout << "0)�������� ����" << std::endl;
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
						std::cout << "����� ����� ���������" << std::endl;
						break;
					}
				}
				break;
			}
			default: {
				std::cout << "������ ��������� ���� ������� ������" << std::endl;
				break;
			}	
		}
	}

	controller->makeBackup();

	return 0;
}