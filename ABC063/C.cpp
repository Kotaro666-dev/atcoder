/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/08 13:19:02 by kkamashi          #+#    #+#             */
/*   Updated: 2020/06/08 13:32:41 by kkamashi         ###   ########.fr       */
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

    vector<int> score(N);
    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        cin >> score[i];
        sum += score[i];
    }
    if (sum % 10 != 0)
    {
        cout << sum << "\n";
        return (0);
    }

    sort(score.begin(), score.end());
    for (int i = 0; i < score.size(); i++)
    {
        if (score[i] % 10 != 0)
        {
            sum -= score[i];
        }

        if (sum % 10 != 0)
        {
            cout << sum << "\n";
            return (0);
        }
    }
    if (sum % 10 == 0)
    {
        sum = 0;
    }
    cout << sum << "\n";
    return (0);
}