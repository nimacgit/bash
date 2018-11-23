#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;


int main()
{
	int n;
	srand(time(NULL));
	n = rand() % 1000;
	cout << n << endl;
	int x1, x2;
	x1 = rand() % 1000000;
	x2 = rand() % 1000000;
	if(x1 > x2)
		cout << x1 << " " << x2 << endl;
	else
		cout << x2 << " " << x1 << endl;
	for(int i = 0; i < n; i++)
	{
		int k = rand() % 1000000;
		int b = rand() % 1000000;
		cout << k << " " << b;
	}

}

