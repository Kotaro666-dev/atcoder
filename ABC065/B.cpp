/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/31 12:06:50 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/31 12:42:48 by kotaro666        ###   ########.fr       */
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
    int N;
    cin >> N;

    vector<int> a(N);
    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
    }

    vector<bool> checker(N, true);
    checker[0] = false;
    int now = a[0] - 1;
    int cnt = 1;
    int ans = -1;
    while (cnt < N)
    {
        if (now == 1)
        {
            ans = cnt;
            break;
        }
        else if (checker[now] == true)
        {
            checker[now] = false;
            now = a[now] - 1;
            cnt++;
        }
        else
        {
            break;
        }
    }
    cout << ans << endl;
    return (0);
}