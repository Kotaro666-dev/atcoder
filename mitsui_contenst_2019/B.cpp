/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 10:47:24 by kotaro666         #+#    #+#             */
/*   Updated: 2020/02/29 10:49:33 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Tax rate
 */

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int N, X;

    cin >> N;
    X = -1;
    for (int i = N; i > (N / 2); i--)
    {
        if ((int)(i * 1.08) == N)
        {
            X = i;
            break;
        }
    }
    if (X != -1)
        printf("%d\n", X);
    else
        printf(":(\n");
    return 0;
}

/*
int main(void)
{
    int x;
    float tax = 1.08;
    float price_pretax;
    scanf("%d", &x);

    price_pretax = x / tax;
    price_pretax *= 100;
    int remain = (int)price_pretax % 100;

    if (remain < 50)
    {
        printf(":(\n");
    }
    else
    {
        printf("%.0f", price_pretax / 100);
    }
    return (0);
}
*/