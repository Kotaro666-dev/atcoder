/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/25 11:54:56 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/25 12:06:38 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;

int main(void)
{
    int N;
    cin >> N;

    vector<string> S(N);
    for (int i = 0; i < N; i++)
    {
        cin >> S[i];
    }

    int M;
    cin >> M;
    vector<string> T(M);
    for (int i = 0; i < M; i++)
    {
        cin >> T[i];
    }

    // vector<int> points(N, 0);
    int point;
    int maximum = 0;
    for (int i = 0; i < N; i++)
    {
        point = 0;
        for (int j = 0; j < N; j++)
        {
            if (S[i] == S[j])
                point++;
        }
        for (int k = 0; k < M; k++)
        {
            if (S[i] == T[k])
                point--;
        }
        // printf("%d\n", point);
        maximum = max(maximum, point);
    }
    cout << maximum << endl;
    return (0);
}