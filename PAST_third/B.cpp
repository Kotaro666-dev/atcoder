/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/05 11:17:53 by kkamashi          #+#    #+#             */
/*   Updated: 2020/06/05 14:49:38 by kkamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;
const int INF = 1000000000;
const ll LINF = 1000000000000000000; //1e18
const double EPS = 1e-10;

int main(void)
{
    int N, M, Q;
    scanf("%d %d %d", &N, &M, &Q);

    int num, n, m;
    vector<int> score(N, 0);
    vector<int> solved(M, 0);
    vector<vector<int>> whoSolved(N, vector<int>(M, 0));
    for (int i = 0; i < Q; i++)
    {
        scanf("%d %d", &num, &n);
        n--;
        if (num == 1)
        {
            printf("%d\n", score[n]);
        }
        else
        {
            scanf("%d", &m);
            m--;
            solved[m]++;
            score[n] += (N - solved[m]);
            whoSolved[n][m]++;

            // update other people's score
            for (int j = 0; j < N; j++)
            {
                if (j != n && whoSolved[j][m] > 0)
                {
                    score[j]--;
                    if (score[j] < 0)
                    {
                        score[j] = 0;
                    }
                }
            }
            // printf("score: %d %d %d %d %d\n", score[0], score[1], score[2], score[3], score[4]);
        }
    }
    return (0);
}