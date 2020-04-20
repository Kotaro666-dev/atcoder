/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/20 16:28:13 by kkamashi          #+#    #+#             */
/*   Updated: 2020/04/20 17:09:23 by kkamashi         ###   ########.fr       */
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
    int T;
    cin >> T;

    bool isMax;
    if (T == 1)
    {
        isMax = true;
    }
    else
    {
        isMax = false;
    }

    int x = 0;
    int y = 0;
    int ans;
    int sign = 0;
    for (int i = 0; i < S.size(); i++)
    {
        if (S[i] == 'L')
        {
            x--;
        }
        else if (S[i] == 'R')
        {
            x++;
        }
        else if (S[i] == 'U')
        {
            y++;
        }
        else if (S[i] == 'D')
        {
            y--;
        }
        else
        {
            sign++;
        }
        // printf("%d: x = %d, y = %d\n", i + 1, x, y);
    }

    ans = abs(x) + abs(y);

    if (isMax == true)
    {
        ans += sign;
    }
    else
    {
        if (ans < sign)
        {
            if ((sign - ans) % 2 == 0)
            {
                ans = 0;
            }
            else
            {
                ans = 1;
            }
        }
        else
        {
            ans -= sign;
        }
    }
    cout << ans << endl;
    return (0);
}