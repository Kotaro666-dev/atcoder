/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   D.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/12 21:24:14 by kkamashi          #+#    #+#             */
/*   Updated: 2020/04/12 22:33:48 by kkamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

    int ans = 0;
    int i, j, k;
    for (i = 0; i < N - 3; i++)
    {
        for (j = i + 1; j < N - 1; j++)
        {
            if (S[i] != S[j])
            {
                if (j - i == 1)
                {
                    k = j + 2;
                    for (; k < N; k++)
                    {
                        if (j - i == k - j)
                        {
                            // printf("%d %d %d\n", i, j, k);
                            continue;
                        }
                        if (S[i] != S[k] && S[j] != S[k])
                        {
                            // printf("%d %d %d\n", i, j, k);
                            ans++;
                        }
                    }
                }
                else
                {
                    k = j + 1;
                    for (; k < N; k++)
                    {
                        if (j - i == k - j)
                        {
                            // printf("%d %d %d\n", i, j, k);
                            continue;
                        }
                        if (S[i] != S[k] && S[j] != S[k])
                        {
                            // printf("%d %d %d\n", i, j, k);
                            ans++;
                        }
                    }
                }
                // for (; k < N; k++)
                // {
                //     if (j - i == k - j)
                //     {
                //         // printf("%d %d %d\n", i, j, k);
                //         continue;
                //     }
                //     if (S[i] != S[k] && S[j] != S[k])
                //     {
                //         // printf("%d %d %d\n", i, j, k);
                //         ans++;
                //     }
                // }
            }
        }
    }
    cout << ans << endl;
    return (0);
}

/*
int main(void)
{
    int N;
    cin >> N;
    string S;
    cin >> S;

    int ans = 0;
    int i, j, k;

    for (int i = 0; i < N - 3; i++)
    {
        for (int k = N - 1; k >= 3; k--)
        {
            if (j != (k + i) / 2)
            {
                for (int j = i + 1; j < k; j++)
                {
                    if (j - i == k - j)
                    {
                        // printf("%d %d %d\n", i, j, k);
                        continue;
                    }
                    if (S[i] != S[j] && S[i] != S[k] && S[j] != S[k])
                    {
                        // printf("%d %d %d\n", i, j, k);
                        ans++;
                    }
                }
            }
        }
    }
    cout << ans << endl;
    return (0);
}
*/