#pragma once
class Transport
{
protected:
	char* fuel;
	double f_value;
	double weight;
	double tank_up;
public:
	void Set(const char* fuel, double f_value, double weight, double tank_up);
	virtual void Show_Data() const = 0;
	virtual void Show_Consumption() const = 0;
	virtual void Show_Tank_Filling_Check() const = 0;
	virtual ~Transport() {}
};

