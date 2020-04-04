/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/04 10:53:04 by kotaro666         #+#    #+#             */
/*   Updated: 2020/04/04 10:56:28 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;
const int INF = 1000000000;
const ll LINF = 1000000000000000000; //1e18
const double EPS = 1e-10;            //

int main(void)
{
    int A, B;
    cin >> A >> B;

    string ans;
    if (A == B)
    {
        ans = "Draw";
    }
    else if (A == 1)
    {
        ans = "Alice";
    }
    else if (B == 1)
    {
        ans = "Bob";
    }
    else if (A < B)
    {
        ans = "Bob";
    }
    else if (A > B)
    {
        ans = "Alice";
    }
    cout << ans << endl;
    return (0);
}