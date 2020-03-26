/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/26 12:47:54 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/26 13:16:26 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;

int main(void)
{
    string a, b;
    cin >> a >> b;

    string str = a + b;
    int num = stoi(str);

    int sqrt_num = sqrt(num);
    // cout << sqrt_num << endl;
    if (sqrt_num * sqrt_num == num)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return (0);
}