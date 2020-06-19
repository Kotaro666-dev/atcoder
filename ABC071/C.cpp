/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 16:04:24 by kkamashi          #+#    #+#             */
/*   Updated: 2020/06/19 16:56:49 by kkamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;
const int INF = 1000000000;
const ll LINF = 1000000000000000000; //1e18
const double EPS = 1e-10;

// int main(void)
// {
//     int N;
//     cin >> N;

//     vector<int> box(N);
//     for (int i = 0; i < N; i++)
//     {
//         cin >> box[i];
//     }
//     box.push_back(-1);
//     sort(box.begin(), box.end(), greater<int>());

//     int cnt = 1;
//     ll area = 0;
//     bool other_found = false;
//     int other;
//     for (int i = 0; i < box.size(); i++)
//     {
//         if (box[i] == box[i + 1])
//         {
//             cnt++;
//         }
//         else
//         {
//             if (cnt >= 4)
//             {
//                 if (other_found == false)
//                 {
//                     area = box[i] * box[i];
//                 }
//                 else
//                 {
//                     area = box[i] * other;
//                 }
//                 break;
//             }
//             else if (cnt == 2 || cnt == 3)
//             {
//                 if (other_found == false)
//                 {
//                     other = box[i];
//                     other_found = true;
//                 }
//                 else
//                 {
//                     area = box[i] * other;
//                     break;
//                 }
//             }
//             cnt = 1;
//         }
//     }
//     cout << area << endl;
//     return (0);
// }

int main(void)
{
    int N;
    cin >> N;

    int num;
    map<ll, ll> mapping;
    for (int i = 0; i < N; i++)
    {
        cin >> num;
        mapping[num]++;
    }
    // debug
    // for (auto itr = box.begin(); itr != box.end(); itr++)
    // {
    //     cout << itr->first <s< ":" << itr->second << endl;
    //
    // deque<int> box;
    // deque<int> square;
    ll first = 0;
    ll second = 0;
    for (auto itr = mapping.begin(); itr != mapping.end(); itr++)
    {
        num = itr->second;
        if (num >= 2)
        {
            second = first;
            first = itr->first;
            // box.push_back(itr->first);
        }
        if (num >= 4)
        {
            second = first;
            // square.push_back(itr->first);
        }
    }
    // sort(box.begin(), box.end(), greater<int>());
    // sort(square.begin(), square.end(), greater<int>());
    // ll ans = max(box[0] * box[1], square[0] * square[0]);
    ll ans = first * second;
    cout << ans << endl;
    return (0);
}