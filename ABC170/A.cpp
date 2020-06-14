/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/14 14:57:17 by kkamashi          #+#    #+#             */
/*   Updated: 2020/06/14 21:01:05 by kkamashi         ###   ########.fr       */
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
    vector<int> num(5);
    for (int i = 0; i < 5; i++)
    {
        cin >> num[i];
        if (num[i] == 0)
        {
            printf("%d\n", i + 1);
            return (0);
        }
    }

    return (0);
}