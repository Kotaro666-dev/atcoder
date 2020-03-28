/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/28 10:13:02 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/28 10:15:29 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;

int main(void)
{
    char X, Y;
    cin >> X >> Y;

    if (X > Y)
    {
        cout << ">" << endl;
    }
    else if (X < Y)
    {
        cout << "<" << endl;
    }
    else
    {
        cout << "=" << endl;
    }

    return (0);
}