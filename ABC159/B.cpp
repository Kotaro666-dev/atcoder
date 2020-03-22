/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/22 20:28:10 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/22 21:26:42 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;

int main(void)
{
    string S;
    cin >> S;

    int N = S.size();
    // printf("N = %d\n", N);
    bool strong = true;
    // Sは回文である。
    for (int i = 0, j = N - 1; i < N; i++, j--)
    {
        if (S[i] != S[j])
        {
            strong = false;
        }
    }

    // Sの1文字目から(N−1)/2文字目まで(両端含む)からなる文字列は回文である。
    int end = (N - 1) / 2;
    // printf("end = %d\n", end);
    for (int i = 0, j = end - 1; i < end; i++, j--)
    {
        // printf("%c %c\n", S[i], S[j]);
        if (S[i] != S[j])
        {
            strong = false;
        }
    }

    // Sの(N+3)/2文字目からN文字目まで(両端含む)からなる文字列は回文である。
    int start = (N + 3) / 2;
    // printf("N = %d\n", N);
    // printf("start = %d\n", start);
    for (int i = start - 1, j = N - 1; i < N; i++, j--)
    {
        // printf("%c %c\n", S[i], S[j]);
        if (S[i] != S[j])
        {
            strong = false;
        }
    }

    if (strong == true)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return (0);
}