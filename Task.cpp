#include <iostream>
using namespace std;
bool isPrime(int n)
{
	int count = 0;
	for (int i = 1; i <= n ; i++)
	{
		if (n % i == 0)
		{
			count++;
		}
	}
	if (count == 2)
	{
		return true;
	}
	else {
		return false;
	}
}
int main()
{
	int n , m ;
	cin >> n >> m;
	for (int i = n+1; i < m; i++)
	{
		if (isPrime(i))
		{
			cout << i << " ";
		}
	}
	return 0;
}