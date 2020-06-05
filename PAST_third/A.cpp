/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/05 11:11:27 by kkamashi          #+#    #+#             */
/*   Updated: 2020/06/05 11:16:19 by kkamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;
const int INF = 1000000000;
const ll LINF = 1000000000000000000; //1e18
const double EPS = 1e-10;

string lower(string x)
{
    for (int i = 0; i < x.size(); i++)
    {
        if (x[i] >= 'A' && x[i] <= 'Z')
        {
            x[i] -= 'A' - 'a';
        }
    }
    return x;
}

int main(void)
{
    string s, t;
    cin >> s >> t;

    string ans;
    if (s == t)
    {
        ans = "same";
    }
    else if (lower(s) == lower(t))
    {
        ans = "case-insensitive";
    }
    else
    {
        ans = "different";
    }
    cout << ans << endl;
    return (0);
}