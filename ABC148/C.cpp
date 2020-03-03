/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 20:21:00 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/03 20:21:00 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
最小公倍数を求める問題

 */


#include <bits/stdc++.h>
using namespace std;

long int gcd(long int A, long int B)
{
    if (A % B == 0)
    {
        return (B);
    }
    else
    {
        return (gcd(B, A % B));
    }
}

long int lcm(long int A, long int B)
{
    return A * B / gcd(A, B);
}

int main()
{
    long int A, B;
    cin >> A >> B;

    cout << lcm(A, B) << endl;
}