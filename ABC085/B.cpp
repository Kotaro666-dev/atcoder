/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/26 13:19:55 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/26 13:33:20 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;

int main(void)
{
    int N;
    cin >> N;
    int C;
    set<int> ans;
    for (int i = 0; i < N; i++)
    {
        cin >> C;
        ans.insert(C);
    }
    cout << ans.size() << endl;
    return 0;
}

// int main(void)
// {
//     int N;
//     cin >> N;
//     vector<int> d(N);
//     for (int i = 0; i < N; i++)
//     {
//         cin >> d[i];
//     }
//     sort(d.begin(), d.end());

//     int counter = 1;
//     for (int i = 0; i < N - 1; i++)
//     {
//         if (d[i] < d[i + 1])
//         {
//             // printf("%d < %d\n", d[i], d[i + 1]);
//             counter++;
//         }
//     }
//     cout << counter << endl;
//     return (0);
// }