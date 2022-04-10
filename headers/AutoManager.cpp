#include <iostream>
#include <string>
#include "AutoManager.h"

Auto::Auto() { // Constructor
	_price = 0;
	_name = "Unknow";
	_wheels = 4; 
}

void Auto::setPrice(int price) {
	if (price < 1000) {
		std::cout << "We can not find any auto with -2000$ !" << std::endl;
	}

	_price = price;
}

int Auto::getPrice() {
	return _price;
}

void Auto::setName(std::string name) {
	_name = name;
}

std::string Auto::getName() {
	return _name;
}

void Auto::setWheels(int wheels) {
	if (wheels == 0) {
		std::cout << "Nice, your auto is flying :) !" << std::endl;
		_wheels = 0;
	}

	if (wheels < 2 && wheels != 0) {
		std::cout << "A auto have 2, 4 or no wheels !" << std::endl;
	}
}

int Auto::getWheels() {
	return _wheels;
}