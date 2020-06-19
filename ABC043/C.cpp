/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 11:32:05 by kkamashi          #+#    #+#             */
/*   Updated: 2020/06/19 11:41:08 by kkamashi         ###   ########.fr       */
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
    ll sum = 0;
    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
        sum += a[i];
    }

    ll average = sum / N;
    ll x1 = average - 1;
    ll x2 = average;
    ll x3 = average + 1;
    ll ans1 = 0; // average - 1
    ll ans2 = 0; // average
    ll ans3 = 0; // average + 1
    for (int i = 0; i < N; i++)
    {
        ans1 += pow((a[i] - x1), 2);
        ans2 += pow((a[i] - x2), 2);
        ans3 += pow((a[i] - x3), 2);
    }

    ll mn = min({ans1, ans2, ans3});
    // ll ans;
    // if (mn == ans1)
    // {
    //     ans = x1;
    // }
    // else if (mn == ans2)
    // {
    //     ans = x2;
    // }
    // else
    // {
    //     ans = x3;
    // }
    cout << mn << endl;
    return (0);
}