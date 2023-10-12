#pragma once
#include "Transport.h"
class Car : public Transport
{
public:
	void Show_Data() const;
	void Show_Consumption() const;
	void Show_Tank_Filling_Check() const;
};

