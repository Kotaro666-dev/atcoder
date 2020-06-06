/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/06 16:43:34 by kkamashi          #+#    #+#             */
/*   Updated: 2020/06/06 17:45:34 by kkamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;
const int INF = 1000000000;
const ll LINF = 1000000000000000000; //1e18
const double EPS = 1e-10;

// 、「3 倍する」 操作を何回かやっておくことで、「2 で割る」 操作の回数が増えたり減ったりするで
// しょうか？答えは No です。なぜなら、奇数を掛けて 2 で割れる回数が増えることはなく、整数を掛けて
// 2 で割れる回数が減ることがないからです。

int main(void)
{
    int N;
    cin >> N;

    vector<int> a(N);
    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
    }

    int cnt = 0;
    for (int i = 0; i < N; i++)
    {
        while (a[i] % 2 == 0)
        {
            cnt++;
            a[i] /= 2;
        }
    }
    cout << cnt << endl;
}

// bool is_game_over(vector<int> a)
// {
//     for (int i = 0; i < a.size(); i++)
//     {
//         if (a[i] % 2 == 0)
//         {
//             return (false);
//         }
//     }
//     return (true);
// }

// int find_max_even_num(vector<ll> a)
// {
//     sort(a.begin(), a.end(), greater<ll>());

//     for (int i = 0; i < a.size(); i++)
//     {
//         if (a[i] % 2 == 0)
//         {
//             return (a[i]);
//         }
//     }
//     return (0);
// }

// int main(void)
// {
//     int N;
//     cin >> N;

//     vector<ll> a(N);
//     for (int i = 0; i < N; i++)
//     {
//         cin >> a[i];
//     }

//     int cnt = 0;
//     bool isEven;
//     ll target = find_max_even_num(a);
//     while (true)
//     {
//         isEven = false;
//         for (int i = 0; i < N; i++)
//         {
//             // ODD
//             // 奇数があったら掛け算のみ
//             if (a[i] % 2 != 0)
//             {
//                 a[i] *= 3;
//             }
//             // EVEN
//             else
//             {
//                 isEven = true;
//                 if (a[i] == target)
//                 {
//                     a[i] /= 2;
//                 }
//                 else
//                 {
//                     if (a[i] > 1000000000 / 3)
//                     {
//                         a[i] /= 2;
//                     }
//                     else
//                     {
//                         a[i] *= 3;
//                     }
//                 }
//             }
//             printf("%d ", a[i]);
//         }
//         if (isEven == false)
//         {
//             cout << cnt << endl;
//             return (0);
//         }
//         cnt++;
//         target = find_max_even_num(a);
//         printf("\n");
//     }
//     cout << cnt << endl;
//     return (0);
// }