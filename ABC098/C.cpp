/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 17:01:09 by kkamashi          #+#    #+#             */
/*   Updated: 2020/06/19 18:00:04 by kkamashi         ###   ########.fr       */
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

    string S;
    cin >> S;

    ll totalW = 0;
    ll totalE = 0;
    for (int i = 0; i < N; i++)
    {
        if (S[i] == 'W')
        {
            totalW++;
        }
        else
        {
            totalE++;
        }
    }

    ll soFarW = 0;
    ll soFarE = 0;
    ll sum;
    ll ans = INF;
    for (int i = 0; i < N; i++)
    {
        char current = S[i];
        if (current == 'E')
        {
            soFarE++;
            sum = soFarW + (totalE - soFarE);
            // printf("%d: leftW = %d, rightE = %d\n", i + 1, soFarW, totalE - soFarE);
        }
        else
        {
            sum = soFarW + (totalE - soFarE);
            // printf("%d: leftW = %d, rightE = %d\n", i + 1, soFarW, totalE - soFarE);
        }
        ans = min(ans, sum);

        if (current == 'W')
        {
            soFarW++;
        }
    }
    cout << ans << endl;
}

// int main(void)
// {
//     int N;
//     cin >> N;

//     string S;
//     cin >> S;

//     vector<string> west(N + 1, "");
//     for (int i = 0; i < N; ++i)
//     {
//         west[i + 1] = west[i] + S[i];
//     }
//     vector<string> east(N + 1, "");
//     for (int i = 0; i < N; i++)
//     {
//         east[i] = S.substr(i + 1);
//     }

//     // debug
//     // for (int i = 0; i < N; i++)
//     // {
//     //     printf("i = %d\n", i + 1);
//     //     cout << west[i] << endl;
//     //     cout << east[i] << endl;
//     // }
//     ll W, E;
//     ll sum;
//     ll ans = INF;
//     for (int i = 0; i < N; i++)
//     {
//         // east からWの数
//         W = count(west[i].begin(), west[i].end(), 'W');
//         // west からEの数
//         E = count(east[i].begin(), east[i].end(), 'E');
//         // printf("%d: W = %d, E= %d\n", i + 1, W, E);
//         sum = W + E;
//         ans = min(ans, sum);
//     }
//     cout << ans << endl;
//     return (0);
// }