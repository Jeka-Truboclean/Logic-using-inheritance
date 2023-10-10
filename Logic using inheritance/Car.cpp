#include <iostream>
#include "Car.h"
using namespace std;

void Car::Show_Data() const
{
	cout << "Fuel type: " << fuel << "\nAmount of " << fuel << ": " 
		<< f_value << " L" << "\nWeight : " << weight << " KG" << endl;
}
