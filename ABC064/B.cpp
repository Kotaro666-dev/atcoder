/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/01 10:26:46 by kotaro666         #+#    #+#             */
/*   Updated: 2020/04/01 10:33:45 by kotaro666        ###   ########.fr       */
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

    vector<int> a(N);
    int minimum = 1000;
    int maximum = 0;
    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
        minimum = min(minimum, a[i]);
        maximum = max(maximum, a[i]);
    }
    cout << maximum - minimum << endl;

    return (0);
}