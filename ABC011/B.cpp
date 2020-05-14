/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/14 09:32:42 by kkamashi          #+#    #+#             */
/*   Updated: 2020/05/14 09:41:13 by kkamashi         ###   ########.fr       */
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

    for (int i = 0; i < S.size(); i++)
    {
        if (i == 0 && (S[i] >= 'a' && S[i] <= 'z'))
        {
            S[i] += 'A' - 'a';
        }
        else if (i > 0)
        {
            if (S[i] >= 'A' && S[i] <= 'Z')
            {
                S[i] -= 'A' - 'a';
            }
        }
    }

    cout << S << endl;
    return (0);
}