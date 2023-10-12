#include "Tram.h"
#include <iostream>
using namespace std;

void Tram::Show_Data() const
{
	cout << "Fuel type: " << fuel << "\nAmount of " << fuel << ": "
		<< f_value << " L" << "\nWeight : " << weight << " T" << endl;
}

void Tram::Show_Consumption() const
{
	cout << "Consumption: " << "until electricity will shut down" << endl;
}

void Tram::Show_Tank_Filling_Check() const
{
	cout << "No fuel\n";

}

