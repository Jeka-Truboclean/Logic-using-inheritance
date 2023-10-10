#include "Tram.h"
#include <iostream>
using namespace std;

void Tram::Show_Data() const
{
	cout << "Fuel type: " << fuel << "\nAmount of " << fuel << ": "
		<< f_value << " L" << "\nWeight : " << weight << " T" << endl;
}
