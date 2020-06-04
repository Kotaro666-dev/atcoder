/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_order.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/04 21:55:42 by kkamashi          #+#    #+#             */
/*   Updated: 2020/06/04 22:34:50 by kkamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;
const int INF = 1000000000;
const ll LINF = 1000000000000000000; //1e18
const double EPS = 1e-10;

// USE next_permutation
// REFERENCE: https://drken1215.hatenablog.com/entry/2020/01/12/122100
int main(void)
{
    int N;
    cin >> N;

    vector<int> p(N);
    vector<int> q(N);
    for (int i = 0; i < N; i++)
    {
        cin >> p[i];
    }
    for (int i = 0; i < N; i++)
    {
        cin >> q[i];
    }

    map<vector<int>, int> ord;
    int iter = 0;

    vector<int> v(N);
    for (int i = 0; i < N; i++)
    {
        v[i] = i + 1;
    }

    // next_permutaion
    do
    {
        ord[v] = iter;
        iter++;
    } while (next_permutation(v.begin(), v.end()));

    int ans = abs(ord[p] - ord[q]);
    cout << ans << endl;
}

// int factorial(int x)
// {
//     int result = 1;
//     while (x > 0)
//     {
//         result *= x;
//         x--;
//     }
//     return result;
// }

// int main(void)
// {
//     int N;
//     cin >> N;

//     vector<int> p(N);
//     vector<int> q(N);
//     for (int i = 0; i < N; i++)
//     {
//         cin >> p[i];
//     }
//     for (int i = 0; i < N; i++)
//     {
//         cin >> q[i];
//     }

//     int order_p = 0;
//     int length = N - 1;
//     for (int i = 0; i < N - 1; i++)
//     {
//         order_p += factorial(length) * (p[i] - 1);
//         length--;
//     }
//     if (p[0] != 1)
//     {
//         order_p += p[N - 1] - 1;
//     }

//     int order_q = 0;
//     length = N - 1;
//     for (int i = 0; i < N - 1; i++)
//     {
//         order_q += factorial(length) * (q[i] - 1);
//         length--;
//     }
//     if (q[0] != 1)
//     {
//         order_q += q[N - 1] - 1;
//     }

//     // printf("%d %d\n", order_p, order_q);
//     int ans = abs(order_p - order_q);
//     cout << ans << endl;
//     return (0);
// }