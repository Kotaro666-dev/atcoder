/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/06 00:19:59 by kotaro666         #+#    #+#             */
/*   Updated: 2020/04/06 00:46:11 by kotaro666        ###   ########.fr       */
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
    int N;
    cin >> N;

    vector<int> time(N);
    for (int i = 0; i < N; i++)
    {
        cin >> time[i];
    }

    int M;
    cin >> M;
    int P[M], X[M];
    for (int i = 0; i < M; i++)
    {
        cin >> P[i] >> X[i];
    }

    int sum;
    int temp;
    bool changed = false;

    for (int i = 0; i < M; i++)
    {
        sum = 0;
        changed = false;
        for (int j = 0; j < N; j++)
        {
            // cout << "time " << time[j] << endl;
            if (j == P[i] - 1)
            {
                temp = time[j];
                // printf("before: time[j] = %d\n", time[j]);
                time[j] = X[i];
                // printf("After: time[j] = %d\n", time[j]);
                changed = true;
            }
            // cout << "time " << time[j] << endl;
            sum += time[j];

            if (changed == true)
            {
                time[j] = temp;
                changed = false;
            }
        }
        printf("%d\n", sum);
    }
    return (0);
}