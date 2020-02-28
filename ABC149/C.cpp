/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 14:27:56 by kotaro666         #+#    #+#             */
/*   Updated: 2020/02/28 14:47:20 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
X以上の素数のうち、最小のものを求めよ。
 */

#include <bits/stdc++.h>
using namespace std;

bool is_prime(int &num)
{
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}

void find_next_prime(int &num)
{
    for (;; num++)
    {
        if (is_prime(num) == true)
            break;
    }
}

int main()
{
    int x;
    cin >> x;

    find_next_prime(x);
    cout << x << endl;
}