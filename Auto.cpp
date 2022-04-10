/*

CREATED BY PROGRAM (@Program132 on GitHub)
10/04/2022

*/
#include <iostream>
#include <string>

#include "headers/AutoManager.h"

int main()
{
	std::cout << "AUTO created by Program" << "\nInit..." << std::endl;

	Auto v;
	std::cout << "Basic infos : \n- Price:" << v.getPrice() << "\n- Name:" << v.getName() << "\n- Wheels:" << v.getWheels() << std::endl;

	bool end = false;
	bool endCMDS = false;

	while (!end) {
		std::cout << "If you want to leave the program, tell us 'Y' or 'N' !" << std::endl;

		std::string arg;
		std::cin >> arg;

		if (arg == "Y" || arg == "y") {
			end = true;
			std::cout << "Your auto : \n- Price:" << v.getPrice() << "\n- Name:" << v.getName() << "\n- Wheels:" << v.getWheels() << std::endl;
			break;
		}
		else if (arg == "N" || arg == "n") {
			while (!endCMDS) {
				std::cout << "You have some commands: '1' to set the price, '2' to set the name and '3' to set wheels." << std::endl;
				std::cout << "Warning: About the name, do not tell a sentence, only 1 word!" << std::endl;
				std::cout << "If you want to leave this part, tell us 'leave' !" << std::endl;

				std::string argCMD;
				std::cin >> argCMD;

				if (argCMD == "leave" || argCMD == "left") {
					endCMDS = true;
					break;
				}
				else if (argCMD == "1") {
					std::cout << "Give us the price of a auto." << std::endl;
					int price;
					std::cin >> price;
					v.setPrice(price);
				}
				else if (argCMD == "2") {
					std::cout << "Give us the name of a auto." << std::endl;
					std::string name;
					std::cin >> name;
					v.setName(name);
				} else if (argCMD == "3") {
					std::cout << "Give us how many wheels for the auto (it can be 0)." << std::endl;
					int wheels;
					std::cin >> wheels;
				}
				else {
					std::cout << "Wrong command, try again." << std::endl;
				}
			}
		}
	}

	return 0;
}