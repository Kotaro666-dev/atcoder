/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/07 09:23:30 by kkamashi          #+#    #+#             */
/*   Updated: 2020/05/07 09:37:41 by kkamashi         ###   ########.fr       */
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
    vector<int> num(3);
    for (int i = 0; i < 3; i++)
    {
        cin >> num[i];
    }
    vector<int> temp(3);
    temp = num;

    sort(num.begin(), num.end(), greater<int>());
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (temp[i] == num[j])
            {
                printf("%d\n", j + 1);
            }
        }
    }
    return (0);
}