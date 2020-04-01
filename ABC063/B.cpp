/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/01 10:35:27 by kotaro666         #+#    #+#             */
/*   Updated: 2020/04/01 10:42:41 by kotaro666        ###   ########.fr       */
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
    string S;
    cin >> S;

    sort(S.begin(), S.end());

    bool isVaried = true;
    for (int i = 0, j = i + 1; i < S.size() - 1; i++, j++)
    {
        // printf("%c %c\n", S[i], S[j]);
        if (S[i] == S[j])
        {
            isVaried = false;
            break;
        }
    }

    if (isVaried == true)
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }

    return (0);
}