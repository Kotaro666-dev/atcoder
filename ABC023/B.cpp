#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;
const int INF = 1000000000;
const ll LINF = 1000000000000000000; //1e18
const double EPS = 1e-10;

void gameover()
{
    cout << -1 << endl;
}

int main(void)
{
    int N;
    cin >> N;
    string S;
    cin >> S;

    if (N == 1 && S == "b")
    {
        cout << 0 << endl;
        return 0;
    }
    else if (N % 2 == 0)
    {
        gameover();
    }
    else
    {
        int n = 1;
        string temp = "b";
        while (true)
        {
            if (n % 3 == 1)
            {
                temp = "a" + temp + "c";
            }
            else if (n % 3 == 2)
            {
                temp = "c" + temp + "a";
            }
            else
            {
                temp = "b" + temp + "b";
            }

            if (temp == S)
            {
                break;
            }

            if (temp.size() > N)
            {
                cout << -1 << endl;
                return 0;
            }
            n++;
        }
        cout << n << endl;
    }
    return (0);
}