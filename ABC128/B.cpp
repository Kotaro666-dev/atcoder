/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/11 16:09:19 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/11 17:50:34 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// http://kyopro.hateblo.jp/entry/2019/05/27/122711

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;

/* After reading the example */
int main(void)
{
    int N;
    cin >> N;

    vector<pair<pair<string, int>, int>> book(N);
    for (int i = 0; i < N; i++)
    {
        cin >> book[i].first.first >> book[i].first.second;
        // めっちゃ賢いやり方。これで、点数が高いものから紹介し
        book[i].first.second *= -1;
        book[i].second = i + 1;
    }

    sort(book.begin(), book.end());

    for (int i = 0; i < N; i++)
    {
        cout << book[i].second << endl;
    }
    return (0);
}

/* my idea and didn't work */
/* 
int main(void)
{
    int N;
    cin >> N;

    pair<string, int> book[N];
    // pair<string, int> temp_cmp[N];
    for (int i = 0; i < N; i++)
    {
        cin >> book[i].first >> book[i].second;
        // temp_cmp[i].first = book[i].first;
        // temp_cmp[i].second = book[i].second;
    }

    // for (int i = 0; i < N; i++)
    // {
    //     cout << book[i].first << " " << book[i].second;
    //     cout << endl;
    // }

    vector<pair<string, int>> pair_sorted(N);
    for (int i = 0; i < N; i++)
    {
        pair_sorted.at(i) = make_pair(book[i].first, book[i].second);
    }

    // firstが小さい順、secondが小さい順にソート
    sort(pair_sorted.begin(), pair_sorted.end(), greater<int>());

    // Output
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (pair_sorted[i].first == book[j].first &&
                pair_sorted[i].second == book[j].second)
            {
                cout << j + 1 << endl;
            }
        }
    }
    return (0);
}
*/