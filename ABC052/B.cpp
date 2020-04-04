/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/04 20:13:41 by kotaro666         #+#    #+#             */
/*   Updated: 2020/04/04 20:17:37 by kotaro666        ###   ########.fr       */
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
    string S;
    cin >> S;

    int counter = 0;
    int maximum = counter;
    for (int i = 0; i < N; i++)
    {
        if (S[i] == 'I')
        {
            counter++;
        }
        else
        {
            counter--;
        }
        maximum = max(maximum, counter);
    }
    cout << maximum << endl;
    return (0);
}