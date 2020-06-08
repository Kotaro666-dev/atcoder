/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/08 16:24:08 by kkamashi          #+#    #+#             */
/*   Updated: 2020/06/08 16:29:12 by kkamashi         ###   ########.fr       */
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

    vector<bool> number(1000000000 + 1);
    int num;
    for (int i = 0; i < N; i++)
    {
        cin >> num;
        if (number[num] == false)
        {
            number[num] = true;
        }
        else
        {
            number[num] = false;
        }
    }

    int ans = 0;
    for (int i = 1; i < number.size(); i++)
    {
        if (number[i] == true)
        {
            ans++;
        }
    }
    cout << ans << endl;
    return (0);
}