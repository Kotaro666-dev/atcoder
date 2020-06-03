/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/03 16:42:02 by kkamashi          #+#    #+#             */
/*   Updated: 2020/06/03 16:48:34 by kkamashi         ###   ########.fr       */
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
    string w;
    cin >> w;

    unordered_map<char, int> often;
    for (int i = 0; i < w.size(); i++)
    {
        if (often.count(w[i]))
        {
            often[w[i]]++;
        }
        else
        {
            often[w[i]] = 1;
        }
    }

    for (auto iter = often.begin(); iter != often.end(); iter++)
    {
        if (iter->second % 2 != 0)
        {
            cout << "No" << endl;
            return (0);
        }
    }
    cout << "Yes" << endl;
    return (0);
}