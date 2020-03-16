/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/16 09:04:12 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/16 13:45:50 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;

/*
自力で解くことができなかった。
decrementして解こうとしていた。
 */

int main(void)
{
    int N, M;
    cin >> N >> M;

    vector<int> cnt(M, 0);
    int K;
    int num;
    for (int i = 0; i < N; i++)
    {
        cin >> K;
        for (int j = 0; j < K; j++)
        {
            cin >> num;
            num--;
            cnt.at(num)++;
        }
    }
    int ans = 0;
    for (int i = 0; i < M; i++)
    {
        if (cnt.at(i) == N)
        {
            ans++;
        }
    }
    cout << ans << endl;
    return (0);
}

// int main(void)
// {
//     int N, M;
//     cin >> N >> M;

//     vector<vector<int>> food(N, vector<int>(M, N));
//     int K, num;
//     for (int i = 0; i < N; i++)
//     {
//         cin >> K;
//         for (int j = 0; j < K; j++)
//         {
//             cin >> num;
//             food.at(i).at(num)--;
//         }
//     }

//     if (N == 1)
//     {
//         cout << K << endl;
//         return 0;
//     }

//     vector<int> sum(M);
//     int i, j;
//     for (i = 0; i < M; i++)
//     {
//         for (j = 0; j < N; j++)
//         {
//             sum.at(j) += food.at(j).at(i);
//         }
//     }

//     int counter = 0;
//     for (int i = 0; i < M; i++)
//     {
//         printf("%d = %d\n", i, sum.at(i));
//         if (sum.at(i) == 0)
//             counter++;
//     }
//     cout << counter << endl;
//     return (0);
// }