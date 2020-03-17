/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/17 10:57:27 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/17 11:01:09 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;

int main(void)
{
    int D;
    cin >> D;

    if (D == 25)
    {
        cout << "Christmas" << endl;
    }
    else if (D == 24)
    {
        cout << "Christmas Eve" << endl;
    }
    else if (D == 23)
    {
        cout << "Christmas Eve Eve" << endl;
    }
    else
    {
        cout << "Christmas Eve Eve Eve" << endl;
    }
    return (0);
}