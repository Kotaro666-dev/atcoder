/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/30 14:45:46 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/30 14:51:06 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;
const int INF = 1000000000;
const ll LINF = 1000000000000000000; //1e18
const double EPS = 1e-10;            //

/*
1 0 = 2
2 0 = 3
3 0 = 4
1 1 = 4 = 2 * 2
1 2 = 6 2 * 3
2 2 = 9 3 * 3
3 3 = 
 */

int main(void)
{
    int n, m;
    cin >> n >> m;

    int ans = (n - 1) * (m - 1);
    cout << ans << endl;
    return (0);
}