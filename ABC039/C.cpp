/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/08 15:19:44 by kkamashi          #+#    #+#             */
/*   Updated: 2020/06/08 16:20:52 by kkamashi         ###   ########.fr       */
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
    string s;
    cin >> s;

    string pos[] = {"Do", "Re", "Mi", "Fa", "So", "La", "Si"};
    string kenban = "WBWBWWBWBWBWWBWBWWBWBWBWWBWBWWBWBWBWWBWBWWBWBWBW";

    int cnt = 0;
    for (int i = 0; i < kenban.size(); i++)
    {
        if (kenban.substr(i, 20) == s)
        {
            break;
        }
        if (kenban[i] == 'W')
        {
            cnt++;
        }
    }
    cout << pos[cnt] << endl;
}

// int main(void)
// {
//     string s;
//     cin >> s;

//     int cnt = 0;
//     for (int i = 0; i < 20 - 6; i++)
//     {
//         if (s[i] == 'W' && s[i + 1] == 'B' && s[i + 2] == 'W' && s[i + 3] == 'B' && s[i + 4] == 'W' && s[i + 5] == 'W')
//         {
//             break;
//         }
//         if (s[i] == 'W')
//         {
//             cnt++;
//         }
//     }

//     string ans;
//     if (cnt == 0)
//     {
//         ans = "Do";
//     }
//     else if (cnt == 1)
//     {
//         ans = "Si";
//     }
//     else if (cnt == 2)
//     {
//         ans = "La";
//     }
//     else if (cnt == 3)
//     {
//         ans = "So";
//     }
//     else if (cnt == 4)
//     {
//         ans = "Fa";
//     }
//     else if (cnt == 5)
//     {
//         ans = "Mi";
//     }
//     else if (cnt == 6)
//     {
//         ans = "Re";
//     }
//     else if (cnt == 7)
//     {
//         ans = "Do";
//     }
//     cout << ans << endl;
// }

// int main(void)
// {
//     string s;
//     cin >> s;

//     int total = 0;
//     int black = 0;
//     int i = 0;
//     for (; i < 19; i++)
//     {
//         if (s[i] == 'W' && s[i + 1] == 'W')
//         {
//             for (int j = i + 2; j < 7 + i; j++)
//             {
//                 // printf("%c", s[j]);
//                 if (s[j] == 'B')
//                 {
//                     black++;
//                 }
//             }
//             break;
//         }
//         total++;
//     }

//     // ミ or シ
//     if (total == 0)
//     {
//         if (black == 3)
//         {
//             cout << "Mi" << endl;
//         }
//         else
//         {
//             cout << "Si" << endl;
//         }
//     }

//     if (black == 3)
//     {
//         vector<string> keys{"", "Re", "Do", "Si", "La", "So", "Fa", "Mi"};
//         cout << keys[total / 2] << endl;
//     }
//     else
//     {
//         vector<string> keys{"", "La", "So", "Fa"};
//         cout << keys[total / 2] << endl;
//     }
//     return (0);
// }

// int main(void)
// {
//     string s;
//     cin >> s;

//     int cnt = 0;
//     for (int i = 0; i < s.size() - 1; i++)
//     {
//         if (s[i] == 'W' && s[i + 1] == 'W')
//         {
//             break;
//         }
//         cnt++;
//     }
//     cnt /= 2;
//     vector<string> keys{"", "Re", "Do", "Si", "La", "So", "Fa", "Mi"};
//     cout << keys[cnt] << endl;
//     return (0);
// }