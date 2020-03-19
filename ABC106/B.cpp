/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/19 15:51:42 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/19 16:11:29 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;

int main(void)
{
    int N;
    cin >> N;

    int ans = 0;
    int counter;

    for (int i = 9; i < N + 1; i++)
    {
        counter = 0;
        for (int j = 1; j < N + 1; j++)
        {
            if (i % j == 0)
                counter++;
        }
        if (counter == 8 && i % 2 == 1)
        {
            // printf("%d\n", i);
            ans++;
        }
    }
    cout << ans << endl;
    return (0);
}