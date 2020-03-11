/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 18:52:29 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/10 18:57:07 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;

int main(void)
{
    int P, Q, R;
    cin >> P >> Q >> R;

    int A = P + Q;
    int B = Q + R;
    int C = R + P;

    // int D = min(A, B);
    // int ans = min(D, C);
    int ans = min(min(A, B), C);
    cout << ans << endl;
    return (0);
}