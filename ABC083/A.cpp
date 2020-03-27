/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/27 10:58:25 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/27 11:00:40 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;

int main(void)
{
    int A, B, C, D;
    cin >> A >> B >> C >> D;

    if (A + B > C + D)
    {
        cout << "Left" << endl;
    }
    else if (A + B < C + D)
    {
        cout << "Right" << endl;
    }
    else
    {
        cout << "Balanced" << endl;
    }
    return (0);
}