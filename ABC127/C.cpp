/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/06 13:53:54 by kkamashi          #+#    #+#             */
/*   Updated: 2020/06/06 14:14:21 by kkamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// 一度目TLE
// 図に書いて考えてみると、正解できる

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;
const int INF = 1000000000;
const ll LINF = 1000000000000000000; //1e18
const double EPS = 1e-10;

int main(void)
{
    int N, M;
    cin >> N >> M;

    int left, right;
    int begin = 1;
    int end = N;

    int ans;
    for (int i = 0; i < M; i++)
    {
        cin >> left >> right;
        if (left > end)
        {
            cout << 0 << endl;
            return (0);
        }
        begin = max(begin, left);
        end = min(end, right);
    }
    ans = end - begin + 1;
    cout << ans << endl;
}

// int main(void)
// {
//     int N, M;
//     cin >> N >> M;

//     vector<int> left(M);
//     vector<int> right(M);
//     for (int i = 0; i < M; i++)
//     {
//         cin >> left[i] >> right[i];
//     }

//     int ans = 0;
//     bool isOK;
//     for (int i = 1; i <= N; i++)
//     {
//         isOK = true;
//         for (int j = 0; j < M; j++)
//         {
//             if (!(i >= left[j] && i <= right[j]))
//             {
//                 isOK = false;
//                 break;
//             }
//         }
//         if (isOK == true)
//         {
//             ans++;
//         }
//     }

//     cout << ans << endl;
//     return (0);
// }