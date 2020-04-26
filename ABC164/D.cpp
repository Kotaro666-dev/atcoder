/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   D.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/26 21:13:14 by kkamashi          #+#    #+#             */
/*   Updated: 2020/04/26 22:37:08 by kkamashi         ###   ########.fr       */
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
//     ll S;
//     cin >> S;

//     if (S <= 2019)
//     {
//         cout << 0 << endl;
//         return (0);
//     }

//     ll temp;
//     int found = 0;
//     for (int i = 0; i < count; i++)
//     {
//         for (int j = 0; j < count; j++)
//         {
//             /* code */
//         }
//     }
// }

ll converter(string S, int begin, int max)
{
    ll end = max - begin;
    ll num = 0;
    string temp;
    if (max - begin > 10)
    {
        temp = S.substr((end - 10), end);
    }
    else
    {
        temp = S.substr(begin, end);
    }
    // if (temp.size() > 19)
    // {
    //     temp = S.substr((end - 21), end);
    // }
    num = stoll(temp);
    return (num);
}

int main(void)
{
    string S;
    cin >> S;

    if (S.size() <= 3 || (S.size() == 4 && stoi(S) < 2019))
    {
        cout << 0 << endl;
        return (0);
    }
    ll temp;
    int found = 0;
    for (int i = 0; i < S.size() - 3; i++)
    {
        temp = 0;
        for (int j = i + 3; j <= S.size(); j++)
        {
            temp = converter(S, i, j);
            // printf("(%d, %d) %ld\n", i + 1, j, temp);
            if (temp % 2019 == 0)
            {
                // printf("%ld\n", temp);
                // printf("found! (%d, %d)\n", i + 1, j);
                found++;
            }
        }
    }
    cout << found << endl;
    return (0);
}