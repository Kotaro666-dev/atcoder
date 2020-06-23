/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   D.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 15:04:42 by kotaro666         #+#    #+#             */
/*   Updated: 2020/06/23 19:39:02 by kkamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;
const int INF = 1000000000;
const ll LINF = 1000000000000000000;//1e18
const double EPS = 1e-10;

int main(void)
{
    int N, K;
    cin >> N >> K;

    // 得点
    int R, S, P;
    cin >> R >> S >> P;

    string T;
    cin >> T;

    vector<char> log(N);
    vector<int> ans(N, 0);

    int i;
    for (i = 0; i < K; i++)
    {
        if (T[i] == 'r')
        {
            ans[i] = P;
            log[i] = 'p';
        }
        else if (T[i] == 's')
        {
            ans[i] = R;
            log[i] = 'r';
        }
        else
        {
            ans[i] = S;
            log[i] = 's';
        }
    }
    // K ~ MAX - K
    for (; i < T.size() - K; i++)
    {
        if (T[i] == 'r')
        {
            if (log[i - K] != 'p')
            {
                ans[i] = P;
                log[i] = 'p';
            }
            else
            {
                log[i] = T[i + K];
            }
        }
        else if (T[i] == 's')
        {
            if (log[i - K] != 'r')
            {
                ans[i] = R;
                log[i] = 'r';
            }
            else
            {
                log[i] = T[i + K];
            }
        }
        else
        {
            if (log[i - K] != 's')
            {
                ans[i] = S;
                log[i] = 's';
            }
            else
            {
                log[i] = T[i + K];
            }
        }
    }
    for (; i < T.size(); i++)
    {
        if (T[i] == 'r')
        {
            if (log[i - K] != 'p')
            {
                ans[i] = P;
            }
        }
        else if (T[i] == 's')
        {
            if (log[i - K] != 'r')
            {
                ans[i] = R;
            }
        }
        else
        {
            if (log[i - K] != 's')
            {
                ans[i] = S;
            }
        }
    }
    ll all = 0;
    for (int i = 0; i < N; i++)
    {
        // printf("%d ", ans[i]);
        all += ans[i];
    }
    // printf("\n");
    // for (int i = 0; i < N; i++)
    // {
    //     printf("%c ", log[i]);
    // }
    cout << all << endl;
    return (0);
}

/*
惜しい。。。。
 */


// #include <bits/stdc++.h>
// using namespace std;

// #define ROCK 0
// #define SCISSORS 1
// #define PAPER 2

// int main()
// {
//     int N, K;
//     vector<int> points(3);
//     string T;
//     int score;

//     cin >> N >> K;
//     for (int i = 0; i < 3; i++)
//     {
//         cin >> points.at(i);
//     }
//     cin >> T;

//     score = 0;
//     int i;
//     // K回までのスコア（好きなのを出せる）
//     for (i = 0; i < K; i++)
//     {
//         if (T.at(i) == 'r')
//             score += points.at(PAPER);
//         else if (T.at(i) == 's')
//             score += points.at(ROCK);
//         else
//             score += points.at(SCISSORS);
//     }
//     // cout << "first: " << score << endl;


//     // K回以降のスコア　&& 再びK回分好きなの出せる
//     K += i; // Kを修正
//     for (; i < K; i++)
//     {
//         if (T.at(i) == 'r')
//             score += points.at(PAPER);
//         else if (T.at(i) == 's')
//             score += points.at(ROCK);
//         else
//             score += points.at(SCISSORS);
//     }
//     // cout << "second: " << score << endl;

//     //　それ以降のスコア
//     for (; i < N; i++)
//     {
//         int check_counter = 0;
//         for (int j = i - K; j < i; j++)
//         {
//             if (T.at(j) != T.at(i))
//             {
//                 check_counter++;
//             }
//             if (check_counter == K)
//             {
//                 if (T.at(i) == 'r')
//                     score += points.at(PAPER);
//                 else if (T.at(i) == 's')
//                     score += points.at(ROCK);
//                 else
//                     score += points.at(SCISSORS);
//             }
//         }
//     }
//     // cout << "Third: " << score << endl;
//     cout << score << endl;
// }
