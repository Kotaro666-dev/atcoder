/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/03 09:45:58 by kkamashi          #+#    #+#             */
/*   Updated: 2020/06/03 09:49:14 by kkamashi         ###   ########.fr       */
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
    string s;
    cin >> s;

    string ans = "";
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '0')
        {
            ans += '0';
        }
        else if (s[i] == '1')
        {
            ans += '1';
        }
        else if (s[i] == 'B' && ans.size() != 0)
        {
            ans.pop_back();
        }
    }

    cout << ans << endl;
    return (0);
}