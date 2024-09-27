#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	cout << "Enter an integer to generate some of its multiplications.\n";
	int n;
	cin >> n;
	for (int i{1}; i < 11; i++)
	{
		cout << n << " x " << i << " = " << i * n << '\n';
	}
}