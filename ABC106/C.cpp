/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/08 13:01:56 by kkamashi          #+#    #+#             */
/*   Updated: 2020/06/08 13:17:06 by kkamashi         ###   ########.fr       */
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
    ll K;
    cin >> K;

    char ans;
    for (int i = 0; i < K; i++)
    {
        if (S[i] == '1' && K == i + 1)
        {
            ans = '1';
        }
        else
        {
            if (S[i] != '1')
            {
                ans = S[i];
                break;
            }
        }
    }
    cout << ans << endl;
    return (0);
}