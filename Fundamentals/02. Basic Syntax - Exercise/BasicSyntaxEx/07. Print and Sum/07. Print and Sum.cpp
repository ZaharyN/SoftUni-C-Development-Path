#include <iostream>

using namespace std;

int main()
{
	int start, end; 
	int sum = 0;
	cin >> start >> end;

	for (int i = start; i <= end; i++)
	{
		cout << i << " ";
		sum += i;
	}

	cout << endl << "Sum: " << sum << endl;

	return 0;
}