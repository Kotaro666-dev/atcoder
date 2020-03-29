/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/29 23:15:56 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/29 23:26:14 by kotaro666        ###   ########.fr       */
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

    vector<int> x(N);
    for (int i = 0; i < N; i++)
    {
        cin >> x[i];
    }

    int sum = 0;
    int distance;
    for (int i = 0; i < N; i++)
    {
        distance = min(abs(x[i] - 0), abs(K - x[i]));
        sum += distance * 2;
    }
    cout << sum << endl;
    return (0);
}