/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/20 10:45:52 by kkamashi          #+#    #+#             */
/*   Updated: 2020/05/20 10:49:57 by kkamashi         ###   ########.fr       */
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
    int N;
    cin >> N;

    int T, min;
    for (int i = 0; i < N; i++)
    {
        cin >> T;
        if (i == 0)
        {
            min = T;
        }
        else
        {
            if (min > T)
            {
                min = T;
            }
        }
    }
    cout << min << endl;
    return (0);
}