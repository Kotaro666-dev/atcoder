/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/29 23:27:57 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/29 23:38:37 by kotaro666        ###   ########.fr       */
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
    int N;
    cin >> N;

    int sum = 0;
    int a, b;
    for (int i = 0; i < N; i++)
    {
        cin >> a >> b;
        sum += b - a + 1;
    }
    cout << sum << endl;
    return (0);
}