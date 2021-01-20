/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 20:41:39 by kkamashi          #+#    #+#             */
/*   Updated: 2021/01/14 21:05:01 by kkamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;
const int INF = 1000000000;
const ll LINF = 1000000000000000000;//1e18
const double EPS = 1e-10;

int main(void)
{
    string A, B;

    cin >> A >> B;

    int sumA = 0;
    int sumB = 0;
    for (int i = 0; i < 3; i++)
    {
        sumA += (A[i] - '0');
        sumB += (B[i] - '0');
    }
    cout << max(sumA, sumB) << endl;
    return (0);
}