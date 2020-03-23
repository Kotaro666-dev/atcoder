/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/23 11:49:06 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/23 12:07:47 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;

int main(void)
{
    int N, M, X;
    cin >> N >> M >> X;

    vector<int> A(M);
    for (int i = 0; i < M; i++)
    {
        cin >> A[i];
    }

    vector<int> map(N + 1, 0);
    for (int i = 0; i < M; i++)
    {
        map[A[i]]++;
    }
    // for (int i = 0; i < N + 1; i++)
    // {
    //     printf("%d ", map[i]);
    // }
    // printf("\n");

    int left = 0;
    int right = 0;

    // Going to left side
    for (int i = X; i >= 0; i--)
    {
        left += map[i];
    }
    // printf("left = %d\n", left);

    // Goint to right side
    for (int i = X; i <= N; i++)
    {
        right += map[i];
    }
    // printf("right = %d\n", right);
    cout << min(left, right) << endl;
    return (0);
}