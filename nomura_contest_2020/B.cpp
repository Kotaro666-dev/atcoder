/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/30 20:26:20 by kkamashi          #+#    #+#             */
/*   Updated: 2020/05/30 21:35:30 by kkamashi         ###   ########.fr       */
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
    string T;
    cin >> T;

    if (T[0] == '?')
    {
        if (T[1] == 'D' || T[1] == '?')
        {
            T[0] = 'P';
        }
        else
        {
            T[0] = 'D';
        }
    }

    for (int i = 1; i < T.size() - 1; i++)
    {
        if (T[i] == '?')
        {
            if (T[i - 1] == 'P')
            {
                T[i] = 'D';
            }
            else if (T[i - 1] == 'D')
            {
                if (T[i + 1] == 'D')
                {
                    T[i] = 'P';
                }
                else if (T[i + 1] == 'P')
                {
                    T[i] = 'D';
                }
                else if (T[i + 1] == '?')
                {
                    T[i] = 'P';
                }
            }
        }
    }

    if (T[T.size() - 1] == '?')
    {
        T[T.size() - 1] = 'D';
    }

    for (int i = 0; i < T.size(); i++)
    {
        cout << T[i];
    }
    printf("\n");
    return (0);
}