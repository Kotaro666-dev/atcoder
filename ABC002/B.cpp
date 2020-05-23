/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/23 10:44:59 by kkamashi          #+#    #+#             */
/*   Updated: 2020/05/23 10:49:03 by kkamashi         ###   ########.fr       */
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
        if (S[i] != 'a' && S[i] != 'i' && S[i] != 'u' && S[i] != 'e' && S[i] != 'o')
        {
            cout << S[i];
        }
    }
    cout << endl;
    return (0);
}