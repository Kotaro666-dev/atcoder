/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/22 20:28:06 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/22 21:08:04 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;

int main(void)
{
    int N, M;
    cin >> N >> M;

    int ans = 0;
    while (N > 0)
    {
        ans += N - 1;
        N--;
    }
    while (M > 0)
    {
        ans += M - 1;
        M--;
    }
    cout << ans << endl;

    return (0);
}