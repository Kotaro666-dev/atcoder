/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/28 14:14:03 by kkamashi          #+#    #+#             */
/*   Updated: 2020/04/28 14:19:08 by kkamashi         ###   ########.fr       */
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
    vector<int> length(3);
    for (int i = 0; i < 3; i++)
    {
        cin >> length[i];
    }
    sort(length.begin(), length.end());

    int ans;
    if (length[0] == length[1])
    {
        ans = length[2];
    }
    else
    {
        ans = length[0];
    }
    cout << ans << endl;
    return (0);
}