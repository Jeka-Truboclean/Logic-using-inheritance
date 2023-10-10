#include <iostream>
#include "Ship.h"
using namespace std;

void Ship::Show_Data() const
{
	cout << "Fuel type: " << fuel << "\nAmount of " << fuel << ": " 
		<< f_value << " T" << "\nWeight : " << weight << " T" << endl;
}
