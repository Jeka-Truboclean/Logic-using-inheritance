#include <iostream>
#include "Ship.h"
using namespace std;

void Ship::Show_Data() const
{
	cout << "Fuel type: " << fuel << "\nAmount of " << fuel << ": " 
		<< f_value << " T" << "\nWeight : " << weight << " T" << endl;
}

void Ship::Show_Consumption() const
{
	cout << "Consumption: " << f_value / 100 << " T/KM" << endl;
}

void Ship::Show_Tank_Filling_Check() const
{
	if (tank_up <= f_value and tank_up > 0)
	{
		cout << "Your tank is filled up on " << tank_up << " T" << endl;
	}
	else if (tank_up <= 0)
	{
		cout << "Dude, your vehicle wont start engin with " << tank_up << " T" << endl;
	}
	else if (tank_up > f_value)
	{
		cout << "Dude, your tank is over float: " << tank_up << " T" << endl;
	}
	else
	{
		cout << "ERROR" << endl;
	}

}
