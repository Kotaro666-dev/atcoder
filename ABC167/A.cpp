/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 20:48:30 by kkamashi          #+#    #+#             */
/*   Updated: 2020/05/10 21:01:54 by kkamashi         ###   ########.fr       */
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

    for (int i = 0; i < S.size(); i++)
    {
        if (S[i] != T[i])
        {
            cout << "No" << endl;
            return (0);
        }
    }
    cout << "Yes" << endl;
    return (0);
}