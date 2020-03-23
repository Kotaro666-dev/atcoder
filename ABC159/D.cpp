/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   D.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/22 21:58:16 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/23 11:21:44 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;

const int N = 200005;
int a[N];
ll b[N];
ll t[N];

int main(void)
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; ++i)
    {
        scanf("%d", &a[i]);
        ++t[a[i]];
    }

    for (int i = 1; i <= n; ++i)
    {
        b[a[i]] = t[a[i]] * (t[a[i]] - 1) / 2;
    }

    ll sum = 0;
    for (int i = 1; i <= n; ++i)
        sum += b[i];

    for (int i = 1; i <= n; ++i)
    {
        printf("%lld\n", sum - t[a[i]] + 1);
    }
    return (0);
}

// int main(void)
// {
//     int n;
//     cin >> n;

//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//         // counting the amount of the same integers using array
//         t[a[i]]++;
//     }

//     for (int i = 0; i < n; i++)
//     {
//         b[a[i]] = t[a[i]] * (t[a[i]] - 1) / 2;
//     }

//     ll sum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         sum += b[i];
//     }

//     for (int i = 0; i < n; i++)
//     {
//         cout << sum - t[a[i]] + 1 << endl;
//     }
//     return (0);
// }

// int main(void)
// {
//     int N;
//     cin >> N;

//     vector<int> A(N);
//     for (int i = 0; i < N; i++)
//     {
//         cin >> A[i];
//     }

//     vector<int> temp(N);
//     temp = A;

//     int k = 0;
//     for (int i = 0; i < temp.size() - 1; i++)
//     {
//         for (int j = i + 1; j < temp.size(); j++)
//         {
//             if (i == k)
//             {
//                 k++;
//                 break;
//             }

//             k++;
//         }
//     }

//     return (0);
// }