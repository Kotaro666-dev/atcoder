/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/06 00:50:09 by kotaro666         #+#    #+#             */
/*   Updated: 2020/04/06 00:51:59 by kotaro666        ###   ########.fr       */
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
    char c;
    cin >> c;

    string ans;
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
    {
        ans = "vowel";
    }
    else
    {
        ans = "consonant";
    }
    cout << ans << endl;
    return (0);
}