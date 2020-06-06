/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/06 13:00:37 by kkamashi          #+#    #+#             */
/*   Updated: 2020/06/06 13:05:35 by kkamashi         ###   ########.fr       */
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
    string S;
    cin >> S;

    int len = S.size();

    // 010101...
    string zeroone = "";
    // 101010...
    string onezero = "";

    for (int i = 0; i < len; i++)
    {
        if (i % 2 == 0)
        {
            zeroone += '0';
            onezero += '1';
        }
        else
        {
            zeroone += '1';
            onezero += '0';
        }
    }

    int diff1 = 0;
    int diff2 = 0;
    for (int i = 0; i < len; i++)
    {
        if (S[i] != zeroone[i])
        {
            diff1++;
        }

        if (S[i] != onezero[i])
        {
            diff2++;
        }
    }

    int ans = min(diff1, diff2);
    cout << ans << endl;
    return (0);
}