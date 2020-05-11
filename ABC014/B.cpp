/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/11 10:50:34 by kkamashi          #+#    #+#             */
/*   Updated: 2020/05/11 12:24:45 by kkamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
#include <bitset>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;
const int INF = 1000000000;
const ll LINF = 1000000000000000000; //1e18
const double EPS = 1e-10;

int main(void)
{
    int n, X;
    cin >> n >> X;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    unsigned long bit = bitset<2>(X);
    string bin = to_string(bit);

    int ans = 0;
    for (int i = 0; i < bin.size(); i++)
    {
        if (bin[i] == '1')
        {
            ans += a[i];
        }
    }
    cout << ans << endl;
    return (0);
}