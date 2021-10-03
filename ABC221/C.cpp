#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;
const int INF = 1000000000;
const ll LINF = 1000000000000000000;//1e18
const double EPS = 1e-10;

int main(void)
{
	string S;
	cin >> S;

	sort(S.begin(), S.end());

	ll ans = 0;
	int length = S.size();

	do {
		// 絶対に左側は 1 の位があるため、1が index のスタート地点
		for (int i = 1; i < length; i++)
		{
			string left = "";
			string right = "";
			for (int left_index = 0; left_index < i; left_index++)
			{
				left += S[left_index];
			}
			for (int right_index = i; right_index < length; right_index++)
			{
				right += S[right_index];
			}
			if (left[0] == '0' || right[0] == '0') {
				continue;
			}
			long long temp = stoi(left) * stoi(right);
			ans = max(ans, temp);
		}
	} while (next_permutation(S.begin(), S.end()));
	cout << ans << endl;
	return (0);
}