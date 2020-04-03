/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/03 11:06:19 by kotaro666         #+#    #+#             */
/*   Updated: 2020/04/03 11:10:31 by kotaro666        ###   ########.fr       */
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
    string a, b, c;
    cin >> a >> b >> c;

    a[0] += 'A' - 'a';
    b[0] += 'A' - 'a';
    c[0] += 'A' - 'a';
    cout << a[0] << b[0] << c[0] << endl;

    return (0);
}