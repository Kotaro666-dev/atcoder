/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/20 15:21:53 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/20 15:27:43 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;

int main(void)
{
    int N, K;
    cin >> N >> K;

    int ans;
    if (N % K == 0)
    {
        ans = 0;
    }
    else
    {
        ans = 1;
    }
    cout << ans << endl;
    return (0);
}