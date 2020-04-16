/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/09 18:01:16 by kkamashi          #+#    #+#             */
/*   Updated: 2020/04/10 15:44:39 by kkamashi         ###   ########.fr       */
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
    vector<int> color(3);
    for (int i = 0; i < 3; i++)
    {
        cin >> color[i];
    }
    sort(color.begin(), color.end());
    int cnt = 0;
    for (int i = 0; i < 3 - 1; i++)
    {
        if (color[i] != color[i + 1])
        {
            cnt++;
        }
    }
    cout << cnt + 1 << endl;
    return (0);
}