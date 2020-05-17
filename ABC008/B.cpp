/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/17 12:18:53 by kkamashi          #+#    #+#             */
/*   Updated: 2020/05/17 17:51:19 by kkamashi         ###   ########.fr       */
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

    if (N == 1)
    {
        string name;
        cin >> name;
        cout << name << endl;
        return (0);
    }

    vector<string> S(N);
    for (int i = 0; i < N; i++)
    {
        cin >> S[i];
    }

    vector<int> counter(N, 0);
    int max_counter = 0;
    int location;
    for (int i = 0; i < N - 1; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            if (S[i] == S[j])
            {
                counter[i]++;
            }
        }
        if (max_counter < counter[i])
        {
            max_counter = counter[i];
            location = i;
        }
    }
    string ans = S[location];
    cout << ans << endl;
    return (0);
}