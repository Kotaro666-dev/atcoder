/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/17 18:16:41 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/17 18:53:44 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;

/*
After reading the editorial
 */

int main(void)
{
    int N;
    cin >> N;

    int x = 111;
    for (;;)
    {
        if (N <= x)
        {
            break;
        }
        x += 111;
    }
    cout << x << endl;
    return (0);
}

/* 
int main(void)
{
    string N;
    cin >> N;

    string ans;
    if (N[0] == N[1] && N[1] == N[2])
    {
        ans = N;
    }
    else
    {
        if (N[1] <= N[0])
        {
            N[1] = N[0];
            N[2] = N[0];
            ans = N;
        }
        else
        {
            N[0] += 1;
            N[1] = N[0];
            N[2] = N[0];
            ans = N;
        }
    }

    cout << ans << endl;

    return (0);
}
*/