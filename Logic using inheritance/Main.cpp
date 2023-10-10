#include <iostream>
#include "Car.h"
#include "Ship.h"
#include "Plane.h"
#include "Tram.h"
#include "Motorbike.h"
using namespace std;

int main()
{
	int ch;
	cout << "\t<Make a chice>\n1 -> Car\n2 -> Ship\n3 -> Plane\n4 -> Tram\n5 -> Motorbike\n> ";
	cin >> ch;
	Transport* ptr = nullptr;
	switch (ch)
	{
	case 1:
		ptr = new Car();
		ptr->Set("Patrol", 50, 1415);
		break;
	case 2:
		ptr = new Ship();
		ptr->Set("Fuel oil", 75, 4500);
		break;
	case 3:
		ptr = new Plane();
		ptr->Set("Kerosene", 30000, 214);
		break;
	case 4:
		ptr = new Tram();
		ptr->Set("No fuel", 0, 17);
		break;
	case 5:
		ptr = new Motorbike();
		ptr->Set("Patrol", 27, 348);
		break;
	default:
		break;
	}
	ptr->Show_Data();
	delete ptr;

	return 0;
}