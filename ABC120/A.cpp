/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 15:09:45 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/15 15:13:02 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;

int main(void)
{
    int A, B, C;
    cin >> A >> B >> C;

    int counter = B / A;
    if (counter < C)
    {
        cout << counter << endl;
    }
    else
    {
        cout << C << endl;
    }
    return (0);
}