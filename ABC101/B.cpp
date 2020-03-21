/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/21 10:53:53 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/21 11:04:00 by kotaro666        ###   ########.fr       */
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

    int temp = N;
    int sum = 0;
    while (temp > 0)
    {
        sum += temp % 10;
        temp = temp / 10;
    }
    // printf("%d\n", sum);
    // printf("%d / %d = %d\n", N, sum, (N / sum));
    if (N % sum == 0)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return (0);
}