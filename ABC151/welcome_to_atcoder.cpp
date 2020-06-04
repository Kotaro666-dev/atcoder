/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   welcome_to_atcoder.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/04 17:25:53 by kkamashi          #+#    #+#             */
/*   Updated: 2020/06/04 17:38:04 by kkamashi         ###   ########.fr       */
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
    int N, M;
    cin >> N >> M;

    vector<bool> isAlreadyAC(N, false);
    vector<int> waList(N, 0);

    int p;
    string result;
    for (int i = 0; i < M; i++)
    {
        cin >> p >> result;
        p--;
        if (result == "AC")
        {
            isAlreadyAC[p] = true;
        }
        else
        {
            if (isAlreadyAC[p] == false)
            {
                waList[p]++;
            }
        }
    }

    int ac = 0;
    int wa = 0;
    for (int i = 0; i < N; i++)
    {
        if (isAlreadyAC[i] == true)
        {
            ac++;
            wa += waList[i];
        }
    }

    cout << ac << " " << wa << endl;
    return (0);
}