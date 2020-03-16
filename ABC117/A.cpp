/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/16 13:46:45 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/16 13:49:57 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;

int main(void)
{
    std::cout << std::fixed << std::setprecision(10);

    int T, X;
    cin >> T >> X;
    double ans = 0.0;

    ans = (double)T / (double)X;
    cout << ans << endl;
    return (0);
}