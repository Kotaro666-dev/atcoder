/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/16 08:27:40 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/16 09:03:16 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;

int main(void)
{
    cout << fixed << setprecision(10);
    int N;
    cin >> N;

    vector<double> money(N);
    vector<string> form(N);
    for (int i = 0; i < N; i++)
    {
        cin >> money.at(i) >> form.at(i);
    }

    double sum = 0;
    double btc = 380000.0;
    for (int i = 0; i < N; i++)
    {
        if (form.at(i) == "JPY")
        {
            sum += money.at(i);
        }
        else
        {
            sum += money.at(i) * btc;
        }
    }

    cout << sum << endl;
    return (0);
}