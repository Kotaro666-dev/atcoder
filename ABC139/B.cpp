/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 15:08:32 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/06 15:29:59 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int A, B;
    cin >> A >> B;

    int sum = 1, counter = 0;
    while (sum < B)
    {
        sum--;
        sum += A;
        counter++;
        // printf("sum = %d, counter = %d\n", sum, counter);
    }
    cout << counter << endl;
    return (0);
}