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
		double tank_up;
		cout << "How much fuel do you want to tank up(L)?\n>";
		cin >> tank_up;
		ptr->Set("Patrol", 50, 1415, tank_up);
		break;
	case 2:
		ptr = new Ship();
		double tank_up1;
		cout << "How much fuel do you want to tank up(T)?\n>";
		cin >> tank_up1;
		ptr->Set("Fuel oil", 75, 4500, tank_up1);
		break;
	case 3:
		ptr = new Plane();
		double tank_up2;
		cout << "How much fuel do you want to tank up(L)?\n>";
		cin >> tank_up2;
		ptr->Set("Kerosene", 30000, 214, tank_up2);
		break;
	case 4:
		ptr = new Tram();
		double tank_up3;
		cout << "How much fuel do you want to tank up(there is no fuel lol (￢‿￢ ))?\n>";
		cin >> tank_up3;
		tank_up = 0;
		tank_up = 0;
		ptr->Set("No fuel", 0, 17, tank_up3);
		break;
	case 5:
		ptr = new Motorbike();
		double tank_up4;
		cout << "How much fuel do you want to tank up(L)?\n>";
		cin >> tank_up4;
		ptr->Set("Patrol", 27, 348, tank_up4);
		break;
	default:
		break;
	}
	ptr->Show_Data();
	ptr->Show_Consumption();
	ptr->Show_Tank_Filling_Check();
	delete ptr;

	return 0;
}