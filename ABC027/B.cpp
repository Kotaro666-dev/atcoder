/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/30 10:32:55 by kkamashi          #+#    #+#             */
/*   Updated: 2020/05/30 11:04:25 by kkamashi         ###   ########.fr       */
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

    vector<int> a(N);
    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
        sum += a[i];
    }

    if (sum % N != 0)
    {
        cout << -1 << endl;
        return 0;
    }

    int goal = sum / N;
    int ans = 0;
    int left, right;

    for (int i = 0; i < N; i++)
    {
        // left
        left = 0;
        for (int j = 0; j <= i; j++)
        {
            left += a[j];
        }

        // right
        // right = 0;
        // for (int k = N - 1; k >= i; k--)
        // {
        //     right += a[k];
        // }

        if (left != (goal * (i + 1)))
        {
            ans++;
        }
    }

    // int temp;

    // from left
    // for (int i = 0; i < N - 1; i++)
    // {
    //     if (a[i] > goal)
    //     {
    //         temp = a[i];
    //         a[i] = goal;
    //         a[i + 1] += (temp - goal);
    //         ans++;
    //     }
    // }

    // // from right
    // for (int i = N - 1; i > 0; i--)
    // {
    //     if (a[i] > goal)
    //     {
    //         temp = a[i];
    //         a[i] = goal;
    //         a[i - 1] += (temp - goal);
    //         ans++;
    //     }
    // }

    // debug
    // for (int i = 0; i < N; i++)
    // {
    //     cout << a[i] << " ";
    // }
    // printf("\n");
    cout << ans << endl;
    return (0);
}