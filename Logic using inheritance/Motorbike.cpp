#include "Motorbike.h"
#include <iostream>
using namespace std;

void Motorbike::Show_Data() const
{
	cout << "Fuel type: " << fuel << "\nAmount of " << fuel << ": "
		<< f_value << " L" << "\nWeight : " << weight << " KG" << endl;
}
