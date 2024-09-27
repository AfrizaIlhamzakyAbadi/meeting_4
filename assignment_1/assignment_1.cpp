#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	cout << "To calculate the sum of series\n";
	cout << "1 + 2 + 3 + ... + n\n";
	cout << "enter the value of n.\n";
	int n{};
	cin >> n;
	int sum{ 0 };
	for (int i{1}; i <= n; i++)
	{
		sum = sum + i;
		if (i == n)
		{
			cout << "The sum is " << sum << '\n';
			return 0;
		}
	}
	return 0;
}