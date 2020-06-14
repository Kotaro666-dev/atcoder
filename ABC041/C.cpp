/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/14 13:24:32 by kkamashi          #+#    #+#             */
/*   Updated: 2020/06/14 13:34:29 by kkamashi         ###   ########.fr       */
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

    vector<int> height(N);
    map<int, int> order;
    for (int i = 0; i < N; i++)
    {
        cin >> height[i];
        order[height[i]] = i + 1;
    }
    sort(height.begin(), height.end(), greater<int>());
    int index;
    for (int i = 0; i < N; i++)
    {
        index = order[height[i]];
        printf("%d\n", index);
    }
    return (0);
}