/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/22 22:24:33 by kkamashi          #+#    #+#             */
/*   Updated: 2020/04/22 22:27:57 by kkamashi         ###   ########.fr       */
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
    string N;

    cin >> N;

    string ans;
    bool isSame = true;
    for (int i = 0; i < 3; i++)
    {
        if (N[i] != N[i + 1])
        {
            isSame = false;
            break;
        }
    }

    if (isSame == true)
    {
        ans = "SAME";
    }
    else
    {
        ans = "DIFFERENT";
    }
    cout << ans << endl;
    return (0);
}