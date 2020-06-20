/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   D.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/12 21:24:14 by kkamashi          #+#    #+#             */
/*   Updated: 2020/06/20 11:59:41 by kkamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// 参考サイト：https://drken1215.hatenablog.com/entry/2020/04/12/225900
//　考え方重要：すべてのパターン - 制約に当てはまるものを引く

#pragma GCC optimize("Ofast")
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

    string S;
    cin >> S;

    int r = 0, g = 0, b = 0;
    for (int i = 0; i < N; i++)
    {
        char x = S[i];
        if (x == 'R')
        {
            r++;
        }
        else if (x == 'G')
        {
            g++;
        }
        else
        {
            b++;
        }
    }
    ll all = r * g * b;
    ll sub = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            if (S[i] == S[j])
            {
                continue;
            }
            int k = j * 2 - i;
            if (k >= N || S[k] == S[i] || S[k] == S[j])
            {
                continue;
            }
            sub++;
        }
    }
    ll ans = all - sub;
    cout << ans << endl;
    return (0);
}

// int main(void)
// {
//     int N;
//     cin >> N;

//     string S;
//     cin >> S;
//     const int M = S.size();

//     vector<int> R;
//     vector<int> G;
//     vector<int> B;
//     for (int i = 0; i < M; i++)
//     {
//         int location = i + 1;
//         if (S[i] == 'R')
//         {
//             R.push_back(location);
//         }
//         else if (S[i] == 'G')
//         {
//             G.push_back(location);
//         }
//         else
//         {
//             B.push_back(location);
//         }
//     }

//     ll all = R.size() * G.size() * B.size();
//     printf("all = %d\n", all);
//     ll sub = 0;
//     for (int i = 1; i < M - 2 + 1; i++)
//     {
//         for (int j = i + 1; j < M - 1 + 1; j++)
//         {
//             int k = 2 * j - i;
//             if (k <= M + 1)
//             {
//                 sub++;
//             }
//         }
//     }
//     cout << all - sub << endl;
//     return (0);
// }
