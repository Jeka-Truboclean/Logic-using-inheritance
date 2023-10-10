#include <iostream>
#include "Transport.h"
using namespace std;

void Transport::Set(const char* fuel, double f_value, double weight)
{
	this->fuel = new char[strlen(fuel) + 1];
	strcpy_s(this->fuel, strlen(fuel) + 1, fuel);
	this->f_value = f_value;
	this->weight = weight;
}

void Transport::Show_Data() const
{
	cout << "You didn't add -> virtual <-" << endl;
}
