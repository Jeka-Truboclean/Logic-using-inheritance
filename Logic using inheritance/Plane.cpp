#include <iostream>
#include "Plane.h"
using namespace std;

void Plane::Show_Data() const
{
	cout << "Fuel type: " << fuel << "\nAmount of " << fuel << ": "
		<< f_value << " L" << "\nWeight : " << weight << " T" << endl;
}

void Plane::Show_Consumption() const
{
	cout << "Consumption: " << f_value / 100 << " L/KM" << endl;
}

void Plane::Show_Tank_Filling_Check() const
{
	if (tank_up <= f_value and tank_up > 0)
	{
		cout << "Your tank is filled up on " << tank_up << " L" << endl;
	}
	else if (tank_up <= 0)
	{
		cout << "Dude, your vehicle wont start engin with " << tank_up << " L" << endl;
	}
	else if (tank_up > f_value)
	{
		cout << "Dude, your tank is over float: " << tank_up << " L" << endl;
	}
	else
	{
		cout << "ERROR" << endl;
	}

}