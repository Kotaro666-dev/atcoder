/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/26 12:47:59 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/26 12:49:13 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;

int main(void)
{
    int a, b;
    cin >> a >> b;

    int result = a * b;
    if (result % 2 == 0)
        cout << "Even" << endl;
    else
        cout << "Odd" << endl;
    return (0);
}