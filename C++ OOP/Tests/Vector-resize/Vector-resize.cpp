#include <iostream>
#include <vector>

void removeNegatives(std::vector<int>& arr)
{
	int writer = 0;
	int reader = 0;
	int iterations = 0;

	// Good start but this is O(n^2) which is not optimal for this algorithm
	// It can be done in O(n)

	for (; writer < arr.size(); writer++)
	{
		iterations++;
		if (arr[writer] < 0)
		{
			for (reader = writer + 1; reader < arr.size(); reader++)
			{
				iterations++;
				if (arr[reader] >= 0)
				{
					int temp = arr[writer];
					arr[writer] = arr[reader];
					arr[reader] = temp;
					break;
				}
			}
		}
		if (reader >= arr.size()) break;
	}

	arr.resize(writer);

	for (const int& el : arr)
	{
		std::cout << el << " ";
	}
	std::cout << std::endl;
	std::cout << "Iterations count: " << iterations << std::endl;
}

int main()
{
	std::vector<int> arr{ -1, -2, -3, -4, -5, -6, -7, -8, -9, -10, -11, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 };
	std::vector<int> arr1{ -1, 0 };
	removeNegatives(arr);
}
