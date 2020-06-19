/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/18 17:40:59 by kkamashi          #+#    #+#             */
/*   Updated: 2020/06/19 10:05:41 by kkamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// 参考サイト：https://drken1215.hatenablog.com/entry/2018/06/24/003500
// 間違いやすい嘘解法として、「1」から外側にどんどん広げるというものがある。
// これだと両端が少しだけ残って損をすることがある。

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;
const int INF = 1000000000;
const ll LINF = 1000000000000000000; //1e18
const double EPS = 1e-10;

// ans = ceil((double)(N - 1) / (K - 1))

int main(void)
{
    int N, K;
    cin >> N >> K;

    vector<int> A(N);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    int ans = 0;
    int right = 0;
    while (true)
    {
        if (ans == 0)
        {
            right += K;
        }
        else
        {
            right += K - 1;
        }
        ans++;

        if (right >= N)
        {
            break;
        }
    }
    cout << ans << endl;
}

// int main(void)
// {
//     int N, K;
//     cin >> N >> K;

//     vector<int> A(N);
//     int one;
//     for (int i = 0; i < N; i++)
//     {
//         cin >> A[i];
//         if (A[i] == 1)
//         {
//             one = i;
//         }
//     }

//     // Go left from one
//     int left = 0;
//     for (int i = one - 1; i >= 0; i--)
//     {
//         left++;
//     }
//     // Go right from one
//     int right = 0;
//     for (int i = one + 1; i < N; i++)
//     {
//         right++;
//     }
//     // printf("left = %d, right =  %d\n", left, right);
//     if (left % (K - 1) == 0)
//     {
//         left /= (K - 1);
//     }
//     else
//     {
//         left /= (K - 1);
//         left++;
//     }

//     if (right % (K - 1) == 0)
//     {
//         right /= (K - 1);
//     }
//     else
//     {
//         right /= (K - 1);
//         right++;
//     }
//     // printf("left = %d, right =  %d\n", left, right);
//     ll ans = left + right;
//     cout << ans << endl;
//     return (0);
// }