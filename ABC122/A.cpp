/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/14 07:17:15 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/14 07:19:51 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;

int main(void)
{
    char b;
    cin >> b;

    if (b == 'A')
        cout << 'T' << endl;
    else if (b == 'T')
        cout << 'A' << endl;
    else if (b == 'C')
        cout << 'G' << endl;
    else if (b == 'G')
        cout << 'C' << endl;
    return (0);
}