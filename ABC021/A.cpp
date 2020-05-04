/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 18:55:57 by kkamashi          #+#    #+#             */
/*   Updated: 2020/05/04 19:05:24 by kkamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;
const int INF = 1000000000;
const ll LINF = 1000000000000000000; //1e18
const double EPS = 1e-10;

int main(void)
{
    int K;
    cin >> K;

    int ans;
    if (K == 1)
    {
        printf("1\n1\n");
    }
    else if (K == 2)
    {
        printf("1\n2\n");
    }
    else
    {
        for (int i = 1; i <= 8; i *= 2)
        {
            for (int j = 1; j <= 8; j *= 2)
            {
                for (int k = 1; k <= 8; k *= 2)
                {
                    if (i + j + k == K)
                    {
                        printf("3\n");
                        printf("%d\n%d\n%d\n", i, j, k);
                        return (0);
                    }
                }
            }
        }
    }
    return (0);
}