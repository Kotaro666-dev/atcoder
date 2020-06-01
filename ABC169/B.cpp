/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/31 19:34:21 by kkamashi          #+#    #+#             */
/*   Updated: 2020/06/01 10:19:51 by kkamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;
const int INF = 1000000000;
const ll LINF = 1000000000000000000; //1e18
const double EPS = 1e-10;

int main(void)
{
    int n;
    cin >> n;

    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            printf("0\n");
            return (0);
        }
    }

    ll ans = 1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] <= (1000000000000000000 / ans))
        {
            ans *= a[i];
        }
        else
        {
            printf("-1\n");
            return (0);
        }
    }
    cout << ans << endl;
    return (0);
}

// #include <bits/stdc++.h>
// #define PI 3.1415926535897
// using namespace std;
// typedef long long ll;
// const int INF = 1000000000;
// const ll LINF = 1000000000000000000; //1e18
// const double EPS = 1e-10;

// int main(void)
// {
//     int N;
//     cin >> N;

//     vector<string> num(N);
//     for (int i = 0; i < N; i++)
//     {
//         cin >> num[i];
//         ll temp = stoll(num[i]);
//         if (temp == 0)
//         {
//             cout << 0 << endl;
//             return (0);
//         }
//     }

//     ll ans = 1;
//     for (int i = 0; i < N; i++)
//     {
//         ll temp = stoll(num[i]);
//         string tmp = to_string(ans);
//         // cout << tmp.size() << " " << num[i].size() << endl;
//         if (tmp.size() + num[i].size() - 1 >= 20)
//         {
//             cout << -1 << endl;
//             return (0);
//         }
//         else if (tmp.size() + num[i].size() - 1 >= 18)
//         {
//             ans *= temp;
//             string temp_last = to_string(ans);
//             if (temp_last.size() == 19)
//             {
//                 int one = 0;
//                 for (int i = 0; i < temp_last.size(); i++)
//                 {
//                     if (temp_last[i] >= '1')
//                     {
//                         one++;
//                     }
//                 }
//                 if (one > 1)
//                 {
//                     cout << -1 << endl;
//                     return (0);
//                 }
//             }
//         }
//         else
//         {
//             ans *= temp;
//         }
//     }
//     cout << ans << endl;
//     return (0);
// }