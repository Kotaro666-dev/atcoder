/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/08 09:34:57 by kkamashi          #+#    #+#             */
/*   Updated: 2020/05/08 09:48:49 by kkamashi         ###   ########.fr       */
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
    string X;
    cin >> X;

    // if (X.size() == 0)
    // {
    //     cout << "NO" << endl;
    //     return (0);
    // }
    bool choku = true;
    for (int i = 0; i < X.size(); i++)
    {
        if (X[i] == 'c' && i != X.size() - 1)
        {
            if (X[i + 1] != 'h')
            {
                choku = false;
                break;
            }
            else
            {
                i++;
            }
        }
        else if (!(X[i] == 'o' || X[i] == 'k' || X[i] == 'u'))
        {
            choku = false;
            break;
        }
    }
    string ans;
    if (choku == true)
    {
        ans = "YES";
    }
    else
    {
        ans = "NO";
    }
    cout << ans << endl;

    return (0);
}