/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/04 20:20:10 by kotaro666         #+#    #+#             */
/*   Updated: 2020/04/04 21:04:31 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;
const int INF = 1000000000;
const ll LINF = 1000000000000000000; //1e18
const double EPS = 1e-10;            //

int main(void)
{
    int A, B, C;
    cin >> A >> B >> C;

    int temp;
    temp = A;
    A = B;
    B = temp;

    temp = A;
    A = C;
    C = temp;
    printf("%d %d %d\n", A, B, C);
    return (0);
}