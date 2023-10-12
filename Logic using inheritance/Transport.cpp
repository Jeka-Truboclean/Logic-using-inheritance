#include <iostream>
#include "Transport.h"
using namespace std;

void Transport::Set(const char* fuel, double f_value, double weight, double tank_up)
{
	this->fuel = new char[strlen(fuel) + 1];
	strcpy_s(this->fuel, strlen(fuel) + 1, fuel);
	this->f_value = f_value;
	this->weight = weight;
	this->tank_up = tank_up;
}


