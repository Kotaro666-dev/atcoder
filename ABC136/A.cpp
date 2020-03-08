/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/08 18:51:21 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/08 19:55:25 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int max_1, current_1, current_2;
    cin >> max_1 >> current_1 >> current_2;

    int rest_1 = max_1 - current_1;
    if (rest_1 >= current_2)
    {
        current_2 = 0;
    }
    else
    {
        current_2 -= rest_1;
    }
    cout << current_2 << endl;
    return 0;
}
