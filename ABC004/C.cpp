/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/11 21:26:06 by kkamashi          #+#    #+#             */
/*   Updated: 2020/06/11 22:25:50 by kkamashi         ###   ########.fr       */
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
    int N;
    cin >> N;

    vector<int> order{1, 2, 3, 4, 5, 6};

    ll turn = 0;
    ll A, B;
    ll temp;

    if (N > 30)
    {
        N %= 30;
    }

    while (turn <= N - 1)
    {
        A = (turn % N) + 1;
        B = (turn % N) + 2;
        A--;
        B--;
        if (turn > 4)
        {
            A %= 5;
            B %= 5;
        }
        if (B == 0)
        {
            B = 5;
        }

        // swap
        temp = order[A];
        order[A] = order[B];
        order[B] = temp;

        //debug
        // printf("turn = %d: ", turn);
        // printf("A = %d, B = %d\n", A, B);
        // for (int i = 0; i < 6; i++)
        // {
        //     printf("%d", order[i]);
        // }
        // printf("\n");
        turn++;
    }
    for (int i = 0; i < 6; i++)
    {
        printf("%d", order[i]);
    }
    printf("\n");
    return (0);
}