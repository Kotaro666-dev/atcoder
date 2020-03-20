/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/20 16:39:59 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/20 16:48:29 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;
#define MAX 1000000000

int main(void)
{
    int N;
    cin >> N;

    int ans;
    if (N % 2 == 0)
    {
        ans = N;
    }
    else
    {
        ans = N * 2;
    }
    // for (int i = max(2, N); i < MAX * 2; i++)
    // {
    //     if (i % 2 == 0 && i % N == 0)
    //     {
    //         ans = i;
    //         break;
    //     }
    // }
    cout << ans << endl;
    return (0);
}