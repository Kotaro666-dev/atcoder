/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/12 17:00:27 by kkamashi          #+#    #+#             */
/*   Updated: 2020/06/13 09:47:41 by kkamashi         ###   ########.fr       */
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
    int N, M;
    cin >> N >> M;

    vector<bool> ok1(N, false);
    vector<bool> ok2(N, false);

    int a, b;
    for (int i = 0; i < M; i++)
    {
        cin >> a >> b;
        if (a == 1)
        {
            ok1[b - 1] = true;
        }
        if (b == N)
        {
            ok2[a - 1] = true;
        }
    }

    for (int i = 0; i < N; i++)
    {
        if (ok1[i] && ok2[i])
        {
            printf("POSSIBLE\n");
            return (0);
        }
    }
    printf("IMPOSSIBLE\n");
    return (0);
}

// int main(void)
// {
//     int N, M;
//     cin >> N >> M;

//     vector<int> a(N);
//     vector<int> b(N);
//     vector<int> N_a;
//     vector<int> N_b;

//     string ans;
//     for (int i = 0; i < M; i++)
//     {
//         cin >> a[i] >> b[i];
//         if (a[i] == N)
//         {
//             N_a.push_back(b[i]);
//         }
//         if (b[i] == N)
//         {
//             N_b.push_back(a[i]);
//         }
//     }

//     if (N_a.empty() && N_b.empty())
//     {
//         ans = "IMPOSSIBLE";
//         cout << ans << endl;
//         return (0);
//     }

//     bool found = false;

//     // N_a
//     for (int i = 0; i < N_a.size(); i++)
//     {
//         for (int j = 0; j < M; j++)
//         {
//             if (N_a[i] == a[j] && b[j] == 1)
//             {
//                 found = true;
//                 break;
//             }
//             if (N_a[i] == b[j] && a[j] == 1)
//             {
//                 found = true;
//                 break;
//             }
//         }
//         if (found == true)
//         {
//             break;
//         }
//     }

//     // N_b
//     for (int i = 0; i < N_b.size(); i++)
//     {
//         for (int j = 0; j < M; j++)
//         {
//             if (N_b[i] == a[j] && b[j] == 1)
//             {
//                 found = true;
//                 break;
//             }
//             if (N_b[i] == b[j] && a[j] == 1)
//             {
//                 found = true;
//                 break;
//             }
//         }
//         if (found == true)
//         {
//             break;
//         }
//     }

//     if (found == true)
//     {
//         ans = "POSSIBLE";
//     }
//     else
//     {
//         ans = "IMPOSSIBLE";
//     }

//     cout << ans << "\n";
//     return (0);
// }