/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/04 20:19:57 by kotaro666         #+#    #+#             */
/*   Updated: 2020/04/04 22:08:48 by kotaro666        ###   ########.fr       */
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
    ll N, K;
    cin >> N >> K;

    ll minimum = N;

    if (N % K == 0)
    {
        minimum = 0;
        cout << minimum << endl;
        return 0;
    }
    else
    {
        N = N % K;
    }
    // if (N > INF)
    // {
    //     N = N / INF;
    //     // K = K * INF;
    //     printf("N = %d\n", N);
    //     printf("M / K = %d\n", N % K);
    //     // printf("K = %d\n", K);
    // }
    ll counter = 0;

    while (counter <= 10000)
    {
        N = abs(N - K);
        minimum = min(minimum, N);
        if (minimum == 1)
        {
            break;
        }
        counter++;
    }
    cout << minimum << endl;
    return (0);
}