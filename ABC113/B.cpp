/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/17 11:24:19 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/17 11:37:14 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;

int main(void)
{
    std::cout << std::fixed << std::setprecision(10);
    int N, T, A;
    cin >> N >> T >> A;

    vector<int> H(N, 0);
    for (int i = 0; i < N; i++)
    {
        cin >> H[i];
    }

    /*
    気温を 1000 倍して計算すると,
    浮動小数点型を用いなくても答えを求めることができます。
     */

    int location = 1;
    double degree = 0.006;
    double minimum = abs(A - (T - (H[0] * degree)));
    double temp;
    // cout << mnimum << endl;

    for (int i = 1; i < N; i++)
    {
        temp = abs(A - (T - (H[i] * degree)));

        if (minimum > temp)
        {
            minimum = temp;
            location = i + 1;
        }
    }
    cout << location << endl;
    return (0);
}