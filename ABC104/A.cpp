/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/20 15:36:12 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/20 15:40:02 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;

int main(void)
{
    int R;
    cin >> R;

    if (R < 1200)
    {
        cout << "ABC" << endl;
    }
    else if (R >= 1200 && R < 2800)
    {
        cout << "ARC" << endl;
    }
    else if (R >= 2800)
    {
        cout << "AGC" << endl;
    }
    return (0);
}