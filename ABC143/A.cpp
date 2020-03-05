/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 15:07:14 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/05 15:09:50 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int A;
    int B;
    cin >> A >> B;

    int sum_length = B * 2;

    if (A <= sum_length)
    {
        cout << "0" << endl;
    }
    else
    {
        cout << A - sum_length << endl;
    }

    return 0;
}
