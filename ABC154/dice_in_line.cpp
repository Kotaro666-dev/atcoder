/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dice_in_line.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/17 16:32:53 by kkamashi          #+#    #+#             */
/*   Updated: 2020/06/17 17:50:13 by kkamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// 累積和の問題
// サイコロの期待値の計算式が間違っていた。
//　最初に各サイコロの期待値を算出→期待値を累積和にする→最大の期待値になるところをみつける。

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;
const int INF = 1000000000;
const ll LINF = 1000000000000000000; //1e18
const double EPS = 1e-10;

int main(void)
{
    std::cout << std::fixed << std::setprecision(10);
    int N, K;
    cin >> N >> K;

    vector<double> p(N);
    for (int i = 0; i < N; i++)
    {
        cin >> p[i];
    }

    vector<double> kitaichi(N);
    for (int i = 0; i < N; i++)
    {
        kitaichi[i] = (1 + p[i]) / 2;
    }

    // debug
    // for (int i = 0; i < N; i++)
    // {
    //     cout << kitaichi[i] << " ";
    // }

    vector<double> ruiseki(N + 1, 0);
    for (int i = 0; i < N; ++i)
    {
        ruiseki[i + 1] = ruiseki[i] + kitaichi[i];
    }

    // debug for kitaichi
    // for (int i = 0; i <= N; ++i)
    // {
    //     cout << ruiseki[i] << " ";
    // }

    // K差を見る
    double ans = 0;
    for (int i = 0; i + K <= N; i++)
    {
        if (ans < ruiseki[i + K] - ruiseki[i])
        {
            ans = ruiseki[i + K] - ruiseki[i];
        }
    }
    cout << ans << endl;
}

// double calc_ex(double num)
// {
//     // floor
//     double result;
//     result = (1.0 + num) / 2.0;
//     // double result = (((num * (num + 1.0)) / 2.0) / num);
//     return (result);
// }

// int main(void)
// {
//     std::cout << std::fixed << std::setprecision(10);
//     int N, K;
//     cin >> N >> K;

//     vector<int> p(N);
//     for (int i = 0; i < N; i++)
//     {
//         cin >> p[i];
//     }

//     // 隣接するサイコロの場所を見つける。
//     // input
//     vector<int> ruiseki(N + 1, 0);
//     for (int i = 0; i < K; i++)
//     {
//         ruiseki[i + 1] = ruiseki[i] + p[i];
//     }

//     for (int i = K; i <= N; ++i)
//     {
//         ruiseki[i + 1] = ruiseki[i] + p[i] - p[i - K];
//         // printf("%d %d\n", p[i], p[i - K]);
//     }

//     // debug
//     // for (int i = K; i <= N; i++)
//     // {
//     //     printf("%d ", ruiseki[i]);
//     // }
//     int mx = -1;
//     int index;
//     for (int i = K; i <= N; i++)
//     {
//         if (mx < ruiseki[i])
//         {
//             mx = ruiseki[i];
//             index = i;
//         }
//     }

//     double ans = 0;
//     for (int i = index; i < index + K; i++)
//     {
//         ans += calc_ex(double(p[i]));
//         // cout << p[i] << " " << calc_ex(double(p[i])) << endl;
//     }
//     cout << ans << endl;
//     return (0);
// }