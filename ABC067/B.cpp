/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/31 11:03:33 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/31 11:10:15 by kotaro666        ###   ########.fr       */
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

    vector<int> l(N);
    for (int i = 0; i < N; i++)
    {
        cin >> l[i];
    }
    sort(l.begin(), l.end(), greater<int>());

    int ans = 0;
    for (int i = 0; i < K; i++)
    {
        ans += l[i];
    }
    cout << ans << endl;
    return (0);
}