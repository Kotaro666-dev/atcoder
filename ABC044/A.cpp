/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/11 20:13:41 by kkamashi          #+#    #+#             */
/*   Updated: 2020/04/11 20:19:37 by kkamashi         ###   ########.fr       */
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
    int N, K, X, Y;

    cin >> N >> K >> X >> Y;
    int sum = 0;

    if (N > K)
    {
        sum = K * X;
        sum += (N - K) * Y;
    }
    else
    {
        sum = N * X;
    }
    cout << sum << endl;
    return (0);
}