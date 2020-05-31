/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/31 19:35:01 by kkamashi          #+#    #+#             */
/*   Updated: 2020/05/31 19:37:56 by kkamashi         ###   ########.fr       */
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
    int counter = 0;

    string S;
    bool found;
    for (int i = 0; i < 12; i++)
    {
        cin >> S;
        found = false;
        for (int j = 0; j < S.size(); j++)
        {
            if (S[j] == 'r')
            {
                found = true;
            }
        }
        if (found == true)
        {
            counter++;
        }
    }

    cout << counter << endl;
    return (0);
}