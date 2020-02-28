/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   D.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 15:04:42 by kotaro666         #+#    #+#             */
/*   Updated: 2020/02/28 15:15:19 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
惜しい。。。。
 */


#include <bits/stdc++.h>
using namespace std;

#define ROCK 0
#define SCISSORS 1
#define PAPER 2

int main()
{
    int N, K;
    vector<int> points(3);
    string T;
    int score;

    cin >> N >> K;
    for (int i = 0; i < 3; i++)
    {
        cin >> points.at(i);
    }
    cin >> T;

    score = 0;
    int i;
    // K回までのスコア（好きなのを出せる）
    for (i = 0; i < K; i++)
    {
        if (T.at(i) == 'r')
            score += points.at(PAPER);
        else if (T.at(i) == 's')
            score += points.at(ROCK);
        else
            score += points.at(SCISSORS);
    }
    // cout << "first: " << score << endl;


    // K回以降のスコア　&& 再びK回分好きなの出せる
    K += i; // Kを修正
    for (; i < K; i++)
    {
        if (T.at(i) == 'r')
            score += points.at(PAPER);
        else if (T.at(i) == 's')
            score += points.at(ROCK);
        else
            score += points.at(SCISSORS);
    }
    // cout << "second: " << score << endl;

    //　それ以降のスコア
    for (; i < N; i++)
    {
        int check_counter = 0;
        for (int j = i - K; j < i; j++)
        {
            if (T.at(j) != T.at(i))
            {
                check_counter++;
            }
            if (check_counter == K)
            {
                if (T.at(i) == 'r')
                    score += points.at(PAPER);
                else if (T.at(i) == 's')
                    score += points.at(ROCK);
                else
                    score += points.at(SCISSORS);
            }
        }
    }
    // cout << "Third: " << score << endl;
    cout << score << endl;
}
