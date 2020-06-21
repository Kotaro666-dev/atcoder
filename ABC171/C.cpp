/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 19:32:40 by kkamashi          #+#    #+#             */
/*   Updated: 2020/06/21 21:43:17 by kkamashi         ###   ########.fr       */
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
    ll N; // max <= 1e16 + 1
    cin >> N;

    ll N_temp = N;
    string ans = "";

    if (N <= 26)
    {
        ans += 'a' + (N - 1);
        cout << ans << endl;
        return (0);
    }

    vector<ll> remain;
    int num;
    while (N > 26)
    {
        num = N / 26;
        remain.push_back(num);
        N /= 26;
    }
    reverse(remain.begin(), remain.end());
    //debug
    ll last = remain[remain.size() - 1];
    for (int i = 0; i < remain.size(); i++)
    {
        // remain[i]--;
        cout << remain[i] << " ";
    }
    printf("\n");
    ans += remain[0] - 1 + 'a';
    ll before = remain[0];
    ll calc;
    for (int i = 1; i < remain.size(); i++)
    {
        calc = remain[i] - (before * 26);
        if (calc == 0)
        {
            calc = 26;
        }
        ans += calc - 1 + 'a';
        before = remain[i];
    }
    ll final = N_temp - (last * 26);
    // printf("final = %lld\n", final);
    if (final != 0)
    {
        ans += final - 1 + 'a';
    }
    else
    {
        final = 26;
        ans += final - 1 + 'a';
    }

    cout << ans << endl;
    return (0);
}