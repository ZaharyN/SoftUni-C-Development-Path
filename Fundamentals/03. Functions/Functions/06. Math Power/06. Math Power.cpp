#include <iostream>

using namespace std;

long long GetPower(int n, int power)
{
	int result = 1;
	for (int i = 1; i <= power; i++)
	{
		result *= n;
	}
	
	return result;
}

int main()
{
	int n, power; 
	cin >> n >> power;
	
	cout << GetPower(n, power);

	return 0;
}