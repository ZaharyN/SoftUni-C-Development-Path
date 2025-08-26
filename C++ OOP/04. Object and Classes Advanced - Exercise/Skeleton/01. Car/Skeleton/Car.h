#ifndef CAR_H
#define CAR_H
#include <string>

using namespace std;

class Car
{
	string brand, model;
	int year;

public:
	Car(string sBrand, string sModel, int sYear) :
		brand(sBrand), model(sModel), year(sYear) { }

	string GetBrand() const { return brand; }
	string GetModel() const { return model; }
	int GetYear() const { return year; }
};

#endif // !CAR_H
