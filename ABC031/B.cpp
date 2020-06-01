/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/01 11:14:05 by kkamashi          #+#    #+#             */
/*   Updated: 2020/06/01 11:18:42 by kkamashi         ###   ########.fr       */
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
    int L, H;
    cin >> L >> H;

    int N;
    cin >> N;

    // vector<int> A(N);
    int A;
    for (int i = 0; i < N; i++)
    {
        cin >> A;
        if (A < L)
        {
            printf("%d\n", L - A);
        }
        else if (A >= L && A <= H)
        {
            printf("0\n");
        }
        else
        {
            printf("-1\n");
        }
    }

    return (0);
}