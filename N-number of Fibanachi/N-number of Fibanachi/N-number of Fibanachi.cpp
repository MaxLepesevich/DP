#include <iostream>
#include <cmath>

using namespace std;

unsigned long long int n, F;

int main()
{
	cin >> n;
	F = (pow(((1 + sqrt(5)) / 2), n) - pow(((1 - sqrt(5)) / 2), n)) / sqrt(5);
	cout << F;
}
