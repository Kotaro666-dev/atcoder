/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/07 08:47:20 by kkamashi          #+#    #+#             */
/*   Updated: 2020/06/07 10:57:29 by kkamashi         ###   ########.fr       */
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
    vector<int> nums(5);
    int all = 0;
    for (int i = 0; i < 5; i++)
    {
        cin >> nums[i];
        all += nums[i];
    }

    deque<int> sums;
    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            sums.push_back(all - (nums[i] + nums[j]));
        }
    }
    sort(sums.begin(), sums.end(), greater<int>());
    int ans = sums[2];
    // for (int i = 0; i < 5; i++)
    // {
    //     cin >> nums[i];
    // }
    // sort(nums.begin(), nums.end(), greater<int>());
    // int ans = nums[0] + nums[1] + nums[4];
    cout << ans << endl;
    return (0);
}