/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/16 00:15:42 by kkamashi          #+#    #+#             */
/*   Updated: 2020/06/16 00:50:03 by kkamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;
const int INF = 1000000000;
const ll LINF = 1000000000000000000; //1e18
const double EPS = 1e-10;

const int M = 1e5 + 1;

int main(void)
{
    ll N, K;
    cin >> N >> K;

    vector<ll> list(M, 0);
    int value, cnt;
    for (int i = 0; i < N; i++)
    {
        cin >> value >> cnt;
        list[value] += cnt;
    }

    int ans;
    for (int i = 0; i <= M; i++)
    {
        if (list[i] > 0)
        {
            K -= list[i];
            if (K <= 0)
            {
                ans = i;
                break;
            }
        }
        // if (K <= list[i])
        // {
        //     cout << i << endl;
        //     return (0);
        // }
        // K -= list[i];
    }
    cout << ans << "\n";
    return (0);
}

// int main(void)
// {
//     int N, K;
//     cin >> N >> K;

//     // priority_queue<int> arr;
//     priority_queue<int, vector<int>, greater<int>> arr;

//     int value, cnt;
//     for (int i = 0; i < N; i++)
//     {
//         cin >> value >> cnt;
//         while (cnt > 0)
//         {
//             arr.push(value);
//             cnt--;
//         }
//     }

//     for (int i = 0; i < K - 1; i++)
//     {
//         arr.pop();
//     }
//     cout << arr.top() << endl;
//     return (0);
// }