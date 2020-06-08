/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/08 01:00:21 by kkamashi          #+#    #+#             */
/*   Updated: 2020/06/08 12:08:32 by kkamashi         ###   ########.fr       */
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
    int N;
    cin >> N;

    vector<int> a(N);
    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
    }

    map<int, int> mp;
    int num;
    for (int i = 0; i < N; i++)
    {
        num = a[i];
        mp[num + 1]++;
        mp[num]++;
        mp[num - 1]++;
    }

    int ans = -1;
    for (auto iter = mp.begin(); iter != mp.end(); iter++)
    {
        ans = max(ans, iter->second);
    }
    cout << ans << endl;
}

// int main(void)
// {
//     int N;
//     cin >> N;

//     vector<int> a(N);
//     int sum = 0;
//     for (int i = 0; i < N; i++)
//     {
//         cin >> a[i];
//         sum += a[i];
//     }

//     sort(a.begin(), a.end());
//     int mn = a[0];
//     int average = sum / N;

//     int cnt;
//     int ans = -1;
//     for (int i = mn - 2; i <= a[a.size() - 1]; i++)
//     {
//         cnt = 0;
//         for (int j = 0; j < N; j++)
//         {
//             if (a[j] == i || a[j] + 1 == i || a[j] - 1 == i)
//             {
//                 cnt++;
//             }
//             if (a[j] >= i + 2)
//             {
//                 break;
//             }
//         }
//         ans = max(cnt, ans);
//     }
//     cout << ans << "\n";
//     return (0);
// }