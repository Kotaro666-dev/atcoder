/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/09 17:56:23 by kkamashi          #+#    #+#             */
/*   Updated: 2020/06/10 17:32:25 by kkamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// REFERENCE : http://keita-matsushita.hatenablog.com/entry/2017/04/19/150537

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;
const int INF = 1000000000;
const ll LINF = 1000000000000000000; //1e18
const double EPS = 1e-10;

int main(void)
{
    int N;
    cin >> N;

    int time = 0;
    int pos = 0;
    while (pos < N)
    {
        time++;
        pos = (time * (time + 1)) / 2;
    }
    cout << time << "\n";
}

// int main(void)
// {
//     int N;
//     cin >> N;

//     if (N < 0)
//     {
//         N *= -1;
//     }

//     deque<int> temp;
//     deque<int> next;

//     temp.emplace_front(-1);
//     temp.emplace_back(0);
//     temp.emplace_back(1);
//     // temp.push_back(0);
//     int turn = 2;
//     while (true)
//     {
//         for (int i = 0; i < temp.size(); i++)
//         {
//             next.emplace_back(temp[i] + (turn * -1));
//             next.emplace_back(temp[i] + 0);
//             next.emplace_back(temp[i] + turn);
//         }
//         // sort(next.begin(), next.end());
//         // for (int i = 0; i < next.size() - 1; i++)
//         // {
//         //     if (next[i] == next[i + 1])
//         //     {
//         //         next.erase(next.begin() + i);
//         //     }
//         // }

//         // printf("turn %d   ", turn);
//         for (int i = 0; i < next.size(); i++)
//         {
//             // printf("%d ", next[i]);
//             if (next[i] == N)
//             {
//                 cout << turn << "\n";
//                 return (0);
//             }
//         }
//         // printf("\n");
//         temp = next;
//         turn++;
//     }

//     return (0);
// }