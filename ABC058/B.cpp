/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/03 11:20:35 by kotaro666         #+#    #+#             */
/*   Updated: 2020/04/03 11:28:08 by kotaro666        ###   ########.fr       */
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
    string odd, even;
    cin >> odd >> even;

    int diff = odd.size() - even.size();

    for (int i = 0; i < even.size(); i++)
    {
        cout << odd[i] << even[i];
    }

    if (diff != 0)
    {
        cout << odd[odd.size() - 1] << endl;
    }
    else
    {
        cout << endl;
    }

    return (0);
}