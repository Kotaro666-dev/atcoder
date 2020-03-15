/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 15:09:38 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/15 15:27:12 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;

int main(void)
{
    int A, B, K;
    cin >> A >> B >> K;

    vector<int> prime(100);
    int i, j;
    for (i = 1, j = 0; i < min(A, B) + 1; i++)
    {
        if (A % i == 0 && B % i == 0)
        {
            // printf("prime.at(%d) = %d\n", j, i);
            prime.at(j) = i;
            j++;
        }
    }

    cout << prime.at(j - K) << endl;
    return (0);
}