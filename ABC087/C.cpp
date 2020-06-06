/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/06 22:15:36 by kkamashi          #+#    #+#             */
/*   Updated: 2020/06/06 23:08:09 by kkamashi         ###   ########.fr       */
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

    vector<int> upper(N);
    vector<int> lower(N);
    for (int i = 0; i < N; i++)
    {
        cin >> upper[i];
    }
    for (int i = 0; i < N; i++)
    {
        cin >> lower[i];
    }

    int sum;
    int mx = -1;
    for (int i = 0; i < N; i++)
    {
        sum = 0;
        for (int k = 0; k <= i; k++)
        {
            sum += upper[k];
        }
        for (int j = i; j < N; j++)
        {
            sum += lower[j];
        }
        mx = max(mx, sum);
    }
    int ans = mx;
    cout << ans << endl;
}

// int main(void)
// {
//     int N;
//     cin >> N;

//     int upper_sum = 0;
//     int lower_sum = 0;
//     int upper_max = -1;
//     int upper_loc;
//     int lower_max = -1;
//     vector<vector<int>> A(2, vector<int>(N));
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < N; j++)
//         {
//             cin >> A[i][j];
//             if (i == 0 && j != 0)
//             {
//                 upper_sum += A[i][j];
//                 if (upper_max <= A[i][j])
//                 {
//                     upper_max = A[i][j];
//                     upper_loc = j;
//                 }
//             }
//             else if (i == 1 && j != N - 1)
//             {
//                 lower_sum += A[i][j];
//                 if (lower_max <= A[i][j])
//                 {
//                     lower_max = A[i][j];
//                 }
//             }
//         }
//     }

//     int ans1 = 0;
//     // 上段ずっと右からの右端で下
//     if (upper_sum >= lower_sum)
//     {
//         for (int i = 0; i < N; i++)
//         {
//             ans1 += A[0][i];
//         }
//         ans1 += A[1][N - 1];
//     }

//     // 下段に移動してからずっと右
//     int ans2 = 0;
//     if (upper_sum < lower_sum)
//     {
//         ans2 += A[0][0];
//         for (int i = 0; i < N; i++)
//         {
//             ans2 += A[1][i];
//         }
//     }

//     // 上段の最大値まで進んでからの下、のちに右直進
//     int ans3 = 0;
//     if (upper_max > lower_max)
//     {
//         for (int i = 0; i < 2; i++)
//         {
//             for (int j = 0; j < N; j++)
//             {
//                 if (i == 0)
//                 {
//                     if (j <= upper_loc)
//                     {
//                         ans3 += A[i][j];
//                     }
//                     else
//                     {
//                         break;
//                     }
//                 }
//                 else if (i == 1)
//                 {
//                     if (j >= upper_loc)
//                     {
//                         ans3 += A[i][j];
//                     }
//                 }
//             }
//         }
//     }
//     int ans = max(ans1, max(ans2, ans3));
//     cout << ans << endl;
//     // printf("%d %d %d\n", ans1, ans2, ans3);
//     return (0);
// }