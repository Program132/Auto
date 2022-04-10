#ifndef AUTOMANAGER_HPP_INCLUDED
#define AUTOMANAGER_HPP_INCLUDED

#include <iostream>

class Auto
{

	public:
		Auto(); // Constructor

		void setPrice(int price);
		int getPrice();

		void setName(std::string name);
		std::string getName();

		void setWheels(int wheels);
		int getWheels();

	private:
		int _price;
		std::string _name;
		int _wheels;
};

#endif // AUTOMANAGER_HPP_INCLUDED