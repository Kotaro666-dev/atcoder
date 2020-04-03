/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/03 11:29:51 by kotaro666         #+#    #+#             */
/*   Updated: 2020/04/03 11:58:22 by kotaro666        ###   ########.fr       */
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
    int N, M;
    cin >> N >> M;

    vector<int> a(N);
    vector<int> b(N);
    for (int i = 0; i < N; i++)
    {
        cin >> a[i] >> b[i];
    }

    vector<int> c(M);
    vector<int> d(M);
    for (int i = 0; i < M; i++)
    {
        cin >> c[i] >> d[i];
    }

    int diff;
    int minimum = INF;
    int location;
    int i, j;
    for (i = 0; i < N; i++)
    {
        location = 0;
        diff = 0;
        minimum = INF;
        for (j = 0; j < M; j++)
        {
            diff = abs(a[i] + (c[j] * -1)) + abs(b[i] + (d[j] * -1));
            // printf("diff = (%d - %d) + (%d - %d)\n", a[i], c[j], b[i], d[j]);
            // printf("diff = %d\n", diff);
            if (minimum > diff)
            {
                minimum = diff;
                location = j + 1;
            }
        }
        cout << location << endl;
    }
    return (0);
}