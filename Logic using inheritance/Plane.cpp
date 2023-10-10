#include <iostream>
#include "Plane.h"
using namespace std;

void Plane::Show_Data() const
{
	cout << "Fuel type: " << fuel << "\nAmount of " << fuel << ": "
		<< f_value << " L" << "\nWeight : " << weight << " T" << endl;
}
