/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/29 11:52:44 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/29 12:02:49 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;
const int INF = 1000000000;
const ll LINF = 1000000000000000000; //1e18
const double EPS = 1e-10;            //

int main(void)
{
    int N, K;
    cin >> N >> K;

    int ans = 1;
    // Greedy Algortigh
    for (int i = 0; i < N; i++)
    {
        ans = min(ans + K, ans * 2);
    }

    // for (int i = 0; i < N; i++)
    // {
    //     if (ans < K)
    //     {
    //         ans *= 2;
    //     }
    //     else
    //     {
    //         ans += K;
    //     }
    // }
    cout << ans << endl;

    return (0);
}