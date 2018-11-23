#include <iostream>
#include <vector>
#include <stdlib.h>
#include <string>
#include <algorithm>
#include <stdio.h>
#include <set>
#define mp make_pair
using namespace std;

typedef pair<long long,long long> pll;
long long x1, x2;
vector<pll> dis;
int n;

int main()
{
	cin >> n;
	cin >> x1 >> x2;
	for(int i = 0; i < n; i++)
	{
		int k, b;
		scanf("%d %d", &k, &b);
		dis.push_back(mp((long long)k * x1 + b,(long long)k * x2 + b));
	}
	sort(dis.begin(), dis.end());
	for(int i = 0; i < n - 1; i++)
	{
		if(dis[i].second > dis[i + 1].first)
		{
			cout << "YES" << endl;
			return 0;
		}
	}
	cout << "NO" << endl;
	return 0;
	


	
}
