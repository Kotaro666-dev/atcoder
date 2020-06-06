/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/06 12:17:12 by kkamashi          #+#    #+#             */
/*   Updated: 2020/06/06 12:47:28 by kkamashi         ###   ########.fr       */
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
    int n;
    cin >> n;

    deque<int> h;
    int num;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        h.push_back(num);
    }

    int cnt = 0;
    int temp;
    int mx = 0;
    int i = 0;
    while (h.size() > 1)
    {
        temp = h.front();
        h.pop_front();

        if (temp >= h[i])
        {
            // printf("temp: %d h[i]: %d\n", temp, h[i]);
            cnt++;
            mx = max(mx, cnt);
        }
        else
        {
            cnt = 0;
        }
        i = 0;
    }
    int ans = mx;
    cout << ans << endl;
    return (0);
}