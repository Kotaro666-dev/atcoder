/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/05 00:16:46 by kkamashi          #+#    #+#             */
/*   Updated: 2020/06/05 00:34:46 by kkamashi         ###   ########.fr       */
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
    int N;
    cin >> N;

    string S;
    cin >> S;

    int ans = 0;
    for (int i = 0; i < N - 1; i++)
    {
        if (S[i] != S[i + 1])
        {
            ans++;
        }
    }
    ans++;
    cout << ans << endl;
    return (0);
}

// for (int i = 0; i < N - 1; i++)
// {
//     for (int j = i + 1; j < N; j++)
//     {
//         if (S[i] != S[j])
//         {
//             ans++;
//             i = j;
//             break;
//         }
//     }
// }
// ans++;
// printf("%d\n", ans);