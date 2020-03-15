/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/14 07:27:51 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/15 15:08:11 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;

int main(void)
{
    int N, M, C;
    cin >> N >> M >> C;

    vector<int> B(M);
    for (int i = 0; i < M; i++)
    {
        cin >> B.at(i);
    }

    vector<vector<int>> A(N, vector<int>(M, 0));
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> A.at(i).at(j);
        }
    }

    int sum;
    int counter = 0;
    for (int i = 0; i < N; i++)
    {
        sum = 0;
        for (int j = 0; j < M; j++)
        {
            sum = sum + (A.at(i).at(j) * B.at(j));
            // printf("%d * %d, sum = %d\n", A.at(i).at(j), B.at(j), sum);
        }
        sum += C;

        if (sum > 0)
            counter++;
    }

    cout << counter << endl;

    return (0);
}