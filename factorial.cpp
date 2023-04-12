#include <iostream>
using namespace std;
int main()
{
	cin >> n << endl;
	acum = 1;
	for (int i = 1; i <= n; i++)
	{
		acum *= i;
	}
	cout << acum;
	return 0;
}