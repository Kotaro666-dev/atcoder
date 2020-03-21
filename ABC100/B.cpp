/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/21 11:05:49 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/21 11:28:50 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;

int calc(int x)
{
    int ret = 0;
    while (x % 100 == 0)
    {
        x /= 100;
        ++ret;
    }
    return ret;
}

int main(void)
{
    int D, N;
    cin >> D >> N;

    int counter = 0, value = 0;
    while (counter < N)
    {
        value++;
        if (calc(value) == D)
            counter++;
    }
    cout << value << endl;
    return (0);
}

// int main(void)
// {
//     int D, N;
//     cin >> D >> N;

//     // vector<int> container(N, 0);
//     int ans;
//     if (D == 0)
//     {
//         ans = N;
//     }
//     else if (D == 1)
//     {
//         ans = N * 100;
//     }
//     else
//     {
//         ans = N * 100 * 100;
//     }
//     cout << ans << endl;
//     return (0);
// }