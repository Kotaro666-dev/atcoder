/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/24 14:46:34 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/24 15:20:20 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Editorial: i 人目の参加者は合宿中にチョコレートを 1 + ⌊(D − 1)/Ai⌋ 個食べると計算できる
 */

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;

int main(void)
{
    int N, D, X;
    cin >> N >> D >> X;

    vector<int> A(N, 0);
    int minimum = 100;
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
        minimum = min(minimum, A[i]);
    }

    vector<int> days(D, 0);
    days[0] = N;
    for (int i = 0; i < N; i++) // members
    {
        for (int j = 1; j < 100; j++)
        {
            int day = j * A[i] + 1;
            if (day <= D)
            {
                days[day - 1]++;
            }
        }
    }

    int sum = X;
    for (int i = 0; i < D; i++)
    {
        // printf("%d ", days[i]);
        sum += days[i];
    }
    cout << sum << endl;

    return (0);
}