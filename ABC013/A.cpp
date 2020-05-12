/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/12 16:22:25 by kkamashi          #+#    #+#             */
/*   Updated: 2020/05/12 16:26:06 by kkamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;
const int INF = 1000000000;
const ll LINF = 1000000000000000000; //1e18
const double EPS = 1e-10;

int main(void)
{
    char X;
    cin >> X;

    char A = 'A';
    int counter = 1;
    while (A <= 'Z')
    {
        if (A == X)
        {
            break;
        }
        A++;
        counter++;
    }
    cout << counter << endl;
    return (0);
}