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
		dis.push_back(mp(k, b));
	}
	for(int i = 0; i < n; i++)
	{
		for(int j = i + 1; j < n; j++)
		{
			int v = dis[j].second - dis[i].second;
			int u = dis[i].first - dis[j].first;
			if(u != 0)
			{
				if(v / u < x2 && v / u > x1)
				{
					cout << "YES  s" << endl;
					return 0;
				}
			}
		}
	}
	cout << "NO  s" << endl;
	return 0;
	
	


	
}
