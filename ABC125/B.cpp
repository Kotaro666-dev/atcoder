/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 13:30:40 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/12 21:41:30 by kotaro666        ###   ########.fr       */
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

    vector<int> value(N, 0);
    for (int i = 0; i < N; i++)
    {
        cin >> value.at(i);
    }

    vector<int> cost(N, 0);
    for (int i = 0; i < N; i++)
    {
        cin >> cost.at(i);
    }

    // シンプルな解放
    // int ans = 0;
    // for (int i = 0; i < N; i++)
    // {
    //     if (value.at(i) > cost.at(i))
    //         ans += (value.at(i) - cost.at(i));
    // }
    // cout << "ans: " << ans << endl;

    vector<int> diff(N, 0);
    for (int i = 0; i < N; i++)
    {
        diff.at(i) = value.at(i) - cost.at(i);
        // cout << diff.at(i) << endl;
    }

    // 降順でソート with greater<int>()
    sort(diff.begin(), diff.end(), greater<int>());
    // for (int i = 0; i < N; i++)
    // {
    //     cout << diff.at(i) << endl;
    // }

    int max_diff = (diff.at(0) < 0 ? 0 : diff.at(0));
    int cmp_diff = 0;
    for (int i = 0; i < N; i++)
    {
        cmp_diff += diff.at(i);
        if (cmp_diff >= max_diff)
        {
            max_diff = cmp_diff;
        }
        else
            break;
    }

    cout << max_diff << endl;
    return (0);
}