/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/28 10:35:13 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/28 10:47:10 by kotaro666        ###   ########.fr       */
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

    int sqrt_num;

    int max_sqrt = N;
    for (int i = N; i >= 1; i--)
    {
        sqrt_num = sqrt(i);
        if (sqrt_num * sqrt_num == i)
        {
            max_sqrt = i;
            break;
            // max_sqrt = max(max_sqrt, i);
        }
    }

    // int max_sqrt = 1;
    // for (int i = 1; i <= N; i++)
    // {
    //     sqrt_num = sqrt(i);
    //     if (sqrt_num * sqrt_num == i)
    //     {
    //         // printf("i = %d\n", i);
    //         max_sqrt = max(max_sqrt, i);
    //     }
    // }
    cout << max_sqrt << endl;
    return (0);
}