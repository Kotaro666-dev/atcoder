/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/15 15:20:34 by kkamashi          #+#    #+#             */
/*   Updated: 2020/06/15 15:55:57 by kkamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;
const int INF = 1000000000;
const ll LINF = 1000000000000000000; //1e18
const double EPS = 1e-10;

int main(void)
{
    string S;
    cin >> S;

    int ans = 0;
    for (int i = 0; i < S.size() - 1; i++)
    {
        if (S[i] != S[i + 1])
        {
            ans++;
        }
    }
    cout << ans << endl;
}

// bool isGameOver(deque<bool> game)
// {
//     for (int i = 0; i < game.size() - 1; i++)
//     {
//         if (game[i] != game[i + 1])
//         {
//             return false;
//         }
//     }
//     return true;
// }

// int main(void)
// {
//     string S;
//     cin >> S;

//     int M = S.size();
//     deque<bool> game;
//     for (int i = 0; i < M; i++)
//     {
//         if (S[i] == 'B')
//         {
//             game.push_back(true);
//         }
//         else
//         {
//             game.push_back(false);
//         }
//     }

//     int ans = 0;
//     while (isGameOver(game) == false)
//     {
//         int index = 1;
//         if (game.front() == true)
//         {
//             game.push_front(false);
//             while (game[index] == true)
//             {
//                 game[index] = false;
//                 index++;
//             }
//         }
//         else
//         {
//             game.push_front(true);
//             while (game[index] == false)
//             {
//                 game[index] = true;
//                 index++;
//             }
//         }
//         ans++;
//     }
//     cout << ans << endl;
//     return (0);
// }