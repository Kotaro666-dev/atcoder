#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;
const int INF = 1000000000;
const ll LINF = 1000000000000000000;//1e18
const double EPS = 1e-10;

int main(void)
{
	string S, T;
	cin >> S >> T;

	int counter = 0;
	bool is_possible = false;
	for (int i = 0; i < S.size(); i++)
	{
		if (S[i] != T[i])
		{
			counter++;
			if (i == S.size() - 1)
			{
				continue;
			}
			if (S[i] == T[i + 1] && S[i + 1] == T[i])
			{
				is_possible = true;
			}
		}
	}
	if (counter == 0 || (counter == 2 && is_possible))
	{
		cout << "Yes" << endl;
	}
	else
	{
		cout << "No" << endl;
	}
	return (0);
}