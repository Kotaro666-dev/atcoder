#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;
const int INF = 1000000000;
const ll LINF = 1000000000000000000; //1e18
const double EPS = 1e-10;

int main(void)
{
    int N;
    cin >> N;

    char word;
    map<char, int> counter;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> word;
            if (counter.count(word))
            {
                counter[word] = counter[word] + 1;
            }
            else
            {
                counter[word] = 1;
            }
        }
    }

    // debug
    // for (auto p : counter)
    // {
    //     auto k = p.first;
    //     auto v = p.second;
    //     cout << k << " => " << v << endl;
    // }

    if (N == 1)
    {
        cout << word << endl;
        return (0);
    }

    deque<char> ans;
    int cnt = 0;
    // できないパターン
    // for (auto p : counter)
    // {
    //     int counter = 0;
    //     auto key = p.first;
    //     auto value = p.second;
    //     if (value > 1)
    //     {
    //         while (value > 1)
    //         {
    //             cnt += 2;
    //             value -= 2;
    //         }
    //     }
    // }

    // even
    bool finished = false;
    if (N % 2 == 0)
    {
        for (auto p : counter)
        {
            auto key = p.first;
            auto value = p.second;
            if (value > 1)
            {
                while (value > 1)
                {
                    ans.push_front(key);
                    ans.push_back(key);
                    value -= 2;
                    if (ans.size() == N)
                    {
                        finished = true;
                        break;
                    }
                }
                if (finished == true)
                {
                    break;
                }
            }
        }
    }
    // odd
    else
    {
        char last_add;
        // find last_add one
        for (auto p : counter)
        {
            auto key = p.first;
            auto value = p.second;
            bool found = false;
            if (value % 2 != 0)
            {
                last_add = key;
                break;
            }
        }

        for (auto p : counter)
        {
            auto key = p.first;
            auto value = p.second;
            if (value > 1)
            {
                while (value > 1)
                {
                    ans.push_front(key);
                    ans.push_back(key);
                    value -= 2;
                    if (ans.size() == N - 1)
                    {
                        ans.push_back(last_add);
                        char temp;
                        temp = last_add;
                        ans[ans.size() - 1] = ans[ans.size() / 2];
                        ans[ans.size() / 2] = temp;
                        finished = true;
                        break;
                    }
                }
                if (finished == true)
                {
                    break;
                }
            }
        }
    }

    //できないパターン
    if (ans.empty())
    {
        printf("-1\n");
        return (0);
    }
    else if (ans.size() != N)
    {
        printf("-1\n");
        return (0);
    }

    string front = "", back = "";
    for (int i = 0; i < N; i++)
    {
        front += ans[i];
    }
    for (int i = N - 1; i >= 0; i--)
    {
        back += ans[i];
    }
    if (front != back)
    {
        printf("-1\n");
        return (0);
    }
    // output
    for (int i = 0; i < N; i++)
    {
        cout << ans[i];
    }
    printf("\n");
    return (0);
}