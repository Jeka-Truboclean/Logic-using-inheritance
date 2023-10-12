#pragma once
#include "Transport.h"
class Plane : public Transport
{
	void Show_Data() const;
	void Show_Consumption() const;
	void Show_Tank_Filling_Check() const;
};

