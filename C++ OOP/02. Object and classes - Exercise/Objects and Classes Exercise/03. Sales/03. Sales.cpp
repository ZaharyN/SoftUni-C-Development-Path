#include <iostream>
#include <map>
#include <vector>
#include <sstream>
#include <iomanip>

using namespace std;

class Sale
{
	string town, product;
	float  price, quantity;

public:
	Sale(istream& data)
	{
		data >> town >> product >> price >> quantity;
	}

	const string& getTown() { return this->town; }
	const string& getProduct() { return this->product; }
	float getTotal() { return this->price * this->quantity; }
};

class Sales
{
	map<string, float> sales;

public:
	void AddSale(Sale& sale);
	void PrintSales(ostream& os);
};

void Sales::AddSale(Sale& sale)
{
	string key = sale.getTown();

	if (sales.find(key) != sales.end())
	{
		sales[key] += sale.getTotal();
 	}
	else
	{
		sales[key] = sale.getTotal();
	}

	return;
}

void Sales::PrintSales(ostream& os)
{
	os << fixed << setprecision(2);
	for (pair<const string, float>& sale : sales)
	{
		os << sale.first << " -> " << sale.second << endl;
	}
}

int main()
{
	Sales sales;

	int n;
	cin >> n;

	string input;

	for (size_t i = 0; i < n; i++)
	{
		getline(cin, input);
		Sale current(cin);
		sales.AddSale(current);
	}

	ostringstream os;
	sales.PrintSales(os);

	cout << os.str();

	return 0;
}