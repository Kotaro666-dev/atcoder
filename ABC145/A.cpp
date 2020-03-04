/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 18:44:06 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/04 18:51:12 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int radius;
    cin >> radius;

    float pi = 3.141592;
    float area = radius * radius * pi;
    float ans = area / pi;

    /* EASY WAY */
    // cout << radius * radius << endl;

    cout << (int)ans << endl;
    return 0;
}
