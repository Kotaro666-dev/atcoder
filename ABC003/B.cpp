/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/22 19:53:37 by kkamashi          #+#    #+#             */
/*   Updated: 2020/05/22 20:23:05 by kkamashi         ###   ########.fr       */
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
    string S, T;
    cin >> S >> T;

    bool possible = true;
    for (int i = 0; i < S.size(); i++)
    {

        if (S[i] == '@' && T[i] != '@')
        {
            if (!(T[i] == 'a' || T[i] == 't' || T[i] == 'c' || T[i] == 'o' || T[i] == 'd' || T[i] == 'e' || T[i] == 'r'))
            {
                possible = false;
                break;
            }
        }
        else if (T[i] == '@' && S[i] != '@')
        {
            if (!(S[i] == 'a' || S[i] == 't' || S[i] == 'c' || S[i] == 'o' || S[i] == 'd' || S[i] == 'e' || S[i] == 'r'))
            {
                possible = false;
                break;
            }
        }
        else if (!(S[i] == '@' && T[i] == '@'))
        {
            if (S[i] != T[i])
            {
                possible = false;
                break;
            }
        }
    }
    string ans;
    if (possible == true)
    {
        ans = "You can win";
    }
    else
    {
        ans = "You will lose";
    }
    cout << ans << endl;
    return (0);
}