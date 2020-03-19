/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/19 13:43:14 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/19 13:52:22 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;

// 3... 2/1, 2/3
// 6... 2/1, 2/3, 2/5, 4/1, 4/3, 4/5, 6/1, 6/3, 6/5
int main(void)
{
    int K;
    cin >> K;

    int odd = 0, even = 0;
    for (int i = 1; i <= K; i++)
    {
        if (i % 2 == 0)
            even++;
        else
            odd++;
    }
    cout << even * odd << endl;
    return (0);
}