/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/27 18:29:13 by kkamashi          #+#    #+#             */
/*   Updated: 2020/06/27 22:35:29 by kkamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;
const int INF = 1000000000;
const ll LINF = 1000000000000000000;//1e18
const double EPS = 1e-10;

int main(void)
{
    ll N, M, K;
    cin >> N >> M >> K;

    vector<ll> A(N);
    vector<ll> B(M);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < M; i++)
    {
        cin >> B[i];
    }

    // Ruiseki
    vector<int> Arui(N + 1, 0);
    for (int i = 0; i < N; i++)
    {
        Arui[i + 1] = Arui[i] + A[i];
    }
    vector<int> Brui(M + 1, 0);
    for (int i = 0; i < M; i++)
    {
        Brui[i + 1] = Brui[i] + B[i];
    }

    // debug
    ll A_max = N, B_max = M;
    for (int i = 1; i < N; i++)
    {
        if (Arui[i] > K)
        {
            A_max = i - 2;
        }
        // printf("%ld ", Arui[i]);
    }
    // printf("\n");
    for (int i = 1; i < M; i++)
    {
        if (Brui[i] > K)
        {
            B_max = i - 2;
        }
        // printf("%ld ", Brui[i]);
    }
    // printf("A = %ld, B = %ld\n", A_max, B_max);
    int i = A_max;
    int j = B_max;
    ll ans;
    while (true)
    {
        if (Arui[i] + Brui[j] <= K)
        {
            ans = i + j;
        }
        else
        {
            if (Arui[i - 1])
        }
    }
    // printf("\n");

    return (0);
}

// int main(void)
// {
//     ll N, M, K;
//     cin >> N >> M >> K;

//     queue<ll> A;
//     queue<ll> B;
//     ll num;
//     for (int i = 0; i < N; i++)
//     {
//         cin >> num;
//         A.push(num);
//     }
//     for (int i = 0; i < M; i++)
//     {
//         cin >> num;
//         B.push(num);
//     }

//     // for (int i = 0; i < N; i++)
//     // {
//     //     printf("%lld\n", A.front());
//     //     A.pop();
//     // }

//     // for (int i = 0; i < M; i++)
//     // {
//     //     printf("%lld\n", B.front());
//     //     B.pop();
//     // }


//     ll ans = 0;
//     // ll time = 0;
//     while (true)
//     {
//         if (A.empty() == false && B.empty() == false)
//         {
//             if (A.front() <= B.front())
//             {
//                 K -= A.front();
//                 A.pop();
//             }
//             else
//             {
//                 K -= B.front();
//                 B.pop();
//             }
//         }
//         else if (A.empty() == true && B.empty() == false)
//         {
//             K -= B.front();
//             B.pop();
//         }
//         else if (A.empty() == false && B.empty() == true)
//         {
//             K -= A.front();
//             A.pop();
//         }
//         // printf("%ld\n", K);
//         if (K <= 0)
//         {
//             break;
//         }
//         ans++;
//     }
//     if (K == 0)
//     {
//         ans++;
//     }
//     cout << ans << endl;
//     return (0);
// }