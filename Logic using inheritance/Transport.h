#pragma once
class Transport
{
protected:
	char* fuel;
	double f_value;
	double weight;
public:
	void Set(const char* fuel, double f_value, double weight);
	virtual void Show_Data() const;
};

