/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/02 09:31:15 by kkamashi          #+#    #+#             */
/*   Updated: 2020/06/02 09:39:59 by kkamashi         ###   ########.fr       */
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

    vector<string> name(N);
    vector<int> population(N);
    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        cin >> name[i] >> population[i];
        sum += population[i];
    }

    int majority;
    bool odd = false;
    if (sum % 2 != 0)
    {
        odd = true;
        majority = sum / 2 + 1;
    }
    else
    {
        majority = sum / 2;
    }

    string ans = "atcoder";
    for (int i = 0; i < N; i++)
    {
        if (odd == false && population[i] > majority)
        {
            ans = name[i];
            break;
        }
        else if (odd == true && population[i] >= majority)
        {
            ans = name[i];
            break;
        }
    }
    cout << ans << endl;
    return (0);
}